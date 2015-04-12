/*
// f[i]表示以a[i]为结尾的最大字串和
// f[i] = f[i-1] > 0 ? f[i-1] : 0 + a[i];
#include <cstdio>

int main(){
    int k, n, sm , s, t;
    scanf("%d", &k);
    while(k--){
        scanf("%d", &n);
        s = 0;
        sm = -200;
        for(int i=0; i<n; i++){
            scanf("%d", &t);
            s += t;
            if(sm < s)
                sm = s;
            if(s < 0)
                s = 0;
        }
        printf("%d\n", sm);
    }
    return 0;
}
*/
