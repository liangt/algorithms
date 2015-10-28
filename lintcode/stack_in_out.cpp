/*
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {4, 5, 3, 1, 2};
    int n = 5, i = 1, j = 0;
    stack<int> st;
    st.push(a[0]);
    while(!st.empty()){
        while(st.top() != b[j] && i < n)
            st.push(a[i++]);
        if(st.top() != b[j]){
            cout<<"false"<<endl;
            break;
        }
        st.pop();
        j++;
    }
    cout<<"true"<<endl;
    return 0;
}
*/
