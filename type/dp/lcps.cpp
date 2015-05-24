/*
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int N = 100;
char o_str[N], n_str[2*N+3];
int num[2*N+3];

void lcps(int& pos, int& len)
{
	// Preprocess
	// For example, S = "abba", T = "^#a#b#b#a#$".
    // ^ and $ signs are sentinels appended to each end to avoid bounds checking
	n_str[0] = '^';
	n_str[1] = '#';
	char *p = o_str;
	int n = 2;
	while(*p != '\0')
	{
		n_str[n++] = *p;
		n_str[n++] = '#';
		p++;
	}
	n_str[n] = '$';

	int c = 0, r = 0, j;
	for(int i=1; i<n-1; i++)
	{
		j = 2*c - i;
		num[i] = (r > i) ? min(r-i, num[j]) : 0;
    
		// Attempt to expand palindrome centered at i
		while (n_str[i + 1 + num[i]] == n_str[i - 1 - num[i]])
			num[i]++;
 
		// If palindrome centered at i expand past R,
		// adjust center based on expanded palindrome.
		if (i + num[i] > r) 
		{
			c = i;
			r = i + num[i];
		}
	}

	// Find the maximum element in P.
	len = 0;
	pos = -1;
	for (int i = 1; i < n-1; i++) 
	{
		if (num[i] > len) {
			len = num[i];
			pos = i;
		}
	}
	pos = pos / 2 - 1;
}

int main()
{
	int len, pos;
	while(scanf("%s", o_str) != EOF)
	{
		lcps(pos, len);
		cout<<len<<" "<<pos<<endl;
	}
	return 0;
}
*/