/*
#include <cstdio>
#include <cstring>

const int N = 100;
int g[N][N], d[N][N], n, m;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

// 记忆化搜索
int dfs(int r, int c){
    if(d[r][c])
        return d[r][c];
    int res=0, tp, tr, tc;
    for(int i=0; i<4; i++){
        tr = r + dx[i];
        tc = c + dy[i];
        if(tr>=0 && tr<n && tc>=0 && tc<m && g[tr][tc]<g[r][c]){
            tp = dfs(tr, tc);
            if(tp > res)
                res = tp;
        }
    }
    res++;
    d[r][c] = res;
    return res;
}

int main(){
    int t, ans;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &m);
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                scanf("%d", &g[i][j]);
                d[i][j] = 0;
            }
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                dfs(i,j);
        ans = 0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(ans < d[i][j])
                    ans = d[i][j];
        printf("%d\n", ans);
    }
	return 0;
}
*/
