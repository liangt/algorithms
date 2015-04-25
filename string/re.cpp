/*
#include <iostream>
#include <cstring>
#include <string>
#include <stack>
using namespace std;

struct state{
    char c;
	int idx;
    state* out;
    state* epout1;  // 空转移
	state* epout2;  // 空转移
    state(char c, int idx): c(c), idx(idx), out(NULL), epout1(NULL), epout2(NULL){}
};

const int N = 50; // 设置正则表达式的长度的最大值
state* nfa[N+3];
state  *pre[N+3],  *nxt[N+3];    // 预先分配两个数组，用于提高匹配过程的速度
bool visit[N+3];

// 这里只考虑基本正则表达式
// 连接, 选择: |, 闭包: *, 括号: ()
void buildNFA(string p){
    int n = p.size();
    if(p[0]!='(' ||  p[n-1]!=')'){
        p = "(" + p + ")";  // 为方便处理，给正则表达式外围添上括号
        n += 2;
    }
    for(int i=0; i<n; i++)
        nfa[i] = new state(p[i], i);
    nfa[n] = new state('\0', n);

    // 每一个字母表中字母都添加指向其后一个字符的连接，即匹配转移
    for(int i=0; i<n; i++){
        if(p[i]=='(' || p[i]==')' || p[i]=='*' || p[i]=='|')
            continue;
        nfa[i]->out = nfa[i+1];
    }

    // 添加空转移
    nfa[n-1]->epout1 =  nfa[n];
    int lp;   // 左括号的位置或前一个位置
    int op;
    stack<int> ops;   // 符号栈中只有两种: |和(
    for(int i=0; i<n; i++){
        lp = i;
        if(p[i]=='(' || p[i]=='|')
            ops.push(i);
        else if(p[i] == ')'){
            op = ops.top();
            ops.pop();
            if(p[op] == '|'){  // 选择运算
                lp = ops.top();
                ops.pop();
				if(nfa[lp]->epout1 == NULL)
					nfa[lp]->epout1 = nfa[op+1];   // ( ---> |的后一个状态
				else
					nfa[lp]->epout2 = nfa[op+1];   // ( ---> |的后一个状态
				if(nfa[op]->epout1 == NULL)
					nfa[op]->epout1 = nfa[i];  // | ---> )
				else
					nfa[op]->epout2 = nfa[i];  // | ---> )
            }
            else  // 符号栈顶是左括号
                lp = op;
        }
        if(i<n-1 && p[i+1]=='*'){  //闭包运算
			if(nfa[lp]->epout1 == NULL)
				nfa[lp]->epout1 = nfa[i+1];
			else
				nfa[lp]->epout2 = nfa[i+1];
			if(nfa[i+1]->epout1 == NULL)
				nfa[i+1]->epout1 = nfa[lp];
			else
				nfa[i+1]->epout2 = nfa[lp];
        }
        if(p[i]=='(' || p[i]=='*' || p[i]==')')
			if(nfa[i]->epout1 == NULL)
				nfa[i]->epout1 = nfa[i+1];
			else
				nfa[i]->epout2 = nfa[i+1];
    }
    // return nfa[0];    nfa[0]为起始状态
}

void dfs(state** ans, state* s, int& n1){
    if(s == NULL || visit[s->idx])
        return;
    ans[n1++] = s;
	visit[s->idx] = true;
    dfs(ans, s->epout1, n1);
	dfs(ans, s->epout2, n1);
}

void travel(state* s){
    if(s == NULL || visit[s->idx])
        return;
	visit[s->idx] = true;
    if(s->out != NULL){
        cout<<s->c<<" -----------> "<<s->out->c<<endl;
        travel(s->out);
    }
    if(s->epout1 != NULL){
        cout<<s->c<<" +++++++> "<<s->epout1->c<<endl;
        travel(s->epout1);
    }
	if(s->epout2 != NULL){
        cout<<s->c<<" +++++++> "<<s->epout2->c<<endl;
        travel(s->epout2);
    }
}

bool recognition(string s){
    int n1=0, n2, n=s.size();
	memset(visit, 0, sizeof(visit));
    dfs(pre, nfa[0], n1);
    for(int i=0; i<n; i++){
        n2 = 0;
        for(int j=0; j<n1; j++)
            if(pre[j]->c == s[i]){
				memset(visit, 0, sizeof(visit));
                dfs(nxt, pre[j]->out, n2);
			}
        if(n2 == 0)
            return false;
        swap(pre, nxt);
        n1 = n2;
    }
    for(int i=0; i<n1; i++)
        if(pre[i]->c == '\0')
            return true;
    return false;
}

int main(){
    string s, p;
    cin>>p;
    buildNFA(p);
    travel(nfa[0]);
    while(cin>>s)
        cout<<recognition(s)<<endl;
	return 0;
}
*/