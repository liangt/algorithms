#include <cstdio>

const int N = 100002;
int seg[N<<2], settag[N<<2], addtag[N<<2], a[N], n;

void build(int m){
    n = 1;
    while(n < m)
        n <<= 1;
    int l=n-1, ;
    for(int i=0; i<m; i++)
        seg[l+i] = a[i];
    for(int i=n-2; i>=0; i--){
        l = (i << 1) + 1;
        r = l + 1;
        seg[i] = seg[l] + seg[r];
    }
}

// add
void update1(int a, int b, int v, int l, int r, int k){
    if(a>=r || b<=l)
        return;
    if(a<=l && b>=r){
    }
}
int main(){
	return 0;
}
