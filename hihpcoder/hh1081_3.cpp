/*
#include <iostream>
#include <queue>
using namespace std;

const int N = 1001;
const int INF = 1e8;
int dis[N], G[N][N], in_queue[N];

int main(){
    int n, m, s, t, from, to, weight;
    cin>>n>>m>>s>>t;
    for(int i=1; i<=n; i++){
        dis[i] = INF;
        in_queue[i] = 0;
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
    in_queue[s] = 1;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        from = q.front();
        q.pop();
        for(int i=1; i<=n; i++)
            if(G[from][i] < INF && dis[i] > dis[from] + G[from][i]){
                dis[i] = dis[from] + G[from][i];
                if(!in_queue[i]){
                    q.push(i);
                    in_queue[i] = 1;
                }
            }
        in_queue[from] = 0;
    }
    cout<<dis[t]<<endl;
    return 0;
}
*/
