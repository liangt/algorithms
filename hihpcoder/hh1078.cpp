/*
#include <cstdio>
#include <cstring>

const int N = 100002;
int tag[2*N], a[N], n;
long long seg[4*N];

void build(int m){
    n = 1;
    while(n < m)
        n <<= 1;
    int l = n - 1, r = 2 * n - 1;
    for(int i=0; i<m; i++)
        seg[l+i] = a[i];
    for(int i=n-2; i>=0; i--){
        l = (i << 1) + 1;
        r = l + 1;
        seg[i] = seg[l] + seg[r];
    }
    memset(tag, -1, sizeof(tag));
}

void update(int a, int b, int v, int l, int r, int k){
    if(a>=r || b<=l)
        return;
    if(a<=l && b>=r){
        seg[k] = (long long)v * (r - l);
        tag[k] = v;
        return;
    }
    int lv, rv, m;
    m = (l + r) >> 1;
    lv = (k << 1) + 1;
    rv = lv + 1;
    if(tag[k] != -1){
        tag[lv] = tag[k];
        seg[lv] = (long long)tag[k] * (m - l);
        tag[rv] = tag[k];
        seg[rv] = (long long)tag[k] * (r - m);
        tag[k] = -1;
    }
    update(a, b, v, l, m, lv);
    update(a, b, v, m, r, rv);
    seg[k] = seg[lv] + seg[rv];
}

long long query(int a, int b, int l, int r, int k){
    if(a>=r || b<=l)
        return 0;
    if(a<=l && b>=r)
        return seg[k];
    int lv, rv, m;
    m = (l + r) >> 1;
    lv = (k << 1) + 1;
    rv = lv + 1;
    if(tag[k] != -1){
        tag[lv] = tag[k];
        seg[lv] = (long long)tag[k] * (m - l);
        tag[rv] = tag[k];
        seg[rv] = (long long)tag[k] * (r - m);
        tag[k] = -1;
    }
    return query(a, b,  l, m, lv) + query(a, b, m, r, rv);
}

int main(){
    int m, q, t, l, r, v;
    scanf("%d", &m);
    for(int i=0; i<m; i++)
        scanf("%d", &a[i]);
    build(m);
    scanf("%d", &q);
    while(q--){
        scanf("%d", &t);
        if(t){
            scanf("%d%d%d", &l, &r, &v);
            update(l-1, r, v, 0, n, 0);
        }
        else{
            scanf("%d%d",  &l, &r);
            printf("%lld\n", query(l-1, r, 0, n, 0));
        }
    }
	return 0;
}
*/
