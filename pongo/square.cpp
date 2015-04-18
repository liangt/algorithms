/*
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 44722;
int a[N];

int main(){
    for(int i=1; i<N; i++)
        a[i] = i * i;
    int m, n;
    while(scanf("%d%d", &m, &n) != EOF)
        printf("%d\n", upper_bound(a, a+N, n) - lower_bound(a, a+N, m));
    return 0;
}
*/
