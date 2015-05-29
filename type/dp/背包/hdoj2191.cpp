/*
#include <cstdio>

const int N = 105;
int ans[N], deq[N], deqv[N];

int main(){
    int n, m, w, v, c, t, nc, s, e, tp;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &m);
        for(int i=0; i<N; i++)
            ans[i] = 0;
        while(m--){
            scanf("%d%d%d", &w, &v, &c);
            for(int i=0; i<w; i++){
                nc = (n - i) / w;
                s = e = 0;
                for(int j=0; j<=nc; j++){
                    tp = ans[i+j*w] - j*v;
                    while(s<e && deqv[e-1]<=tp)
                        e--;
                    deq[e] = j;
                    deqv[e++] = tp;
                    ans[i+j*w] = deqv[s] + j*v;
                    if(deq[s] == j - c)
                        s++;
                }
            }
        }
        printf("%d\n", ans[n]);
    }
	return 0;
}
*/
