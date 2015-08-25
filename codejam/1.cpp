/*
#include <cstdio>
#include <iostream>
using namespace std;

int fun(long long n, long long k){
	if (k == 1)
		return 0;
	long long m = (n >> 1);
	long long t = m + 1;
	if (k == t)
		return 0;
	else if (k < t)
		return fun(m, k);
	else
		return 1 - fun(m, n + 1 - k);
}

int main(){
    freopen("codejam/A-large.in", "r", stdin);
    freopen("codejam/A-large.out", "w", stdout);
    int t;
    cin>>t;
	long long k, n;
	for(int i=1; i<=t; i++){
        cin >> k;
        n = 1;
        while (n <= k)
            n <<= 1;
        n--;
        cout << "Case #"<<i<<": "<<fun(n, k) << endl;
	}
	return 0;
}
*/
