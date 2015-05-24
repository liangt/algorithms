/*
#include <iostream>
#include <cstring>
using namespace std;

const int V = 20;
const int N = 10;
int n, m, w[N], v[N];

// dp的不同形式
// 记忆化搜索
int f[N][V+1];
int dfs(int i, int vl){
    if(f[i][vl] >= 0)
        return f[i][vl];
    if(i == 0)
        return 0;
    int res = dfs(i-1, vl);
    if(vl >= w[i]){
        int tp = dfs(i-1, vl-w[i-1]) + v[i-1];
        if(tp > res)
            res = tp;
    }
    f[i][vl]=res;
    return res;
}

// 递推
int solve(){
    memset(f, 0, sizeof(f));
    int tp;
    for(int i=0; i<n; i++){
        for(int j=0; j<=m; j++){
            f[i+1][j] = f[i][j];
            if(j >= w[i]){
                tp = f[i][j-w[i]] + v[i];
                if(tp > f[i][j])
                    f[i+1][j] = tp;
            }
        }
    }
    return f[n][m];
}

// 状态转移
// f(i,j) ---> f(i+1,j) and f(i+1, j+w[i])
int solve2(){
    memset(f, 0, sizeof(f));
    int tp;
    for(int i=0; i<n; i++){
        for(int j=0; j<=m; j++){
            if(f[i+1][j] < f[i][j])
                f[i+1][j] = f[i][j];
            if(j+w[i]<=m){
                tp = f[i][j] + v[i];
                if(f[i+1][j+w[i]] < tp)
                    f[i+1][j+w[i]] = tp;
            }
        }
    }
    return f[n][m];
}

// 以价值来定义递推式
const int INF = 100000;
int d[V+1];
int solve3(){
    d[0] = 0;
    for(int i=1; i<=V; i++)
        d[i] = INF;
    int tp;
    for(int i=0; i<n; i++){
        for(int j=V; j>=v[i]; j--){
            tp = d[j-v[i]] + w[i];
            if(tp < d[j])
                d[j] = tp;
        }
    }
    for(int i=0; i<=V; i++)
        if(d[i] <= m)
            tp = i;
    return tp;
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>w[i]>>v[i];
    memset(f, -1, sizeof(f));
    cout<<dfs(n, m)<<endl;
    cout<<solve()<<endl;
    cout<<solve2()<<endl;
    cout<<solve3()<<endl;
	return 0;
}
*/
