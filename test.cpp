/*
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

const int N = 100002;
vector<int> rel1[N];
vector<int> rel2[N];
int ct[N];

void dfs(int root){
    for(int i=0; i<rel2[root].size(); i++){
        for(int j=0; j<rel1[rel2[root][i]].size(); j++){
            ct[rel1[rel2[root][i]][j]]++;
            dfs(rel1[rel2[root][i]][j]);
        }
    }
}

int main(){
    int t, n, m, s, k, e;
    scanf("%d", &t);
    while(t--){
        for(int i=0; i<N; i++){
            rel1[i].clear();
            rel2[i].clear();
            ct[i] = 0;
        }
        scanf("%d%d", &n, &m);
        for(int i=0; i<m; i++){
            scanf("%d", &s);
            rel2[0].push_back(s);
        }
        for(int i=1; i<=n; i++){
            scanf("%d%d", &s, &k);
            rel1[s].push_back(i);
            while(k--){
                scanf("%d", &e);
                rel2[i].push_back(e);
            }
        }
        dfs(0);
        for(int i=1; i<n; i++)
              printf("%d ", ct[i]);
        printf("%d\n", ct[n]);
    }
    return 0;
}
*/
