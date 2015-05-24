/*
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 10002;
int seg[N<<3], a[N], b[N], n;

void update(int a, int b, int v, int l, int r, int k){
    if(a>=r || b<=l)
        return;
    if(a<=l && b>=r){
        seg[k] = v;
        return;
    }
    int lv, rv, m;
    m = (l + r) >> 1;
    lv = (k << 1) + 1;
    rv = lv + 1;
    if(seg[k]){
        seg[lv] = seg[k];
        seg[rv] = seg[k];
        seg[k] = 0;
    }
    update(a, b, v, l, m, lv);
    update(a, b, v, m, r, rv);
}

int main(){
    int num, cs, i, j, lv, rv;
    scanf("%d", &cs);
    while(cs--){
        scanf("%d", &num);
        for(i=0; i<num; i++)
            scanf("%d%d", a+i, b+i);
        for(i=0, j=num; i<num; i++, j++){
            seg[i] = a[i];
            seg[j] = b[i];
        }
        sort(seg, seg+j);
        j = unique(seg, seg+j) - seg;
        for(i=0; i<num; i++){
            a[i] = lower_bound(seg, seg+j, a[i]) - seg;
            b[i] = lower_bound(seg, seg+j, b[i]) - seg;
            printf("%d %d\n", a[i], b[i]);
        }

        n = 1;
        while(n < j)
            n <<= 1;
        memset(seg, 0, sizeof(seg));
        for(i=0; i<num; i++)
            update(a[i], b[i]+1, i+1, 0, n, 0);
        n--;
        for(i=0; i<n;i++)
            if(seg[i]){
                lv = (i << 1) + 1;
                rv = lv + 1;
                seg[lv] = seg[i];
                seg[rv] = seg[i];
                seg[i] = 0;
            }
        for(i=n; i<n+j; i++)
            printf("%d ", seg[i]);
        printf("\n");
        sort(seg+n, seg+n+j);
        for(i=n; i<n+j; i++)
            printf("%d ", seg[i]);
        printf("\n");
        num = unique(seg+n, seg+n+j) - (seg + n);
        if(seg[n] == 0)
            num--;
        printf("%d\n", num);
    }
	return 0;
}
*/
