#include <cstdio>

const int N = 100002;
const int INF = -1000000006;
long long seg[4*N];
int tag[4*N], a[N], n;

void build(int m){
    n = 1;
    while(n < m)
        n <<= 1;
    int l=n-1, r=2*n-1, m;
    for(int i=0; i<r; i++)
        tag[i] = INF;
    for(int i=0; i<m; i++)
        seg[i] = a[i];
    for(int i=n-2; i>=0; i--){
        l = (i << 1) + 1;
        r = l + 1;
        seg[i] = seg[l] + seg[r];
    }
}

void update(int a, int b, int v, int l, int r, int k){
    if(a>=r || b<= l)
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
    if(tag[k] != INF){

    }
}

int main(){
	return 0;
}
