/*
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 10;
const int INF = 1e8;
int G[N][N], dis[N], visit[N], pre[N];

void prim(){
    for(int i=0; i<N; i++){
        dis[i] = INF;
        visit[i] = 0;
        pre[i] = -1;

    }
    dis[0] = 0;
    int v, mv;
    for(int i=0; i<N; i++){
        mv = INF;
        for(int j=0; j<N; j++)
            if(mv > dis[j]){
                mv = dis[j];
                v = j;
            }
        visit[v] = 1;
        for(int j=0; j<N; j++)
            if(G[v][j] < INF && !visit[v]){
                if(G[v][j] < dis[j]){
                    dis[j] = G[v][j];
                    pre[j] = v;
                }
            }
    }
}

struct edge{
    int from, to, weight;
    bool operator<(const edge& other) const{
        return weight < other.weight;
    }
};
edge edges[N];

int pa[N], rk[N];
int fd(int a){
    if(pa[a] == a)
        return a;
    else
        return pa[a] = fd(pa[a]);
}
bool un(int a, int b){
    int ra = fd(a);
    int rb = fd(b);
    if(ra == rb)
        return false;
    if(rk[ra] < rk[rb])
        pa[ra] = rb;
    else if(rk[ra] > rk[rb])
        pa[rb] = ra;
    else{
        pa[ra] = rb;
        rk[rb]++;
    }
    return true;
}
void kruskal(){
    sort(edges, edges+N);
    int ans = 0;
    for(int i=0; i<N; i++){
        if(un(edges[i].from, edges[i].to))
            ans += edges[i].weight;
    }
}
int main(){
}
*/
