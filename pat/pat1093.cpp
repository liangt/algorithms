/*
#include <iostream>
#include <string>
using namespace std;

int main(){
    int p=0, a=0, t=0;
    string st;
    cin>>st;
    for(int i=0; i<st.size(); i++){
        if(st[i] == 'P')
            p = (p + 1) % 1000000007;
        else if(st[i] == 'A')
            a = (a + p) % 1000000007;
        else
            t = (t + a) % 1000000007;
    }
    cout<<t<<endl;
    return 0;
}
*/
