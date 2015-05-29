/*
#include <cstdio>
#include <cstring>

const int N  = 1000005;
int a[N], f[N], g[N];

int main(){
    int n, m;
    while(scanf("%d%d", &m, &n) != EOF){
        for(int i=1; i<=n; i++)
            scanf("%d", a+i);
        memset(g, 0, sizeof(g));
        for(int j=1; j<=m; j++){
            for(int i=j; i<=n; i++)
                f[i] = g[i-1] < f[i-1] ? f[i-1]  + a[i]: g[i-1] + a[i];
            g[j] = f[j];
            for(int i=j+1; i<=n; i++)
                g[i] = f[i] < g[i-1] ? g[i-1] : f[i];
        }
        printf("%d\n", g[n]);
    }
	return 0;
}
*/
