#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct state{
    char c;
    state* out;
    state* epout;  // 空转移
    state(char c): c(c), out(NULL), epout(NULL){}
};

const int N = 50; // 设置正则表达式的长度的最大值
state* nfa[N+3];
state  *pre[N+3],  *next[N+3];    // 预先分配两个数组，用于提高匹配过程的速度

// 这里只考虑基本正则表达式
// 连接, 选择: |, 闭包: *, 括号: ()
void buildNFA(string p){
    int n = p.size();
    if(p[0]!='(' ||  p[n-1]!=')'){
        p = "(" + p + ")";  // 为方便处理，给正则表达式外围添上括号
        n += 2;
    }
    for(int i=0; i<n; i++)
        nfa[i] = new state(p[i]);
    nfa[n] = new state('\0');

    // 每一个字母表中字母都添加指向其后一个字符的连接，即匹配转移
    for(int i=0; i<n; i++){
        if(p[i]=='(' || p[i]==')' || p[i]=='*' || p[i]=='|')
            continue;
        nfa[i]->out = nfa[i+1];
    }

    // 添加空转移
    nfa[n-1]->epout =  nfa[n];
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
                nfa[lp]->epout = nfa[op+1];   // ( ---> |的后一个状态
                nfa[op]->epout = nfa[i];  // | ---> )
            }
            else  // 符号栈顶是左括号
                lp = op;
        }
        if(i<n-1 && p[i+1]=='*'){  //闭包运算
            nfa[lp]->epout = nfa[i+1];
            nfa[i+1]->epout = nfa[lp];
        }
        if(p[i]=='(' || p[i]=='*' || p[i]==')')
            nfa[i]->epout = nfa[i+1];
    }
    // return nfa[0];    nfa[0]为起始状态
}

void dfs(state** ans, state* s, int& n1){
    if(s == NULL)
        return;
    ans[n1++] = s;
    dfs(ans, s->epout, n1);
}

void travel(state* s){
    if(s == NULL)
        return;
    if(s->out != NULL){
        cout<<s->c<<" -----------> "<<s->out->c<<endl;
        travel(s->out);
    }
    if(s->epout != NULL){
        cout<<s->c<<" +++++++> "<<s->epout->c<<endl;
        travel(s->epout);
    }
}

bool recognition(string s){
    int n1=0, n2, n=s.size();
    dfs(pre, nfa[0], n1);
    cout<<n1<<endl;
    for(int i=0; i<n; i++){
        n2 = 0;
        for(int j=0; j<n1; j++)
            if(pre[j]->c == s[i])
                dfs(next, pre[j], n2);
        if(n2 == 0)
            return false;
        swap(pre, next);
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
    //travel(nfa[0]);
    while(cin>>s)
        cout<<recognition(s)<<endl;
	return 0;
}
