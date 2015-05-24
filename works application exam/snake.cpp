/*
#include <cstdio>

const int N = 500;
int n, m, a[N][N], up[N][N], down[N][N];
long long ans[N][N];

void upAndDown(int c){
    for(int i=0; i<n; i++)
        up[i][i] = down[i][i] = a[i][c];
    for(int i=1; i<n; i++)
        for(int j=0; j<i; j++){
            if(a[i][c]>-1 && up[i-1][j]>-1){
                up[i][j] = up[i-1][j] + a[i][c];
            }
            else
                up[i][j] =-1;
        }
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++){
            if(a[i][c]>-1 && up[i][0] > -1){
                up[i][j] = up[n-1][j];
            }
            else
                up[i][j] =-1;
        }
    for(int i=n-2; i>=0; i--)
        for(int j=n-1; j>i; j--){
            if(a[i][c]>-1 && down[i+1][j] > -1){
                down[i][j] = down[i+1][j] + a[i][c];
            }
            else
                down[i][j] =-1;
        }
    for(int i=1; i<n; i++)
        for(int j=0; j<i; j++){
            if(a[i][c]>-1 && down[i][n-1]>-1){
                down[i][j] = down[0][j];
            }
            else
                down[i][j] =-1;
        }
}

int main(){
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    long long tp;
    upAndDown(0);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(up[i][j] < down[i][j])
                up[i][j] = down[i][j];
    for(int i=0; i<n; i++){
        tp = -1;
        for(int j=0; j<n; j++)
            if(tp < up[j][i])
                tp = up[j][i];
        ans[0][i] = tp;
    }
    for(int i=1; i<n; i++)
        for(int j=0; j<n; j++)
            ans[i][j] = -1;

    for(int t=1; t<m; t++){
        upAndDown(t);
        for(int i=0; i<n; i++){
            // up
            for(int j=0; j<i; j++){
                tp = up[j][i];
                if(tp > ans[t][i])
                    ans[t][i] = tp;
            }
            for(int j=i; j<n; j++){
                if(ans[t-1][j]>-1 && up[j][i]>-1){
                    tp = ans[t-1][j] + up[j][i];
                    if(tp > ans[t][i])
                        ans[t][i] = tp;
                }
            }

            // down
            for(int j=0; j<=i; j++){
                if(ans[t-1][j]>-1 && down[j][i]>-1){
                    tp = ans[t-1][j] + down[j][i];
                    if(tp > ans[t][i])
                        ans[t][i] = tp;
                }
            }
            for(int j=i+1; j<n; j++){
                tp = down[j][i];
                if(tp > ans[t][i])
                    ans[t][i] = tp;
            }
        }
    }
    tp = -1;
    for(int i=0; i<n; i++)
        if(tp < ans[n-1][i])
            tp = ans[n-1][i];
    printf("%lld\n", tp);
	return 0;
}
*/
