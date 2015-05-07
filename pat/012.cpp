/*
#include <cstdio>

int main(){
    int n, s, tp, t, sm, em, ts, tmp;
    scanf("%d", &n);
    scanf("%d", &tmp);
    s = tp = sm = em = ts =tmp;
    for(int i=1; i<n; i++){
        scanf("%d", &t);
        if(tp < 0){
            tp = t;
            ts = t;
        }
        else
            tp += t;
        if(tp > s){
            s = tp;
            sm = ts;
            em = t;
        }
    }
    if(s < 0)
        printf("0 %d %d\n", tmp, t);
    else
        printf("%d %d %d\n", s, sm, em);
	return 0;
}
*/
