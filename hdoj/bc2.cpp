/*
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 101;
int a[N], b[N];

int merge(int s, int e){
	if(s + 1 >= e)
		return 0;
	int m = (s + e) >> 1;
	int c = merge(s, m) + merge(m, e);
	int i = s, j = m, t = s;
	while(i<m && j<e){
		if(a[i] <= a[j])
			b[t++] = a[i++];
		else{
			b[t++] = a[j++];
			c += m - i;
		}
	}
	while(i<m){
		b[t++] = a[i++];
	}
	while(j<e)
		b[t++] = a[j++];
	for(i=s; i<e; i++)
		a[i] = b[i];
	return c;
}

int main(){
    int n;
    int c[20];
    int ans = 0, d;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        c[i] = i;
    int t = 0;
    do{
        //printf("Order: %d\n", ans);
        d = 0;
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(c[i] > c[j])
                    d++;
        t += d;
        printf("%d ", d);
        //for(int i=0; i<n; i++)
        //    printf("%d ", c[i]);
        ans++;
        if(ans % 6 == 0)
            printf("\n");
    } while(next_permutation(c, c+n));
    printf("%d\n", t);
	return 0;
}
*/
