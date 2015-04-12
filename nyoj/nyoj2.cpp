/*
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int n;
    char tp;
    bool tag;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        if(str[0] == ')' || str[0] == ']'){
            cout<<"No"<<endl;
            continue;
        }
        stack<char> st;
        st.push(str[0]);
        tag = true;
        for(int i=1; i<str.size(); i++){
            if(str[i] == '(' || str[i] == '[')
                st.push(str[i]);
            else{
                if(st.empty()){
                    tag = false;
                    break;
                }
                else{
                    tp = st.top();
                    st.pop();
                    if(tp == '(' && str[i] == ')' || tp == '[' && str[i] == ']')
                        continue;
                    else{
                        tag = false;
                        break;
                    }
                }
            }
        }
        if(tag && st.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
*/
