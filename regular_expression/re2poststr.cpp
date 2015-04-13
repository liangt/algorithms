/*
#include <iostream>
#include <string>
#include <stack>
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

int main(){
    string in;
    while(cin>>in)
        cout<<re2post(in)<<endl;
	return 0;
}
*/
