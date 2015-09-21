/*
#include <cstdio>
#include <cstring>
#include <cctype>
#include <stack>

using namespace std;

char ch[200];
int match[300];
int len;

int dfs(int s, int t) {
	if (s >= t)
		return 0;
	int ret = 0;
	while (s + 1 <= t && isupper(ch[t - 1])) {
		t--;
		ret++;
	}
	if (s == t)
		return ret;

	int tt = t - 1;
	while (tt - 1 >= s && isdigit(ch[tt - 1]))
        tt--;
	int mul = 0;
	for (int i = tt; i < t; i++)
		mul = 10 * mul + (ch[i] - '0');

	if (ch[tt - 1] == ')')
		return dfs(s, match[tt - 1]) + dfs(match[tt - 1] + 1, tt - 1) * mul + ret;
	else
		return dfs(s, tt - 1) + mul + ret;
}

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		scanf(" %s", ch);
		len = strlen(ch);
		stack<int> st;
		for (int i = 0; i < len; i++) {
			if (ch[i] == ')') {
				match[i] = st.top();
				st.pop();
			}
			else if (ch[i] == '(')
				st.push(i);
		}
		printf("%d\n", dfs(0, len));
	}
	return 0;
}
*/
