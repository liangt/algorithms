/*
#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <functional>
using namespace std;

const int N = 100002;
const int INF = 1e9;
struct node{
    int to, weight;
    node(int t, int w): to(t), weight(w){}
};
vector<node> tree[N];
typedef pair<int, int> pp;
int dis[N];

int dist(int n){
    int ans  = 0;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++)
            dis[j] = INF;
        priority_queue<pp, vector<pp>, greater<pp>> que;
        dis[i] = 0;
        que.push(pp(0, i));
        while(!que.empty()){
            pp p = que.top();
            que.pop();
            int v = p.second;
            if(dis[v] < p.first)
                continue;
            for(int t = 0; t < tree[v].size(); t++){
                node e = tree[v][t];
                if(dis[e.to] > dis[v] + e.weight){
                    dis[e.to] = dis[v] + e.weight;
                    que.push(pp(dis[e.to], e.to));
                }
            }
        }
        for(int j = 1; j <= n; j++)
            ans += dis[j] ;
    }
    return ans / 2;
}

int main(){
    int n, m, f, t, w;
    string op;
    cin>>n>>m;
    for(int i = 1; i < n; i++){
        cin>>f>>t>>w;
        tree[f].push_back(node(t, w));
        tree[t].push_back(node(f, w));
    }
    while(m--){
        cin>>op;
        if(op == "QUERY")
            cout<<dist(n)<<endl;
        else{
            cin>>f>>t>>w;
            for(int i = 0; i < tree[f].size(); i++)
                if(tree[f][i].to == t){
                    tree[f][i].weight = w;
                    break;
                }
            for(int i = 0; i < tree[t].size(); i++)
                if(tree[t][i].to == f){
                    tree[t][i].weight = w;
                    break;
                }
        }
    }
    return 0;
}
*/
