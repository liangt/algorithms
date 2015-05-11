/*
#include <cstdio>
#include <algorithm>

const int N = 100000;
int a[N];
int n, n2;

// 构造cmp(x)满足时,任意y>x，均有cmp(y)满足
bool cmp(int c){
    int j=1, tp;
    long long ans = 0;
    for(int i=0; i<n; i++){
        tp = a[i] + c;
        while(j<n && a[j]<tp)
            j++;
        ans += n - j;
    }
    return ans <= n2;
}

int main(){
    int l, r, m;
    while(scanf("%d", &n) != EOF){
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);
        std::sort(a, a+n);
        n2 = n * (n -1) / 4;
        l = 0, r = a[n-1]-a[0] + 1;
        while(l + 1< r){
            m = (l + r) / 2;
            if(cmp(m))
                r = m;
            else
                l = m ;
        }
        printf("%d\n", l);
    }
	return 0;
}
*/
