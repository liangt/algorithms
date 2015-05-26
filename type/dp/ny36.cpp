/*
#include <cstdio>
#include <cstring>

const int N = 1005;
char st1[N], st2[N];
int ans[2][N];

int main(){
    int n, n1, n2, r1, r2;
    scanf("%d", &n);
    while(n--){
        scanf("%s%s", st1, st2);
        n1 = strlen(st1);
        n2 = strlen(st2);
        memset(ans, 0, sizeof(ans));
        for(int i=0; i<n1; i++){
            r1 = i & 1;
            r2 = 1 - r1;
            for(int j=0; j<n2; j++)
                if(st1[i] == st2[j])
                    ans[r2][j+1] = ans[r1][j] + 1;
                else if(ans[r1][j+1] < ans[r2][j])
                    ans[r2][j+1] = ans[r2][j];
                else
                    ans[r2][j+1] = ans[r1][j+1];
        }
        printf("%d\n", ans[r2][n2]);
    }
	return 0;
}
*/
