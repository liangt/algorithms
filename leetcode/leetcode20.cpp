/*
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s){
    stack<char> tmp;
    for(int i=0; i<s.size(); i++){
        switch(s[i]){
        case ')':
            if(tmp.empty() || tmp.top()!='(')
                return false;
            else
                tmp.pop();
            break;
        case ']':
            if(tmp.empty() || tmp.top()!='[')
                return false;
            else
                tmp.pop();
            break;
        case '}':
            if(tmp.empty() || tmp.top()!='{')
                return false;
            else
                tmp.pop();
            break;
        default:
            tmp.push(s[i]);
        }
    }
    return tmp.empty();
}

int main(){
    string in;
    while(cin>>in)
        cout<<isValid(in)<<endl;
    return 0;
}
*/
