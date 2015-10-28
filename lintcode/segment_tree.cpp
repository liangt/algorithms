/*
#include <iostream>
using namespace std;

const int N = 10;
int a[N<<2], b[N], m;

void build(int n){
    m = 1;
    while(m < n)
        m <<= 1;
    for(int i = 0; i < n; i++)
        a[i+m-1] = b[i];
    int num =  (m << 1) - 1;
    for(int i = m -1 + n; i < num; i++)
        a[i] = INT_MAX;
    int l, r;
    for(int i = m - 2; i >= 0; i--){
        l = (i << 1) + 1;
        r = l + 1;
        a[i] = a[l] < a[r] ? a[l] : a[r];
    }
}

int main(){
    return 0;
}
*/
