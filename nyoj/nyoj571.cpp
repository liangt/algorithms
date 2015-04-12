/*
#include <cstdio>

const int N = 52;
int d[N][N];

int main(){
    int n, k, m;
    scanf("%d", &m);
    while(m--){
         scanf("%d%d", &n, &k);
            d[0][0] = 1;
            for(int i=1; i<= k; i++)
                for(int j=0; j <= n; j++){
                    d[i][j] = d[i-1][j] ;
                    if(i <= j)
                        d[i][j] += d[i][j-i];
                }
            printf("%d\n", d[k][n]-d[k-1][n]);
    }
    return 0;
}
*/
