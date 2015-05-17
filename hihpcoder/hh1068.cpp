/*
#include <cstdio>

const int N = 1000000;
const int INF = 10000000;
int a[N], seg[4*N], n;

void build(int num){
	n = 1;
	while( n < num)
		n <<= 1;
	int i, l=n-1, r;
	for(i=0; i<num; i++)
		seg[l+i] = a[i];
    r = 2 * n - 1;
	for(i=l+num; i<r; i++)
		seg[i] = INF;
	for(i=n-2; i>=0; i--){
		l = i * 2 + 1;
		r = i * 2 + 2;
		if(seg[l] > seg[r])
			seg[i] =seg[r];
		else
			seg[i] = seg[l];
	}
}

int query(int a, int b, int l, int r, int k){
    if(r<=a || b<=l)
        return INF;
    if(a<=l && b>=r)
        return seg[k];
    int lv, rv, m;
    m = (l + r) / 2;
    lv = query(a, b, l, m, 2*k+1);
    rv = query(a, b, m, r, 2*k+2);
    if(lv > rv)
        return rv;
    return lv;
}

int main(){
    int num, q, l, r;
    scanf("%d", &num);
    for(int i=0; i<num; i++)
        scanf("%d", &a[i]);
    build(num);
    scanf("%d", &q);
    while(q--){
        scanf("%d%d", &l, &r);
        printf("%d\n", query(l-1, r, 0, n, 0));
    }
	return 0;
}
*/
