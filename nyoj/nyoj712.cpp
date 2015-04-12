/*
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 52;
int d[2*N][N][N], a[N][N];

int main(){
    int k ,m, n;
    scanf("%d", &k);
    while(k--){
        scanf("%d%d", &m, &n);
        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
                scanf("%d", &a [i][j]);
        memset(d, 0, sizeof(d));
        for(int t=2; t<=m+n; t++)
            for(int i=1; i<=m; i++){
                    if(t - i  < 1 || t - i > n)
                        continue;
                    for(int j=1; j<=m; j++)
                        if(i != j && t - j <= n && t - j > 0){
                            d[t][i][j] = max(d[t-1][i][j], d[t-1][i-1][j]);
                            d[t][i][j] = max(d[t][i][j], d[t-1][i][j-1]);
                            d[t][i][j] = max(d[t][i][j], d[t-1][i-1][j-1]);
                            d[t][i][j] += a[i][t-i] + a[j][t-j];
                        }
            }
        printf("%d\n", d[m+n-1][m][m-1]+a[m][n]);
    }
    return 0;
}
*/
