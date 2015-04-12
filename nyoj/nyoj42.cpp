/*
#include <cstdio>
#include <vector>
using namespace std;

const int N = 1002;
int dg[N];
vector<int> graph[N];
bool visit[N];

// dfs判连通
void dfs(int s){
    visit[s] = true;
    for(int i=0; i<graph[s].size(); i++)
        if(!visit[graph[s][i]])
            dfs(graph[s][i]);
}

int main(){
    int n, p, q, s, e;
    bool tag;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &p, &q);
        for(int i=1; i<=p; i++){
            graph[i].clear();
            dg[i] = 0;
            visit[i] = false;
        }
        while(q--){
            scanf("%d %d", &s, &e);
            graph[s].push_back(e);
            graph[e].push_back(s);
            dg[s]++;
            dg[e]++;
        }
        tag = true;
        s = 0;
        for(int i=1; i<=p; i++){
            s += dg[i] & 1;
             if(dg[i] == 0  || s > 2){
                tag = false;
                break;
            }
        }
        if(tag && s && s!= 2)
            tag = false;
        if(tag){
            dfs(1);
            for(int i=1; i<=p; i++)
                if(!visit[i]){
                    tag = false;
                    break;
                }
        }
        if(tag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
*/

/*
#include <cstdio>

const int N = 1002;
int pa[N], rk[N], dg[N];

// 并查集判连通
int fd(int x){
    if(pa[x] == x)
        return x;
    return pa[x] = fd(pa[x]);
}

void un(int a, int b){
    int ra, rb;
    ra = fd(a);
    rb = fd(b);
    if(ra == rb)
        return;
    if(rk[ra] > rk[rb])
        pa[rb] = ra;
    else{
        pa[ra] = rb;
        if(rk[ra] == rk[rb])
            rk[rb]++;
    }
}

int main(){
    int n, p, q, s, e;
    bool tag;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &p, &q);
        for(int i=1; i<=p; i++){
            pa[i] = i;
            rk[i] = 0;
            dg[i] = 0;
        }
        while(q--){
            scanf("%d %d", &s, &e);
            un(s, e);
            dg[s]++;
            dg[e]++;
        }
        tag = true;
        s = 0;
        for(int i=1; i<=p; i++){
            s += dg[i] & 1;
             if(dg[i] == 0  || s > 2){
                tag = false;
                break;
            }
        }
        if(tag && s && s!= 2)
            tag = false;
        if(tag){
            s = fd(1);
            for(int i=2; i<=p; i++){
                if(s != fd(i)){
                    tag = false;
                    break;
                }
            }
        }
        if(tag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
*/
