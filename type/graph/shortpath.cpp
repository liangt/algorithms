/*
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
int G2[N][N];
void dijkstra(int s){
    for(int i=0; i<N; i++)
        dis[i] = INF;
    dis[s] = 0;
    int ms, v;
    for(int i=0; i<N; i++){
        v = INF;
        for(int j=0; j<N; j++)
            if(!visit[j] && dis[j] < v){
                v = dis[j];
                ms = j;
            }
        visit[ms] = true;
        for(int j=0; j<N; j++)
            if(!visit[v] && dis[j] > dis[ms] + G[ms][j].weight)
                dis[j] = dis[ms] + G[ms][j].weight;
    }
}

struct qnode{
    int id;
    int dis;
    qnode(){}
    qnode(int id, int dis):id(id), dis(dis){}
    bool operator<(const qnode& other) const{
        return dis > other.dis;
    }
};

void dijkstra2(int s){
    for(int i=0; i<N; i++)
        dis[i] = INF;
    dis[s] = 0;
    priority_queue<qnode> pq;
    pq.push(qnode(s, 0));
    qnode tp;
    while(!pq.empty()){
        tp = pq.top();
        pq.pop();
        if(tp.dis > dis[tp.id])
            continue;
        for(int i=0; i<G[tp.id].size(); i++)
            if(dis[G[tp.id][i].id] > dis[tp.id] + G[tp.id][i].weight){
                dis[G[tp.id][i].id] = dis[tp.id] + G[tp.id][i].weight;
                pq.push(qnode(G[tp.id][i].id, dis[G[tp.id][i].id]));
            }
    }
}

int d[N][N];
void floyd_warshall(){
    for(int i=0; i<N; i++){
        for(int j<0; j<N; j++)
            d[i][j] = INF;
        d[i][i] = 0;
    }

    for(int k=0; k<N; k++)
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
}

int main(){
    return 0;
}
*/
