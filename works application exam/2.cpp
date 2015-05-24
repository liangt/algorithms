/*
#include <cstdio>
#include <cmath>

int main(){
    int q;
    long long n,t,m, x, y;
    scanf("%d", &q);
    while(q--){
          scanf("%lld", &n);
          t = int(sqrt(n/2));
          if(2*t*(t+1)+1 < n)
            t++;
           m = n - (2*t*(t-1)+1);
           n = m / 2;
           if(n <= t){
                x = n - t;
                if(m & 1)
                    y = n;
                else
                    y = -n;
           }
           else{
                n -= t;
                x = n;
                if(m & 1)
                    y = t - n;
                else
                    y = n - t;
           }
           printf("%lld %lld\n", x, y);
    }
	return 0;
}
*/
