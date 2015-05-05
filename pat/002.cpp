/*
#include <iostream>
using namespace std;

const int N = 100001;
int prime[N];

int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
        prime[i] = 1;
    prime[2] = 1;
    for(int i=2; i<n; i++)
        for(int j=i+i; j<n; j+=i)
            if(j%i ==0)
                prime[j] = 0;
    int ans = 0;
    for(int i=2; i<n-1; i++)
        if(prime[i] && prime[i+2])
            ans++;
    cout<<ans<<endl;
	return 0;
}
*/
