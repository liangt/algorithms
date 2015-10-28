/*
#include <iostream>
using namespace std;

const int N = 3;
int a[N+1], ans, mat[N][N];

void dfs(int n){
    if(n == N * N ){
        ans++;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
        return;
    }
    for(int i = 0; i < N; i++)
        if(a[i+1] < N && a[i+1] < a[i]){
            mat[i][a[i+1]] = n;
            a[i+1]++;
            dfs(n +1);
            a[i+1]--;
        }
}

int main(){
    a[0] = N;
    ans = 0;
    dfs(0);
    cout<<ans<<endl;
    return 0;
}
*/
