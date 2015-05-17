/*
#include <iostream>
using namespace std;

const int N = 100;
int st[8][N], a[N], n;

void build(){
    for(int i=0; i<n; i++)
        st[0][i] = a[i];
    int m, j=1;
    for(int k=1; k<n; k<<=1){
        m = n - k;
        for(int i=0; i<m; i++)
            if(st[j-1][i] > st[j-1][i+k])
                st[j][i] = st[j-1][i+k];
            else
                st[j][i] = st[j-1][i];
        j++;
    }
}

// 找出不超过n的最大的2的幂
int findMaxLess(int n){
    return n==0 ? 0 : 1<<(31-__builtin_clz(n));
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    build();
    int k, l, r, c;
    cin>>k;
    while(k--){
        cin>>l>>r;
        c = 31-__builtin_clz(r-l);
        l = st[c][l];
        r = st[c][r-(1<<c)+1];
        if(l > r)
            cout<<r<<endl;
        else
            cout<<l<<endl;
    }
	return 0;
}
*/
