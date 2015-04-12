/*
#include <cstdio>
#include <cstring>

const int N = 21;
int a[N], d[N];

int main(){
    int n, m, t;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &m);
        for(int i=0; i<m; i++){
                scanf("%d", a+i);
                d[i] = 1;
        }
        for(int i=1; i<m; i++)
            for(int j=0; j<i; j++)
                if(a[i] < a[j] && d[i] < d[j] + 1)
                    d[i] = d[j] + 1;
        t = 0;
        for(int i=0; i<m; i++)
            if(t < d[i])
                t = d[i];
        printf("%d\n", t);
    }
    return 0;
}
*/
