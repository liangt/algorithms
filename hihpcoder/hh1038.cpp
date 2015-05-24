/*
#include <cstdio>

const int M = 100005;
int a[M];

int main(){
    int n, m, w, v, t;
    scanf("%d%d", &n, &m);
    while(n--){
        scanf("%d%d", &w, &v);
        for(int i=m; i>=w; i--){
            t = a[i-w] + v;
            if(a[i] < t)
                a[i] = t;
        }
    }
    printf("%d\n", a[m]);
	return 0;
}
*/
