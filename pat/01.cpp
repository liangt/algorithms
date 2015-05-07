/*
#include <cstdio>

int main(){
    int n, s, tp, t;
    scanf("%d", &n);
    scanf("%d", &tp);
    s = tp;
    for(int i=1; i<n; i++){
        scanf("%d", &t);
        if(tp <= 0)
            tp = t;
        else
            tp += t;
        if(tp > s)
            s = tp;
    }
    if(s < 0)
        printf("0\n");
    else
        printf("%d\n", s);
	return 0;
}
*/
