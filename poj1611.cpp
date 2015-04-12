/*
#include <cstdio>

const int N = 30002;
int pa[N], rk[N];

int fd(int x){
    if(pa[x] == x)
        return x;
    return pa[x] = fd(pa[x]);
}

void un(int a, int b){
    int ra, rb;
    ra = fd(a);
    rb = fd(b);
    if(ra == rb)
        return;
    if(rk[ra] > rk[rb])
        pa[rb] = ra;
    else{
        pa[ra] = rb;
        if(rk[ra] == rk[rb])
            rk[rb]++;
    }
}

int main(){
    int n,m, k,s, t;
    while(1){
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0)
            break;
        for(int i=0; i<n; i++){
            pa[i] = i;
            rk[i] = 0;
        }
        while(m--){
            scanf("%d", &k);
            k--;
            scanf("%d", &s);
            while(k--){
                scanf("%d", &t);
                un(s, t);
            }
        }
        int res = 1;
        s = fd(0);
        for(int i=1; i<n; i++)
            if(s == fd(i))
                res++;
        printf("%d\n", res);
    }
    return 0;
}
*/
