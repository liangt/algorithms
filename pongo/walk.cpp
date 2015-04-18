/*
#include <iostream>
#include <cstring>
using namespace std;

const int N = 1001;
const int M = 1000000007;
bool visit[2][N];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int walk(int n, int m, int r, int c){
    if(m == 2*n)
        return 1;
    int x, y;
    int ans = 0;
    for(int i=0; i<8; i++){
        x = r + dx[i];
        y = c + dy[i];
        if(x>=0 && x<2 && y>=0 && y<n && !visit[x][y]){
            visit[x][y] = true;
            ans += walk(n, m+1, x, y);
            if(ans >= M)
                ans -= M;
            visit[x][y] = false;
        }
    }
    return ans;
}

int main(){
    int n, ans;
    while(cin>>n){
        ans = 0;
        for(int i=0; i<2; i++)
            for(int j=0; j<n; j++){
                memset(visit, 0, sizeof(visit));
                visit[i][j] = true;
                ans += walk(n, 1, i, j);
            if(ans >= M)
                ans -= M;
            }
        cout<<n<<" "<<ans<<endl;
    }
}
*/
