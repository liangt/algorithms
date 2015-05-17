/*
#include <cstdio>

const int N = 1000000;
int st[20][N], n;

void build(){
    int m, j=1;
    for(int k=1; k<n; k<<=1){
        m = n - k;
        for(int i=0; i<m; i++)
            if(st[j-1][i] > st[j-1][i+k])
                st[j][i] = st[j-1][i+k];
            else
                st[j][i] = st[j-1][i];
        j++;
    }
}

int main(){
    int q, l, r, c;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &st[0][i]);
    build();
    scanf("%d", &q);
    while(q--){
        scanf("%d%d", &l, &r);
        l--, r--;
        c = 31-__builtin_clz(r-l);  // or c = 31-__builtin_clz(r-l+1);
        l = st[c][l];
        r = st[c][r-(1<<c)+1];
        if(l > r)
             printf("%d\n", r);
        else
             printf("%d\n", l);
    }
	return 0;
}
*/
