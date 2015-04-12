/*
#include <cstdio>
#include <cstring>

const int N = 1002;
int d[N][N];
char s1[N], s2[N];

int main(){
    int k, n1, n2;
    scanf("%d", &k);
    while(k--){
        scanf("%s", s1);
        scanf("%s", s2);
        n1 = strlen(s1);
        n2 = strlen(s2);
        memset(d, 0, sizeof(d));
        for(int i=1; i<=n1; i++)
            for(int j=1; j<=n2; j++){
              if(s1[i-1] == s2[j-1])
                    d[i][j] = d[i-1][j-1] + 1;
              else
                    d[i][j] = d[i-1][j] < d[i][j-1] ? d[i][j-1] : d[i-1][j];
            }
        printf("%d\n", d[n1][n2]);
    }
    return 0;
}
*/
