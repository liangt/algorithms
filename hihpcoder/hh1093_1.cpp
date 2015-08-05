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
int in_queue[N], dis[N];

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
    queue<int> q;
    q.push(s);
    dis[s] = 0;
    in_queue[s] = 1;
    edge tmp;
    while(!q.empty()){
        from = q.front();
        q.pop();
        for(int i=0; i<G[from].size(); i++){
            tmp = G[from][i];
            if(dis[tmp.first] > dis[from] + tmp.second){
                dis[tmp.first] = dis[from] + tmp.second;
                if(!in_queue[tmp.first]){
                    q.push(tmp.first);
                    in_queue[tmp.first] = 1;
                }
            }
        }
        in_queue[from] = 0;
    }
    cout<<dis[t]<<endl;
    return 0;
}
*/
