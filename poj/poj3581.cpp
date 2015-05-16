/*
#include <cstdio>
#include <algorithm>
using namespace std;

int n, k;
const int N=200002;
int sa[N], rk[N], tmp[N];

bool cmp(int i, int j){
    if(rk[i] < rk[j])
        return true;
    else if(rk[i] > rk[j])
        return false;
    else{
        int ri = i+k<=n ? rk[i+k] : -1;
        int rj = j+k<=n ? rk[j+k] : -1;
        return ri < rj;
    }
}

void suffixArray(string s){
    for(int i=0; i<=n; i++)
        sa[i] = i;

    for(k=1; k<=n; k<<=1){
        sort(sa, sa+n+1, cmp);
        tmp[sa[0]] = 0;
        for(int i=1; i<=n; i++)
            tmp[sa[i]] = tmp[sa[i-1]] +( cmp(sa[i-1], sa[i]) ? 1 : 0);
        for(int i=0; i<=n; i++)
            rk[i] = tmp[i];
    }
}

int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &rk[i]);
    rk[n] = -1;
	return 0;
}
*/
