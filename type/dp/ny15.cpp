#include <cstdio>
#include <cstring>

const int N = 105;
char str[N];
int s[N][N];

int  solve(){
    int n = strlen(str);
    if(n == 0)
        return 0;
    memset(s, 0, sizeof(s));
    for(int i=0; i<n; i++)
        s[i][i] = 1;
    int j, tn;
    for(int i=0; i<n; i++){
        tn = n - i;
        for(int l=1; l<tn; l++){
            j = i + l;
            if(str[i]=='(' && str[j]==')' || str[i]=='['&&str[j]==']')
                s[i][j] = s[i+1][j-1];
            else{
                if(s[i][j-1] < s[i+1][j])
                    s[i][j] = 1 + s[i][j-1];
                else
                    s[i][j] = 1 + s[i+1][j];
            }
        }
    }
    return s[0][n-1];
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%s", str);
        printf("%d\n", solve());
    }
	return 0;
}
