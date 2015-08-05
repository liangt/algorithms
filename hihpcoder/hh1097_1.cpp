/*
#include <iostream>
#include <queue>
#include <utility>
#include <functional>
using namespace std;

const int N = 1000;
const int INF = 1e8;
int G[N][N], dis[N];
typedef pair<int, int> node; // dis, id

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>G[i][j];
    for(int i=0; i<n; i++)
        dis[i] = INF;
    dis[0] = 0;
    priority_queue<node, vector<node>, greater<node> > pq;
    pq.push(node(0, 0));
    int ans=0;
    node tp;
    while(!pq.empty()){
        tp = pq.top();
        pq.pop();
        if(tp.first > dis[tp.second])
            continue;
        ans += dis[tp.second];
        for(int i=0; i<n; i++)
            if(G[tp.second][i] < dis[i]){
                dis[i] = G[tp.second][i];
                pq.push(node(dis[i], i));
            }
    }
    cout<<ans<<endl;
    return 0;
}
*/
