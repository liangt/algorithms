/*
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 30002;
int d[N];

int main(){
    int k, n, m, v, p;
    scanf("%d", &k);
    while(k--){
        scanf("%d%d", &n, &m);
        for(int i=0; i<=n ; i++)
            d[i] = 0;
        for(int i=1; i<=m; i++){
            scanf("%d%d", &v, &p);
            for(int j=n; j>=v; j--)
                d[j] = max(d[j], d[j-v] + p*v);
        }
        printf("%d\n", d[n]);
    }
    return 0;
}
*/
