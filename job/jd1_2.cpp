/*
#include <iostream>
#include <vector>
using namespace std;

const int M = 1000000007;
int n, m, k, num, g[50][50], ct;
const int INF = 100;

void dfs(vector<int> &ans, int r, int c){
    if(r == n && c == m){
            vector<int> tmp(num, INF);
            for(int i=0; i<n; i++)
                *(lower_bound(tmp, tmp+num, ans[i])) = ans[i];
            if(lower_bound(ans, ans+n, N) - ans >= k)
                ct++;
            return;
    }
    if(r < n){
        ans.push_back(g[r+1][c]);
        dfs(ans, r+1, c);
        ans.pop_back();
    }
    if(c < m){
        ans.push_back(g[r][c+1]);
        dfs(ans, r, c+1);
        ans.pop_back();
    }
}

int main(){
    cin>>n>>m>>k;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>g[i][j];

    return 0;
}
*/
