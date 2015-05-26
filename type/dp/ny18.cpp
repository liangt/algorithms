/*
#include <cstdio>

const int N = 103;
int ans[2][N];

int main(){
    int n, t, r1, r2;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        r2 = i & 1;
        r1 = 1 - r2;
        for(int j=1; j<=i; j++){
            scanf("%d", &t);
            ans[r2][j] = (ans[r1][j-1]  > ans[r1][j] ? ans[r1][j-1]  : ans[r1][j] ) + t;
        }
    }
    t = 0;
    for(int i=1; i<=n; i++)
        if(ans[r2][i] > t)
            t = ans[r2][i];
    printf("%d\n", t);
	return 0;
}
*/
