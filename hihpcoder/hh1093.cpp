/*
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

const int N = 100001;
const int INF = 1e9;
typedef pair<int, int> edge; // id, weight
vector<edge> G[N];
int dis[N];

struct cmp{
    bool operator()(int a, int b){
        return dis[a] > dis[b];
    }
};

int main(){
    int n, m, s, t, from, to, weight;
    cin>>n>>m>>s>>t;
    for(int i=0; i<m; i++){
        cin>>from>>to>>weight;
        G[from].push_back(edge(to, weight));
        G[to].push_back(edge(from, weight));
    }
    for(int i=1; i<=n; i++)
        dis[i] = INF;
    dis[s] = 0;
    priority_queue<int, vector<int>, cmp> pq;
    pq.push(s);
    edge tmp;
    while(!pq.empty()){
        from = pq.top();
        pq.pop();
        for(int i=0; i<G[from].size(); i++){
            tmp = G[from][i];
            if(dis[tmp.first] > dis[from] + tmp.second){
                dis[tmp.first] = dis[from] + tmp.second;
                pq.push(tmp.first);
            }
        }
    }
    cout<<dis[t]<<endl;
    return 0;
}
*/
