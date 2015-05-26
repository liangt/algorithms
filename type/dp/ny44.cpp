/*
#include <cstdio>

int main(){
    int k, n, ans, tp, t;
    scanf("%d", &k);
    while(k--){
        scanf("%d", &n);
        ans = -200000000;
        tp = 0;
        for(int i=0; i<n; i++){
            scanf("%d", &t);
            if(tp <= 0)
                tp = t;
            else
                tp += t;
            if(ans < tp)
                ans = tp;
        }
        printf("%d\n", ans);
    }
	return 0;
}
*/
