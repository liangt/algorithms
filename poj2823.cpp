/*
#include <cstdio>

const int N = 1000005;
int a[N], maxdeq[N], mindeq[N], mx[N], mn[N];

int main(){
    int n, k, sx=0, tx=0, si=0, ti=0, t;
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++)
        scanf("%d", a+i);
    for(int i=0; i<n; i++){
        // max
        while(sx<tx && a[maxdeq[tx-1]]<=a[i])
            tx--;
        maxdeq[tx++] = i;

        // min
        while(si<ti && a[mindeq[ti-1]]>=a[i])
            ti--;
        mindeq[ti++] = i;

        t = i -k + 1;
        if(t>=0){
            mx[t] = a[maxdeq[sx]];
            if(maxdeq[sx] == t)
                sx++;
            mn[t] = a[mindeq[si]];
            if(mindeq[si] == t)
                si++;
        }
    }
    t = n - k ;
    for(int i=0; i<t; i++)
        printf("%d ", mn[i]);
    printf("%d\n", mn[t]);
    for(int i=0; i<t; i++)
        printf("%d ", mx[i]);
    printf("%d\n", mx[t]);
	return 0;
}
*/
