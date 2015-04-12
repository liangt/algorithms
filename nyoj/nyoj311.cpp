/*
#include <cstdio>

const int N = 50002;
const int INF = 2e9;
int d[N];

int main(){
    int k, m, v, c, w;
    scanf("%d", &k);
    while(k--){
        scanf("%d%d", &m, &v);
        for(int i=0; i<=v; i++)
            d[i] = INF;
        d[0] = 0;
        for(int i=0; i<m; i++){
            scanf("%d%d", &c, &w);
            for(int j=c; j<=v; j++)
                if(d[j-c] < INF && (d[j-c] + w > d[j] || d[j] == INF))
                    d[j] = d[j-c] + w;
        }
        if(d[v] < INF)
            printf("%d\n", d[v]);
        else
            printf("NO\n");
    }
    return 0;
}
*/
