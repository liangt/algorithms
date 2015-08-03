/*
#include <cstdio>

const int N = 505;
int a[N], ans[N][N];

int main(){
    int n, j, tp;
    while(scanf("%d", &n) != EOF){
        for(int i=0; i<n; i++)
            scanf("%d", a+i);
        for(int i=0; i<n; i++)
            ans[i][i] = 0;
        for(int l=1; l<n; l++)
            for(int i=0; i<n; i++){
                j = i + l;
                if(j >= n)
                    break;
                tp = 100000;
                for(int k=0; k<j; k++)
                    if(tp > ans[i][k] + ans[k+1][j])
                        tp = ans[i][k] + ans[k+1][j];
                ans[i][j] = tp;
            }
        printf("%d\n", ans[0][n-1]);
    }
	return 0;
}
*/
