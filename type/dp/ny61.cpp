#include <cstdio>
#include <cstring>

const int N = 50;
int g[N][N], ans[2*N][N][N];

int main(){
    int t, n,m, K, x1, y1, x2, y2, tp;
    scanf("%d", &t);
    while(t--){
         scanf("%d%d", &n, &m);
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                scanf("%d", &g[i][j]);
        K = m + n - 2;
        memset(ans, 0, sizeof(ans));
        for(int k=1; k<K; k++){
            for(x1=0; x1<n; x1++){
                if(x1 > k)
                    break;
                y1 = k - x1;
                if(y1 >= m)
                    continue;
                for(x2=0; x2<n; x2++){
                    if(x2 == x1)
                        continue;
                    if(x2 > k)
                        break;
                    y2 = k - x2;
                    if(y2 >= m)
                        continue;
                    tp = ans[k-1][x1-1][x2-1];
                    if(tp < ans[k-1][x1-1][x2])
                        tp = ans[k-1][x1-1][x2];
                    if(tp < ans[k-1][x1][x2-1])
                        tp = ans[k-1][x1][x2-1];
                    if(tp < ans[k-1][x1][x2])
                        tp = ans[k-1][x1][x2];
                    ans[k][x1][x2] = tp + g[x1][y1] + g[x2][y2];
                }
            }
        }
        printf("%d\n", ans[K-1][n-1][n-2]);
    }
	return 0;
}
