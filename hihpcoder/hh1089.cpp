/*
#include <iostream>
using namespace std;

const int N = 101;
const int INF = 1e7;
int dis[N][N];

int main(){
    int n, m, from, to, weight;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            dis[i][j] = INF;
        dis[i][i] = 0;
    }
    for(int i=0; i<m; i++){
        cin>>from>>to>>weight;
        if(dis[from][to] > weight){
            dis[from][to] = weight;
            dis[to][from] = weight;
        }
    }
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++){
                if(dis[i][k] < INF && dis[k][j] < INF){
                    weight = dis[i][k] + dis[k][j];
                    if(weight < dis[i][j])
                        dis[i][j] = weight;
                }
            }
    for(int i=1; i<=n; i++){
        for(int j=1; j<n; j++)
            cout<<dis[i][j]<<" ";
        cout<<dis[i][n]<<endl;
    }
    return 0;
}
*/
