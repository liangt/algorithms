/*
#include <iostream>
#include <string>
using namespace std;

int a[10];

int main(){
    string in;
    cin>>in;
    int n = in.size();
    for(int i=0; i<n; i++)
        a[in[i]-'0']++;
    int tp, carry=0;
    string ans(n, '0');
    for(int i=n-1; i>=0; i--){
        tp = ((in[i] - '0') << 1) + carry;
        carry = 0;
        if(tp >= 10){
            carry = 1;
            tp -= 10;
        }
        a[tp]--;
        ans[i] = '0' + tp;
    }
    tp = 1;
    for(int i=0; i<10; i++)
        if(a[i] != 0){
            tp = 0;
            break;
        }
    if(tp)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    if(carry)
        cout<<'1';
    for(int i=0; i<n; i++)
        cout<<ans[i];
    cout<<endl;
	return 0;
}
*/
