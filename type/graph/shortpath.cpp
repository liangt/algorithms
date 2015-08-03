#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct node{
    int id;
    int weight;
};

struct edge{
    int from;
    int to;
    int weight;
};

const int N = 5;
const int V = 20;
const int INF = 1000000;
vector<node> G[N];
int dis[N];
edge G1[V];

void bellman_ford(int s){
    for(int i=0; i<N; i++)
        dis[i] = INF;
    dis[s] = 0;
    bool update = false;
    while(true){
        for(int i=0; i<N; i++)
            for(int j=0; j<G[i].size(); j++)
                if(dis[j] > dis[i] + G[i][j].weight){
                    dis[j] = dis[i] + G[i][j].weight;
                    update = true;
                }
        if(!update)
            break;
    }
}

void bellman_ford1(int s){
    for(int i=0; i<N; i++)
        dis[i] = INF;
    dis[s] = 0;
    bool update = false;
    while(true){
        for(int i=0; i<V; i++)
            if(dis[G1[i].to] > dis[G1[i].from] + G1[i].weight){
                dis[G1[i].to] = dis[G1[i].from] + G1[i].weight;
                update = true;
            }
        if(!update)
            break;
    }
}

bool in_queue[N];
void spfa(int s){
    for(int i=0; i<N; i++)
        dis[i] = INF;
    dis[s] = 0;
    queue<int> q;
    q.push(s);
    in_queue[s] = true;
    int tp;
    while(!q.empty()){
        tp = q.front();
        q.pop();
        for(int i=0; i<G[tp].size(); i++)
            if(dis[G[tp][i].id] > dis[tp] + dis[G[tp][i].weight]){
                dis[G[tp][i].id] = dis[tp] + dis[G[tp][i].weight];
                if(!in_queue[G[tp][i].id]){
                    in_queue[G[tp][i].id] = true;
                    q.push(G[tp][i].id);
                }
            }
        in_queue[tp] = false;
    }
}

bool visit[N];
void dijkstra(int s){
    for(int i=0; i<N; i++)
        dis[i] = INF;
    dis[s] = 0;

}

int main(){
    return 0;
}
