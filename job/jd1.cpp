/*
#include <iostream>
using namespace std;

const int M = 1000000007;
int n, m, k, ans, g[50][50];
void dfs(int r, int c, int num, int val){
    if(r == n && c == m){
        if(k == num || val < g[n][m] && num + 1 == k){
            ans++;
            if(ans >= M)
                ans -= M;
        }
        return;
    }
    if(r < n){ // down
        dfs(r+1, c, num, val); // 不取
        if(val < g[r][c]) // 取
            dfs(r+1, c, num+1, g[r][c]);
    }
    if(c < m){ // right
        dfs(r, c+1, num, val); // 不取
        if(val < g[r][c]) // 取
            dfs(r, c+1, num+1, g[r][c]);
    }
}

int main(){
    cin>>n>>m>>k;
    n--, m--;
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= m; j++)
            cin>>g[i][j];
    ans = 0;
    dfs(0, 0, 0, 0);
    cout<<ans<<endl;
    return 0;
}
*/
