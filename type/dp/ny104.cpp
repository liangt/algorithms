/*
#include <cstdio>
#include <cstring>

const int N = 100;
int g[N+1][N];

int main(){
    int t, r, c, ans, tp;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &r, &c);
        for(int i=1; i<=r; i++)
            for(int j=0; j<c; j++)
                scanf("%d", &g[i][j]);
        for(int i=2; i<=r; i++)
            for(int j=0; j<c; j++)
                g[i][j] += g[i-1][j];
        ans = g[1][0];
        for(int i=1; i<=r; i++)
            for(int j=i; j<=r; j++){
                tp = 0;
                for(int k=0; k<c; k++){
                    if(tp <= 0)
                        tp = g[j][k] - g[i-1][k];
                    else
                        tp += g[j][k] - g[i-1][k];
                    if(tp > ans)
                        ans = tp;
                }
            }
        printf("%d\n", ans);
    }
	return 0;
}
*/
