/*
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 100002;
const int INF = 2e9;
int d[N];

int main(){
    int n, t;
    while(scanf("%d", &n) != EOF){
            for(int i=0; i<n; i++)
                d[i] = INF;
            for(int i=0; i<n; i++){
                scanf("%d", &t);
                *lower_bound(d, d+n, t) = t;
            }
            printf("%d\n", lower_bound(d, d+n, INF) - d);
    }
    return 0;
}
*/
