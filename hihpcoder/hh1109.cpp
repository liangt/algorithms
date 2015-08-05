/*
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <functional>
using namespace std;

const int N = 1e5 + 1;
const int INF = 2e8;
typedef pair<int, int> edge;
typedef pair<int, int> node;
vector<edge> G[N];
bool visit[N];

int main(){
    int n, m, from, to, weight;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>from>>to>>weight;
        G[from].push_back(edge(to, weight));
        G[to].push_back(edge(from, weight));
    }
    priority_queue<node, vector<node>, greater<node> > pq;
    pq.push(node(0, 1));
    node tp;
    edge tmp;
    weight = 0;
    while(n && !pq.empty()){
        tp = pq.top();
        pq.pop();
        if(visit[tp.second])
            continue;
        weight += tp.first;
        n--;
        visit[tp.second] = 1;
        for(int i=0; i<G[tp.second].size(); i++){
            tmp = G[tp.second][i];
            if(!visit[tmp.first])
                pq.push(node(tmp.second, tmp.first));
        }
    }
    cout<<weight<<endl;
    return 0;
}
*/
