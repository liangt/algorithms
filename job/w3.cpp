/*
#include <cstdio>
#include <queue>

using namespace std;



int main() {
	int n, m, ans, tmp, a, b, c;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &m);
		priority_queue<int> q;
		ans = 0;
		for (int i = 0; i < m; i++) {
			scanf("%d", &tmp);
			q.push(tmp);
		}

		while (q.size() >= 3) {
			a = q.top(); q.pop();
			b = q.top(); q.pop();
			c = q.top(); q.pop();
			ans++;
			if (a - 1) q.push(a - 1);
			if (b - 1) q.push(b - 1);
			if (c - 1) q.push(c - 1);
		}
		printf("%d\n", ans / 2);
	}
	return 0;
}
*/
