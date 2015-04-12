/*
#include <cstdio>
#include <algorithm>
using namespace std;

struct rect{
    int a, b;
};

bool cmp(rect r1, rect r2){
    if(r1.a < r2.a || (r1.a == r2.a && r1.b < r2.b))
        return true;
    return false;
}

const int N = 1002;
rect rt[N];
int d[N];

int main(){
    int k, n, t;
    scanf("%d", &k);
    while(k--){
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            scanf("%d%d", &rt[i].a, &rt[i].b);
            if(rt[i].a > rt[i].b)
                swap(rt[i].a, rt[i].b);
            d[i] = 1;
        }
        sort(rt, rt+n, cmp);
        for(int i=1; i<n; i++)
            for(int j=0; j<i; j++){
                if(rt[j].a<rt[i].a && rt[j].b<rt[i].b && d[i] < d[j] + 1)
                    d[i] = d[j] + 1;
            }
        t = 1;
        for(int i=0; i<n; i++)
            if(d[i] > t)
                t = d[i];
        printf("%d\n", t);
    }
    return 0;
}
*/
