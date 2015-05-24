/*
#include <cstdio>
#include <vector>
using namespace std;

// 最坏情况为O(n^2)
const int N = 100005;
int pa[N];
vector<int> G[N];

// 从1开始dfs建树
void buildTree(int c){
    int n = G[c].size(), j;
    for(int i=0; i<n; i++){
        j = G[c][i];
        if(pa[j] == 0){
            pa[j] = c;
            buildTree(j);
        }
    }
}

int main(){
    int n, m, a, b, q, c, ans;
    scanf("%d%d", &n, &m);
    n--;
    for(int i=0; i<n; i++){
        scanf("%d%d", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    pa[1] = -1;
    buildTree(1);
    for(int i=0; i<m; i++){
        scanf("%d%d", &q, &c);
        if(q == 1)
            pa[c] = -1;
        else{
            ans  = 0;
            while(pa[c] != -1){
                c = pa[c];
                ans++;
            }
            printf("%d\n", ans);
        }
    }

	return 0;
}
*/
