#include <cstdio>
#include <algorithm>
using namespace std;

// 二维多重背包
// 时间复杂度 O(nVW)

const int N = 1000;
int ans[N][N],  deq[N], deqv[N];

int main(){
    int V, W, n, v, w, c, val, c1, c2,  tc, s, e,  tp, tmp;
    scanf("%d%d%d", &V, &W, &n);
    for(int t=0; t<n; t++){
        scanf("%d%d%d%d", &v, &w, &c, &val);
        if(v > V || w > W)
            continue;
        for(int i=0; i<v; i++){
            c1 = (V - i) / v;
            for(int k1=0; k1<=c1; k1++){
                for(int j=0; j<w; j++){
                    c2 = (W - j) / w;
                    tc = k1;
                    if(k1 > c2)
                        tc = c1;
                    s = e = 0;
                    tmp = i + (k1 - k2) * w;
                    for(int k2=0; k2<=tc; k2++){
                        tp = ans[tmp + k2*]
                    }
                    s = e = 0;
                    for(int k2=tc+1; k2<=c2; k2++){

                    }
                }
            }
        }
    }
    printf("%d\n", ans[W][V]);
	return 0;
}
