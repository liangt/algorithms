/*
#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
using namespace std;

const int N = 200002;
int ct[N], sa[N], rk[N], rk2[N];

void suffixArray(string str, int n)
{
	int m = 128; 
	for(int i=0; i<=m; i++)
		ct[i] = 0;
	for(int i=0; i<n; i++)
		ct[rk[i] = str[i]]++;
    for(int i=1; i<=m; i++)
		ct[i] += ct[i-1];
	for(int i=n-1; i>=0; i--)
		sa[--ct[str[i]]] = i;

	int j, pre, nxt, pre_k, nxt_k;
	int *rkp = rk, *rk2p = rk2, *temp;
	for(int k=1; k<n; k<<=1)
	{
		j = 0;
		for(int i=n-k; i<n; i++)
			rk2p[j++] = i;
		for(int i=0; i<n; i++)
			if(sa[i] >= k)
				rk2p[j++] = sa[i] - k;

		for(int i=0; i<=m; i++)
			ct[i] = 0;
		for(int i=0; i<n; i++)
			ct[rkp[rk2p[i]]]++;
		for(int i=1; i<=m; i++)
			ct[i] += ct[i-1];
		for(int i=n-1; i>=0; i--)
			sa[--ct[rkp[rk2p[i]]]] = rk2p[i];

		rk2p[sa[0]] = 0;
		j = 0;
		for(int i=1; i<n; i++)
		{
			pre = sa[i-1];
			nxt = sa[i];
			pre_k = pre + k;
			nxt_k = nxt + k;
			if(rkp[pre] == rkp[nxt] && pre_k < n && nxt_k < n && rkp[pre_k] == rkp[nxt_k])
				rk2p[nxt] = j;
			else
				rk2p[nxt] = ++j;
		}
		
		temp = rkp;
		rkp = rk2p;
		rk2p = temp;
		
		if(j == n-1)
			break;
		m = j;
	}

	if(rkp != rk)
		for(int i=0; i<n; i++)
			rk[i] = rkp[i];
}

void heightArray(string str, int n)
{
	rk2[0] = 0;
	int k = 0,j;
	for(int i = 0; i < n; i++)
	{
		if(rk[i] == 0)
			continue;
		j = sa[rk[i] - 1];
		while(i+k<n && j+k<n && str[i+k] == str[j+k])
			k++;
		rk2[rk[i]] = k;
		if(k)
			k--;
	}
}

int main()
{
	string str = "aabaaaab";   
	int n = str.size();
	clock_t start,end;
	start = clock();
	suffixArray(str, n);
	end = clock();
	cout<<(double(end-start))/CLOCKS_PER_SEC<<endl;

	start = clock();
	suffixArray_p(str, n);
	end = clock();
	cout<<(double(end-start))/CLOCKS_PER_SEC<<endl;

	heightArray(str, n);
	for(int i=0; i<n; i++)
		cout<<sa[i]<<" ";
	cout<<endl;
	for(int i=0; i<n; i++)
		cout<<rk[i]<<" ";
	cout<<endl;
	for(int i=0; i<n; i++)
		cout<<rk2[i]<<" ";
	cout<<endl;
	while(1);
	return 0;
}

*/