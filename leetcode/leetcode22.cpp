/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// n为'('还剩余的个数
// m为')'还剩余的个数
void help(vector<string>& ans, int n,  int m, string tmp){
    if(n==0 && m==0){
        ans.push_back(tmp);
        return;
    }
    if(m)
        help(ans, n, m-1, tmp+"(");
    if(m<n)
        help(ans, n-1, m, tmp+")");
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    if(n)
        help(ans, n, n, "");
    return ans;
}

vector<string> generateParenthesis(int n) {
    vector<string> ans, tmp;
    if(n == 0)
        return ans;
    else if(n == 1){
        ans.push_back("()");
        return ans;
    }
    else{
        ans.push_back("(())");
        ans.push_back("()()");
        if(n == 2)
            return ans;
        n -= 2;
        int c;
        while(n--){
            c = ans.size();
            for(int i=0; i<c; i++)
                tmp.push_back("("+ans[i]+")");
            for(int i=0; i<c-1; i++){
                tmp.push_back(ans[i]+"()");
                tmp.push_back("()"+ans[i]);
            }
            tmp.push_back(ans[c-1]+"()");
            ans = tmp;
            tmp.clear();
        }
    }
    return ans;
}

void help(vector<string>& ans, int n, string tmp, bool tag){
    if(n==0){
        ans.push_back(tmp);
        return;
    }
    if(tag){
        help(ans, n-1, "("+tmp+")", false);
        help(ans, n-1, tmp+"()", true);
    }
    else{
        help(ans, n-1, "("+tmp+")", false);
        help(ans, n-1, tmp+"()", false);
        help(ans, n-1, "()"+tmp, false);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    help(ans, n-1, "()", true);
    return ans;
}

int main(){
    int n;
    vector<string> ans;
    while(cin>>n){
        ans = generateParenthesis(n) ;
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
*/
