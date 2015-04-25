/*
#include <iostream>
#include <string>
#include <stack>
#include <list>
using namespace std;

// 由于没有显式连接操作符，故通过检测下一个字符来判断需要添加连接操作符
// 当一字符是*,+,?,|和)时，不需要在运算符栈ops中添加连接操作符（用#表示连接操作)
// 否则需要添加连接操作符
// 添加连接操作符时，需要判断运算符栈顶部操作符的优先级，当栈顶运算符的优先级低于它时，直接入栈
// 否行先进行栈顶运算，直到栈顶栈顶运算符的优先级低于它时再入栈
// 运算符栈中只会有#和|两种运算符，因为*,+,?运算符根本不会入栈
void addLinkOperator(string re, int n, int i, string tmp, stack<string>& ans, stack<char>& ops){
    if(i!=n-1 && re[i+1]!='*' && re[i+1]!='+' && re[i+1]!='?' && re[i+1]!='|' && re[i+1]!=')'){
        while(!ans.empty() && ans.top()!="(" && !ops.empty() && ops.top()=='#'){
            tmp = ans.top() + tmp + "#";
            ops.pop();   // delete #
            ans.pop();
        }
        ans.push(tmp);
        ops.push('#');
    }
    else
        ans.push(tmp);
}

string re2post(string re){
    int n = re.size();
    string tmp;
    stack<char> ops;
    stack<string> ans;
    for(int i=0; i<n; i++){
        switch(re[i]){
            case '*':
            case '?':
            case '+':
                tmp = ans.top() + re[i];
                ans.pop();
                addLinkOperator(re, n, i, tmp, ans, ops);
                break;
            case '|':
                tmp = ans.top();
                ans.pop();
                while(!ans.empty() && ans.top()!="(" && !ops.empty()){
                    tmp = ans.top() + tmp + ops.top();
                    ans.pop();
                    ops.pop();
                }
                ans.push(tmp);
                ops.push('|');
                break;
            case '(':
                ans.push("(");
                break;
            case ')':
                tmp = ans.top();
                ans.pop();
                while(ans.top()!="("){
                    tmp = ans.top() + tmp + ops.top();
                    ans.pop();
                    ops.pop();
                }
                ans.pop();  // delete (
                addLinkOperator(re, n, i, tmp, ans, ops);
                break;
            default:
                tmp = re[i];
                addLinkOperator(re, n, i, tmp, ans, ops);
        }
    }
    tmp = ans.top();
    ans.pop();
    while(!ops.empty()){
        tmp = ans.top() + tmp +ops.top();
        ans.pop();
        ops.pop();
    }
    return tmp;
}

// 状态
struct state{
	int ch;                // 0-127: ASCII字符, 128: 空转移(分支), 129: 终止状态
	state* out1;   //  分支1
	state* out2;   //  分支2
	state(): ch(-1), out1(NULL), out2(NULL){}
	state(int ch, state* out1=NULL, state* out2=NULL):ch(ch), out1(out1), out2(out2){}
};

// NFA片段
struct frag{
	state* start;         // 开始状态
	list<state*> out; // 没有任何指向其他状态的状态
	frag(): start(NULL){}
	frag(char c): start(new state(c)){}
	frag(state* s, list<state*> o): start(s), out(o){}
	bool operator!=(int c){
	    return start->ch != c;
	}
};

void linkOperator(string re, int n, int i, frag nexttop, stack<frag>& nfafrag, stack<char>& ops){
    frag tmp;
    if(i!=n-1 && re[i+1]!='*' && re[i+1]!='+' && re[i+1]!='?' && re[i+1]!='|' && re[i+1]!=')'){
        while(!nfafrag.empty() && nfafrag.top()!='(' && !ops.empty() && ops.top()=='#'){
            tmp = nfafrag.top() ;
            nfafrag.pop();
             // 将tmp的输出状态指向nexttop的开始状态
            for(list<state*>::iterator it=tmp.out.begin(); it!=tmp.out.end(); it++)
                (*it)->out1 = nexttop.start;
            //将tmp的输出状态重置为nexttop的输出状态
            tmp.out.clear();
            tmp.out.splice(tmp.out.end(), nexttop.out);
            ops.pop();   // delete #
            nexttop = tmp;
        }
        nfafrag.push(nexttop);
        ops.push('#');
    }
    else
        nfafrag.push(nexttop);
}

state* re2nfa(string re){
	int n = re.size();
	frag tmp1, tmp2;
	state *s;
	stack<char> ops;
	stack<frag> nfafrag;
	for(int i=0; i<n; i++){
        switch(re[i]){
            case '*':
                tmp1 = nfafrag.top();
                nfafrag.pop();
                s = new state(128, tmp1.start, new state());
                for(list<state*>::iterator it=tmp1.out.begin(); it!=tmp1.out.end(); it++)
                    (*it)->out1 = s;
                tmp1.out.clear();
                tmp1.out.push_back(s->out2);
                nfafrag.push(tmp1);
                break;
            case '?':
                tmp1 = nfafrag.top();
                nfafrag.pop();
                s = new state(128, tmp1.start, new state());
                tmp1.out.push_back(s->out2);
                nfafrag.push(tmp1);
                break;
            case '+':
                tmp1 = nfafrag.top();
                nfafrag.pop();
                s = new state(128, tmp1.start, new state());
                for(list<state*>::iterator it=tmp1.out.begin(); it!=tmp1.out.end(); it++)
                    (*it)->out1 = s;
                tmp1.out.clear();
                tmp1.out.push_back(s->out2);
                nfafrag.push(tmp1);
                break;
            case '|':
                tmp1 = nfafrag.top();
                nfafrag.pop();
                while(!nfafrag.empty() && nfafrag.top()!='(' && !ops.empty()){
                    tmp2 = nfafrag.top();
                    nfafrag.pop();
                    if(ops.top() == '#'){   // #
                        // 将tmp2的输出状态指向tmp1的开始状态
                        for(list<state*>::iterator it=tmp2.out.begin(); it!=tmp2.out.end(); it++)
                            (*it)->out1 = tmp1.start;
                         //将tmp2的输出状态重置为tmp1的输出状态
                        tmp2.out.clear();
                        tmp2.out.splice(tmp2.out.end(), tmp1.out);
                    }
                    else{  // |
                        s = new state(128, tmp2.start, tmp1.start);   // 创建新的开始状态指向tmp2和tmp1的开始状态
                        tmp2.out.splice(tmp2.out.end(), tmp1.out);   // 合并tmp2和tmp1的输出状态
                        tmp2.start = s;
                    }
                    ops.pop();
                    tmp1 = tmp2;
                }
                nfafrag.push(tmp1);
                ops.push('|');
                break;
            case '(':
                nfafrag.push(frag('('));
                break;
            case ')':
                tmp1 = nfafrag.top();
                nfafrag.pop();
                while(nfafrag.top()!='('){
                    tmp2 = nfafrag.top();
                    nfafrag.pop();
                    if(ops.top() == '#'){   // #
                        // 将tmp2的输出状态指向tmp1的开始状态
                        for(list<state*>::iterator it=tmp2.out.begin(); it!=tmp2.out.end(); it++)
                            (*it)->out1 = tmp1.start;
                         //将tmp2的输出状态重置为tmp1的输出状态
                        tmp2.out.clear();
                        tmp2.out.splice(tmp2.out.end(), tmp1.out);
                    }
                    else{  // |
                        s = new state(128, tmp2.start, tmp1.start);   // 创建新的开始状态指向tmp2和tmp1的开始状态
                        tmp2.out.splice(tmp2.out.end(), tmp1.out);   // 合并tmp2和tmp1的输出状态
                        tmp2.start = s;
                    }
                    ops.pop();
                    tmp1 = tmp2;
                }
                nfafrag.pop();  // delete (
                linkOperator(re, n, i, tmp1, nfafrag, ops);
                break;
            default:
                linkOperator(re, n, i, re[i], nfafrag, ops);
        }
    }
    tmp1 = nfafrag.top();
    nfafrag.pop();
    while(!ops.empty()){
        tmp2 = nfafrag.top();
        nfafrag.pop();
        if(ops.top() == '#'){   // #
            // 将tmp2的输出状态指向tmp1的开始状态
            for(list<state*>::iterator it=tmp2.out.begin(); it!=tmp2.out.end(); it++)
                (*it)->out1 = tmp1.start;
                //将tmp2的输出状态重置为tmp1的输出状态
                tmp2.out.clear();
                tmp2.out.splice(tmp2.out.end(), tmp1.out);
        }
        else{  // |
            s = new state(128, tmp2.start, tmp1.start);   // 创建新的开始状态指向tmp2和tmp1的开始状态
            tmp2.out.splice(tmp2.out.end(), tmp1.out);   // 合并tmp2和tmp1的输出状态
            tmp2.start = s;
        }
        ops.pop();
        tmp1 = tmp2;
    }
    return tmp1.start;
}

int main(){
    string in;
    cin>>in;
    re2nfa(in);
	return 0;
}
*/
