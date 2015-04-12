/*
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

const int N = 101;
vector<int>  g[N];
int d[N];

typedef pair<int, int> node;
void bfs(int root){
    queue<node> qp;
    node tmp;
    qp.push(node(root, 1));
    while(!qp.empty()){
        tmp = qp.front();
        qp.pop();
        d[tmp.second]++;
        for(int i=0; i<g[tmp.first].size(); i++)
            qp.push(node(g[tmp.first][i], tmp.second+1));
    }
}

int main(){
    int n, m, k, r, t;
    scanf("%d%d", &n, &m);
    while(m--){
        scanf("%d%d", &r, &k);
        while(k--){
            scanf("%d", &t);
            g[r].push_back(t);
        }
    }
    bfs(1);
    r = 0;
    t = 0;
    for(int i=1; i<=n; i++)
        if(r < d[i]){
            r = d[i];
            t = i;
        }
    printf("%d %d", r, t);
    return 0;
}
*/
