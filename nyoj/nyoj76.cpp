/*
#include <cstdio>

int d[40];

int main(){
    int n, m;
    d[0] = 0;
    d[1] = 1;
    d[2] = 2;
    for(int i=3; i<40; i++)
        d[i] = d[i-1] + d[i-2];
    scanf("%d", &n);
    while(n--){
        scanf("%d", &m);
        printf("%d\n", d[m-1]);
    }
    return 0;
}
*/
