/*
#include <cstdio>

const int N = 10001;
float a[N];
int k, n;

bool cmp(double m){
    int ans = 0;
    for(int i=0; i<n; i++)
        ans += int(a[i]/m);
    return ans>=k;
}

int main(){
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++)
        scanf("%f", &a[i]);
    double l = 0, r=100001, m;
    for(int i=0; i<100; i++){
        m = (l + r) / 2;
        if(cmp(m))
            l = m;
        else
            r = m;
    }
    printf("%.02f\n", int(r*100)/100.0);
	return 0;
}
*/
