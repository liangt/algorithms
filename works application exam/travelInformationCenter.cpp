/*
#include <cstdio>

// 最坏情况为O(n^2)
const int N = 100005;
int pa[N];

int main(){
    int n, m, a, b, q, c, ans;
    scanf("%d%d", &n, &m);
    n--;
    for(int i=0; i<n; i++){
        scanf("%d%d", &a, &b);
        pa[b] = a;
    }
    for(int i=0; i<m; i++){
        scanf("%d%d", &q, &c);
        if(q == 1)
            pa[c] = 0;
        else{
            ans  = 0;
            while(pa[c]){
                c = pa[c];
                ans++;
            }
            printf("%d\n", ans);
        }
    }
	return 0;
}
*/
