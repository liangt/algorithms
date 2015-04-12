/*
#include <cstdio>

const int N = 101;
int graph[N][N], dis[N][N];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
int r, c;

int dfs(int rx, int cy){
    if(dis[rx][cy] > 1)
        return dis[rx][cy];
    int x, y, tp;
    for(int i=0; i<4; i++){
        x = rx + dx[i];
        y = cy + dy[i];
        if(x>=0 && x<r && y>=0 && y<c && graph[x][y]<graph[rx][cy]){
            tp = dfs(x, y);
            tp++;
            if(tp > dis[rx][cy])
                dis[rx][cy] = tp;
        }
    }
    return dis[rx][cy];
}

int main(){
    int k;
    scanf("%d", &k);
    while(k--){
        scanf("%d%d", &r, &c);
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++){
                scanf("%d", &graph[i][j]);
                dis[i][j] = 1;
            }
        int mx = 1, tp;
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++){
                    tp = dfs(i, j);
                    if(tp > mx)
                        mx = tp;
            }
        printf("%d\n", mx);
    }
    return 0;
}
*/
