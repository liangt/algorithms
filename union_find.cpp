#include <cstdio>

const int N = 50000;
int pa[3*N+2], rk[3*N+2];

int fd(int x){
    if(pa[x] == 0)
        return x;
    return pa[x] = fd(pa[x]);
}

void un(int a, int b){
    int ra = fd(a);
    int rb = fd(b);
    if(ra == rb)
        return;
    if(rk[ra] < rk[rb])
        pa[ra] = rb;
    else if(rk[ra] > rk[rb])
        pa[rb] = ra;
    else{
        pa[ra] = rb;
        rk[rb]++;
    }
}

bool same(int a, int b){
    return fd(a) == fd(b);
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int d, x, y;
    int res = 0;
    while(k--){
            scanf("%d %d %d", &d, &x, &y);
            if(x > n || y > n){
                res++;
                continue;
            }
            if(d == 1){
                if(same(x, y+n) || same(x, y+2*n))
                    res++;
                else{
                    un(x, y);
                    un(x+n, y+n);
                    un(x+2*n, y+2*n);
                }
            }
            else{
                if(same(x, y) || same(x, y+2*n))
                    res++;
                else{
                    un(x, y+n);
                    un(x+n, y+2*n);
                    un(x+2*n, y);
                }
            }
    }
    printf("%d\n", res);
    return 0;
}
