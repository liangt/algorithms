#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct node{
    char ch;
    node* left;
    node* right;
    node(char ch): ch(ch), left(NULL), right(NULL){}
};

//  递归实现
node* re2treeRecursion(string re, int n, int s){
}

void linkOperator(string re, int n, int i, string tmp, stack<string>& ans, stack<char>& ops){
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
                linkOperator(re, n, i, tmp, ans, ops);
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
                linkOperator(re, n, i, tmp, ans, ops);
                break;
            default:
                tmp = re[i];
                linkOperator(re, n, i, tmp, ans, ops);
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
	return 0;
}
