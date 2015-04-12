/*
#include <cstdio>

const int N = 102;
int a[N], d[N];

int main(){
    int n, t;
    scanf("%d", &n);
    scanf("%d", d);
    for(int i=2; i<=n; i++){
        for(int j=0; j<i; j++)
            scanf("%d", a+j);
        for(int k=i-2; k>0; k--)
            if(d[k] < d[k-1])
                 d[k] = d[k-1];
        for(int k=0; k<i; k++)
            d[k] += a[k];
    }
    t = 0;
    for(int i=0; i<n; i++)
        if(t < d[i])
            t = d[i];
    printf("%d\n", t);
}
*/
