/*
#include <cstdio>

const int N = 501;
int n, m, a[N][N], upval1[N], upidx1[N], upval2[N], upidx2[N], downval1[N], downidx1[N], downval2[N], downidx2[N];
long long ans[N][N];

int main(){
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    int tn, tv, tx;
    for(int i=n-1; i>=0; i--){  // 从最后一列开始处理
        // up
        upval1[0] = a[0][i];
        upidx1[0] = 0;
        for(int j=1; j<n; j++){  // 从第一行开始处理
            if(upval1[j-1] == -1){
                upval1[j] = a[j][i];
                upidx1[j] = j;
            }
            else{
                upval1[j] = a[j][i] + upval1[j-1];
                upidx1[j] = upidx1[j-1];
            }
        }
        // 处理回转的情况
        upval2[n-1] = -1;
        upidx2[n-1] = n;
        for(int j=n-2; j>=0; j--){
            tn = j + 1;
            if(upval2[tn] == -1){
                upval2[j] = a[tn][i];
                upidx2[j] = upidx2[tn];
            }
            else{
                upval2[j] = upval2[tn] + a[tn][i];
                upidx2[j] = tn;
            }
        }
    }
    long long mx = -1;
    for(int i=0; i<n; i++)
        if(mx < ans[n-1][i])
            mx = ans[n-1][i];
    printf("%lld\n", mx);
	return 0;
}
*/
