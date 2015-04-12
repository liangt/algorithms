/*
// f[i][j] 表示从下表i开始到j所需添加的最少花费
// f[i][j] = f[i+1][j-1]   a[i] == a[j]
// f[i][j] = min{f[i+1][j]+cost[a[i]], f[i][j-1]+cost[a[j]]}   a[i] != a[j]
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 2002;
const int INF = 1e9;
int d[N][N];
int cost[26];
char a[N];

int main(){
    int k, n, c1, c2;
    char c[3];
    while(scanf("%d%d", &k, &n) != EOF){
        scanf("%s", a);
        for(int i=0; i<k; i++){
            scanf("%s%d%d", c, &c1, &c2);
            cost[c[0]-'a'] = min(c1, c2);
        }
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                d[i][j] = INF;
        for(int j=1; j<n; j++)
            for(int i=0; i<n-j; i++){
                int t = i + j;
                if(a[i] == a[t])
                    d[i][t] = d[i+1][t-1];
                else{
                    d[i][t] = min(d[i][t], d[i+1][t]+cost[a[i]-'a']);
                    d[i][t] = min(d[i][t], d[i][t-1]+cost[a[t]-'a']);
                }
            }
        printf("%d\n", d[0][n-1]);
    }
    return 0;
}
*/
