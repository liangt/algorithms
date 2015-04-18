/*
#include <iostream>
using namespace std;

const int N = 1001;
const int M = 1000000007;
long long a[N], b[N];

int main(){
    a[2] = 6;
    for(int i=3; i<N; i++)
        a[i] = (a[i-1] + a[i-2] + 2*i) % M;
    a[1] = 1;
    b[0] = 1;
    for(int i=1; i<N; i++)
        b[i] = (b[i-1] << 1) % M;
    int n;
    while(cin>>n)
        cout<<a[n]*b[n]%M<<endl;
    return 0;
}
*/
