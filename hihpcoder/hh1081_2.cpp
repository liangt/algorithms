/*
#include <iostream>
using namespace std;

const int N = 1001;
const int INF = 1e8;
int dis[N], G[N][N], visit[N];

int main(){
    int n, m, s, t, from, to, weight;
    cin>>n>>m>>s>>t;
    for(int i=1; i<=n; i++){
        dis[i] = INF;
        visit[i] = 0;
        for(int j=1; j<=n; j++)
            G[i][j] = INF;
    }
    for(int i=0; i<m; i++){
        cin>>from>>to>>weight;
        if(G[from][to] > weight){
            G[from][to] = weight;
            G[to][from] = weight;
        }
    }
    dis[s] = 0;
    int v, si;
    for(int i=0; i<n; i++){
        v = INF;
        for(int j=1; j<=n; j++)
            if(!visit[j] && dis[j] < v){
                v = dis[j];
                si = j;
            }
        visit[si] = 1;
        for(int j=1; j<=n; j++)
            if(G[si][j] < INF && !visit[j] && dis[j] > dis[si] + G[si][j])
                dis[j] = dis[si] + G[si][j];
    }
    cout<<dis[t]<<endl;
    return 0;
}
*/
