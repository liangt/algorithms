/*
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 100002;
int seg[N<<3], a[N], b[N], n, l;

void update(int a, int b, int v, int l, int r, int k){
    if(a>=r || b<= l)
        return;
    if(a<=l && b>=r){
        seg[k] = v;   // 这里用seg自身做标记
        return;
    }
    int lv,rv, m;
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
    scanf("%d%d", &n, &l);
    int i, j;
    for(i=0; i<n; i++)
        scanf("%d%d", &a[i], &b[i]);
    for(i=0, j=n; i<n; i++, j++){
        seg[i] = a[i];
        seg[j] = b[i];
    }

    // 离散化
    sort(seg, seg + j);
    l = unique(seg, seg+j) - seg - 1;
    for(i=0; i<n; i++){
        a[i] = lower_bound(seg, seg+j, a[i]) - seg;
        b[i] = lower_bound(seg, seg+j, b[i]) - seg;
        printf("%d %d\n", a[i], b[i]);
    }

    // 线段树
    for(i=0; i<j; i++)
        seg[i] = 0;
    j = n;
    n = 1;
    while(n < l)
        n <<= 1;
    for(i=0; i<j; i++)
        update(a[i], b[i], i+1, 0, n, 0);
    j = n - 1;
    int lv, rv;
    for(i=0; i<j; i++){
        if(seg[i]){
            lv = (i << 1) + 1;
            rv = lv + 1;
            seg[lv] = seg[i];
            seg[rv] = seg[i];
            seg[i] = 0;
        }
    }
    for(i=0; i<2*n-1; i++)
        printf("%d ", seg[i]);
    printf("\n");
    sort(seg+j, seg+j+l);
    l = unique(seg+j, seg+j+l) - (seg+j);
    if(seg[j] == 0)
        l--;
    printf("%d\n", l);
    for(i=0; i<2*n-1; i++)
        printf("%d ", seg[i]);
    printf("\n");
	return 0;
}
*/
