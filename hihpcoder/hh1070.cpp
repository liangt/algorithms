/*
#include <cstdio>

const int N = 10000;
const int INF = 1000000;
int seg[4 * N], a[N], n;

void build(int num){
	n = 1;
	while (n < num)
		n <<= 1;
	int l = n - 1, r = 2 * n - 1;
	for (int i = 0; i < num; i++)
		seg[l + i] = a[i];
	l += num;
	for (int i = l; i < r; i++)
		seg[i] = INF;
	for (int i = n - 2; i >= 0; i--){
		l = 2 * i + 1;
		r = 2 * i + 2;
		if (seg[l] > seg[r])
			seg[i] = seg[r];
		else
			seg[i] = seg[l];
	}
}

void update(int i, int v){
	i += n - 1;
	seg[i] = v;
	int p, l, r;
	while (i){
		p = (i - 1) >> 1;
		l = (p << 1) + 1;
		r = l + 1;
		if (seg[l] > seg[r])
			seg[p] = seg[r];
		else
			seg[p] = seg[l];
		i = (i - 1) >> 1;
	}
}

int query(int a, int b, int l, int r, int k){
	if (a >= r || b <= l)
		return INF;
	if (a <= l && b >= r)
		return seg[k];
	int lv, rv, m;
	m = (l + r) >> 1;
	lv = query(a, b, l, m, 2 * k + 1);
	rv = query(a, b, m, r, 2 * k + 2);
	if (lv > rv)
		return rv;
	else
		return lv;
}

int main(){
	int m, q, t, l, r;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);
	build(m);
	scanf("%d", &q);
	while (q--){
		scanf("%d%d%d", &t, &l, &r);
		if (t)
			update(l - 1, r);
		else
			printf("%d\n", query(l - 1, r, 0, n, 0));
	}
	return 0;
}
*/
