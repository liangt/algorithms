/*
#include <cstdio>
#include <cstring>

const int N = 1002;
char st[N];
int ans[N][N];

int main(){
    int t, n, j, tn;
    scanf("%d", &t);
    while(t--){
        scanf("%s", st);
        n = strlen(st);
        for(int l=1; l<n; l++){
            tn = n - l;
            for(int i=0; i<tn; i++){
                j = i + l;
                if(st[i] == st[j])
                    ans[i][j] = ans[i+1][j-1];
                else if(ans[i+1][j] > ans[i][j-1])
                    ans[i][j] = ans[i][j-1] + 1;
                else
                    ans[i][j] = ans[i+1][j] + 1;
            }
        }
        printf("%d\n", ans[0][n-1]);
    }
	return 0;
}
*/
