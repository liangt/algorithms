/*
#include <cstdio>

// 完全背包的另一种解法
// 思想来源于多重背包的解法

const int M = 100005;
int a[M];

int main(){
    int n, m, w, v, t, tp, mx;
    scanf("%d%d", &n, &m);
    for(int k=0; k<n; k++){
        scanf("%d%d", &w, &v);
        if(w > m)
            continue;
        for(int j=0; j<w; j++){
            t = (m-j) / w;
            mx = a[j];
            for(int p=1; p<=t; p++){
                tp =a[p * w + j] - p* v;
                if(tp > mx)
                    mx = tp;
                a[p*w+j] = mx + p*v;
            }
        }
    }
    printf("%d\n", a[m]);
	return 0;
}
*/
