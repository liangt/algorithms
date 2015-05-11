/*
#include <cstdio>
#include <cstring>

const int N = 101;
const int P = 1000000007;
int a[N], b[N],c[N], d[N];

int main(){
    int n;
    long long tmp = 1;
    a[1] = 0;
    for(int i=2; i<N; i++){
        tmp = tmp * i % P;    // i! % P
        a[i] = (i * a[i-1] + tmp * (i-1) / 2) % P;
    }

    while(scanf("%d", &n) != EOF){
        for(int i=1; i<=n; i++)
            scanf("%d", &b[i]);
        for(int i=1; i<=n; i++){
            c[i] = 0;
            for(int j=i+1; j<=n; j++)
                if(b[i] > b[j])
                    c[i]++;
        }
        d[n-1] = c[n-1];
        tmp = 1;
        for(int i=n-2; i>0; i--){
            d[i]  = (c[i]*a[n-i] + c[i+1]*tmp + d[i+1]) % P;
            tmp = tmp * (n - i) % P;  // (n-i)! % P
            d[i] = (d[i] + c[i]*(c[i]-1)/2*tmp) % P;
        }
        printf("%d\n", d[1]);
    }
	return 0;
}
*/
