/*
#include <iostream>
using namespace std;

int main(){
    int n, tmp;
    char c;
    cin>>n>>c;
    tmp = (n + 1) >>1;
    int k=0;
    while(k*k <= tmp)
        k++;
    k--;
    for(int i=k; i>0; i--){
        tmp = 2*i - 1;
        for(int j=0; j<k-i;j++)
            cout<<' ';
        for(int j=0; j<tmp; j++)
            cout<<c;
        cout<<endl;
    }
    for(int i=2; i<=k; i++){
        tmp = 2*i - 1;
        for(int j=0; j<k-i;j++)
            cout<<' ';
        for(int j=0; j<tmp; j++)
            cout<<c;
        cout<<endl;
    }
    cout<<n - 2*k*k + 1<<endl;
	return 0;
}
*/
