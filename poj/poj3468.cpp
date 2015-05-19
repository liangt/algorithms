/*
#include <cstdio>

const int N = 100002;
long long seg[4 * N];
int tag[4 * N], a[N], n;

void build(int m){
	n = 1;
	while (n < m)
		n <<= 1;
	int l = n - 1, r = 2 * n - 1;
	for (int i = 0; i<m; i++)
		seg[l+i] = a[i];
	for (int i = n - 2; i >= 0; i--){
		l = (i << 1) + 1;
		r = l + 1;
		seg[i] = seg[l] + seg[r];
	}
}

void update(int a, int b, int v, int l, int r, int k){
	if (a >= r || b <= l)
		return;
	if (a <= l && b >= r){
		seg[k] += (long long)v * (r - l);
		tag[k] += v;
		return;
	}
	int lv, rv, m;
	m = (l + r) >> 1;
	lv = (k << 1) + 1;
	rv = lv + 1;
	if (tag[k]){
		tag[lv] += tag[k];
		seg[lv] += (long long)tag[k] * (m - l);
		tag[rv] += tag[k];
		seg[rv] += (long long)tag[k] * (r - m);
		tag[k] = 0;
 	}
	update(a, b, v, l, m, lv);
	update(a, b, v, m, r, rv);
	seg[k] = seg[lv] + seg[rv];
}

long long  query(int a, int b, int l, int r, int k){
	if (a >= r || b <= l)
		return 0;
	if (a <= l && b >= r)
		return seg[k];
	int m, lv, rv;
	m = (l + r) >> 1;
	lv = (k << 1) + 1;
	rv = lv + 1;
	if (tag[k]){
		tag[lv] += tag[k];
		seg[lv] += (long long)tag[k] * (m - l);
		tag[rv] += tag[k];
		seg[rv] += (long long)tag[k] * (r - m);
		tag[k] = 0;
	}
	return query(a, b, l, m, lv) + query(a, b, m, r, rv);
}

int main(){
	char t[2];
	int m, q, l, r, v;
	scanf("%d%d", &m, &q);
	for (int i = 0; i < m; i++)
		scanf("%d\n", &a[i]);
	build(m);
	while (q--){
		scanf("%s", t);
		if (t[0] == 'Q'){
			scanf("%d%d", &l, &r);
			printf("%lld\n", query(l-1, r, 0, n, 0));
		}
		else{
			scanf("%d%d%d", &l, &r, &v);
			update(l-1, r, v, 0, n, 0);
		}
	}
	return 0;
}
*/
