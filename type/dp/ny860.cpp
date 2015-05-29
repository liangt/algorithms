/*
#include <cstdio>

const int N = 10002;
int ans[N];

int main(){
    int n, m, w, v;
    while(scanf("%d%d", &n, &m) != EOF){
        for(int i=1; i<N; i++)
            ans[i] = 1000000005;
        for(int i=0; i<n; i++){
            scanf("%d%d", &w, &v);
            for(int j=N; j>=v; j--)
                if(ans[j] > ans[j-v] + w)
                    ans[j] = ans[j-v] + w;
        }
        v = 0;
        for(int i=1; i<N; i++)
            if(ans[i] <= m)
                v = i;
        printf("%d\n", v);
    }
	return 0;
}
*/
