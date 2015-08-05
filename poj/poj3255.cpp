/*
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <utility>
using namespace std;

const int N = 5001;
const int INF = 1e8;
typedef pair<int, int> edge;  // id, weight
typedef pair<int, int> node;  // dis, id
vector<edge> G[N];
int dis[N], dis2[N];

int main(){
    int n, r, a, b, d;
    cin>>n>>r;
    for(int i=0; i<r; i++){
        cin>>a>>b>>d;
        G[a].push_back(edge(b, d));
        G[b].push_back(edge(a, d));
    }
    priority_queue<node, vector<node>, greater<node> > pq;
    for(int i=1; i<=n; i++)
        dis[i] = dis2[i] = INF;
    dis[1] = 0;
    pq.push(node(0, 1));
    node tp;
    edge tmp;
    while(!pq.empty()){
        tp = pq.top();
        pq.pop();
        for(int i=0; i<G[tp.second].size(); i++){
            tmp = G[tp.second][i];
            d = tp.first + tmp.second;
            if(dis[tmp.first] > d){
                a = dis[tmp.first];
                dis[tmp.first] = d;
                d = a;
                pq.push(node(dis[tmp.first], tmp.first));
            }
            if(d < dis2[tmp.first] && d > dis[tmp.first]){
                dis2[tmp.first] = d;
                pq.push(node(dis2[tmp.first], tmp.first));
            }
        }
    }
    cout<<dis2[n]<<endl;
    return 0;
}
*/
