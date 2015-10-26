/*
#include <cstdio>
#include <cstring>
using namespace std;

const int mod = 1000000007;
int sum[26];

void add(int &a, int b) {
	a += b;
	if (a >= mod) {
		a -= mod;
	}
}

int mp[100001];

int main() {

	int a[55] = { 1, 1 };
	memset(mp, -1, sizeof(-1));
	for (int i = 2; i < 30; i++) {
		a[i] = a[i - 1] + a[i - 2];
		if (a[i] > 100000) break;
		mp[a[i]] = i;
	}
	int n;
	while (scanf("%d", &n) != EOF) {
		memset(sum, 0, sizeof(sum));
		int ans = 0;
		int a;
		scanf("%d", &a);
		if (a == 1) {
			sum[0] = 1;
			ans = 1;
		}
		for (int i = 1; i < n; i++) {
			scanf("%d", &a);
			if (a == 1) {
				add(ans, sum[0]);
				add(sum[1], sum[0]);

				add(sum[0], 1);
				add(ans, 1);
			}
			else if (mp[a] != -1) {
				int id = mp[a];
				add(ans, sum[id - 1]);
				add(sum[id], sum[id - 1]);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
*/
