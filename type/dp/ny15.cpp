/*
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
    int j, tn, tp, tmp;
    for(int l=1; l<n; l++){
        tn = n - l;
        for(int i=0; i<tn; i++){
            j = i + l;
            tp = N;
            if((str[i]=='(' && str[j]==')') || (str[i]=='[' && str[j]==']'))
                tp = s[i+1][j-1];
            for(int k=i; k<j; k++){
                tmp = s[i][k] + s[k+1][j];
                if(tmp < tp)
                    tp = tmp;
            }
            s[i][j] = tp;
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
*/
