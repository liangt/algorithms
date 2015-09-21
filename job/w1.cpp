/*
#include <cstdio>
#include <cstring>

using namespace std;

char ch[55000];
int p[55000][10];

int find(int d, int w) {
	if (p[w][d] == w)
		return w;
	return p[w][d] = find(d, p[w][d]);
}

int main() {
	int n, len, ans, a, b, c, d;
	scanf("%d", &n);
	while(n--) {
		scanf(" %s", ch);
		len = strlen(ch);
		for (int i = len - 1;i >= 0; i--) {
			for (int j = 0; j < 10; j++)
				p[i][j] = i + 1;
			p[i][ch[i] - '0'] = i;
		}
		for (int i = 0; i < 10; i++)
			p[len][i] = len;

		ans = 0;
		while (true) {
			a = find(9, 0);
			b = find(7, a);
			c = find(0, b);
			d = find(6, c);
			if (d >= len)
				break;
			ans++;
			p[a][ch[a] - '0'] = a + 1;
			p[b][ch[b] - '0'] = b + 1;
			p[c][ch[c] - '0'] = c+ 1;
			p[d][ch[d] - '0'] = d + 1;
		}
		printf("%d\n", ans);
	}
	return 0;
}
*/
