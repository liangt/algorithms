/*
#include <cstdio>

const int N = 100002;
int n;
long long s[N], bit1[N], bit2[N];

long long sum(long long* bit, int i){
    long long ans = 0;
    while(i){
        ans += bit[i];
        i -= i&-i;
    }
    return ans;
}

void add(long long* bit, int i, int v){
    while(i <= n){
        bit[i] += v;
        i += i&-i;
    }
}

int main(){
	char t[2];
	int q, l, r, v;
	long long ans;
	scanf("%d%d", &n, &q);
	for (int i = 0; i < n; i++){
        scanf("%d\n", &v);
        s[i+1] = s[i] + v;
	}
	while (q--){
		scanf("%s", t);
		if (t[0] == 'Q'){
			scanf("%d%d", &l, &r);
			ans = s[r] + (r + 1) * sum(bit1, r) - sum(bit2, r);
			ans -= s[l-1] + l * sum(bit1, l-1) - sum(bit2, l-1);
			printf("%lld\n", ans);
		}
		else{
			scanf("%d%d%d", &l, &r, &v);
			add(bit1, l, v);
			add(bit1, r+1, -v);
			add(bit2, l, l*v);
			add(bit2, r+1, -(r+1)*v);
		}
	}
	return 0;
}
*/
