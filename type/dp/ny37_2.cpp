/*
#include <cstdio>
#include <cstring>

const int N = 1002;
char st[N];
int ans[3][N];

int main(){
    int t, n, j, tn, r1, r2, r3;
    scanf("%d", &t);
    while(t--){
        scanf("%s", st);
        n = strlen(st);
        memset(ans, 0, sizeof(ans));
        for(int l=1; l<n; l++){
            tn = n - l;
            r1 = (l - 1) % 3;
            r2 = l % 3;
            r3 = 3 - r1 - r2;
            for(int i=0; i<tn; i++){
                j = i + l;
                if(st[i] == st[j])
                    ans[r3][i] = ans[r1][i+1];
                else if(ans[r2][i+1] < ans[r2][i])
                    ans[r3][i] = ans[r2][i+1] + 1;
                else
                    ans[r3][i] = ans[r2][i] + 1;
            }
        }
        printf("%d\n", ans[r3][0]);
    }
	return 0;
}
*/
