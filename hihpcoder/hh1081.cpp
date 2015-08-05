/*
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <utility>
using namespace std;

const int N = 1001;
const int INF = 1e8;
typedef pair<int, int> node;  // dis, id
int dis[N], G[N][N];

int main(){
    int n, m, s, t, from, to, weight;
    cin>>n>>m>>s>>t;
    for(int i=1; i<=n; i++){
        dis[i] = INF;
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
    priority_queue<node, vector<node>, greater<node> > pq;
    pq.push(node(0, s));
    node tp;
    while(!pq.empty()){
        tp = pq.top();
        pq.pop();
        if(tp.first > dis[tp.second])
            continue;
        for(int i=1; i<=n; i++)
            if(G[tp.second][i] < INF && dis[i] > tp.first + G[tp.second][i]){
                dis[i] = tp.first + G[tp.second][i];
                pq.push(node(dis[i], i));
            }
    }
    cout<<dis[t]<<endl;
    return 0;
}
*/
