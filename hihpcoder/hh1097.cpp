/*
#include <iostream>
using namespace std;

const int N = 1000;
const int INF = 1e8;
int G[N][N], dis[N], visit[N];

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>G[i][j];
    for(int i=0; i<n; i++)
        dis[i] = INF;
    dis[0] = 0;
    int v, mv, ans=0;
    for(int i=0; i<n; i++){
        mv = INF;
        for(int j=0; j<n; j++)
            if(!visit[j] && mv > dis[j]){
                mv = dis[j];
                v = j;
            }
        visit[v] = 1;
        ans += dis[v];
        for(int j=0; j<n; j++)
            if(!visit[j] && G[v][j] < dis[j])
                dis[j] = G[v][j];
    }
    cout<<ans<<endl;
    return 0;
}
*/
