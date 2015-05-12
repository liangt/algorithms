/*
#include <cstdio>
#include <algorithm>

const int N = 100000;
int a[N], n, c;

bool cmp(int m){
    int i=0, j=0, k=0, t;
    while(j<n){
        t = a[i] + m;
        while(j<n && a[j]<t)
            j++;
        if(j<n){
            k++;
            i = j;
            if(k == c)
                return true;
        }
    }
    return false;
}

int main(){
    scanf("%d%d", &n, &c);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    std::sort(a, a+n);
    c--;
    int l=-1, r=1000000002, m;
    while(l+1 < r){
        m = (l + r) / 2;
        if(cmp(m))
            l = m;
        else
            r = m;
    }
    printf("%d\n", l);
	return 0;
}
*/
