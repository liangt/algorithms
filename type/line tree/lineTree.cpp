/*
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

const int INF =  100000000;
const int N = 20;
int d[4*N], c[N];

void build(int k, int s, int e){
    if(s == e){
        d[k] = c[s];
        return;
    }
    int m = (s + e) >> 1;
    int l = k*2 + 1;
    int r = k*2 + 2;
    build(l, s, m);
    build(r, m+1, e);
    d[k] = min(d[l], d[r]);
}

void init(int n){
    build(0, 0, n-1);
}

int query(int a, int b, int s, int e, int k){
    if(b < s || a > e) //区间不相交
        return INF;
    if(a<=s && b>=e) //区间[a,b]包含区间[s,e]
        return d[k];
    int l, r, m;
    m = (s + e) >> 1;
    l = query(a, b, s, m, k*2+1);
    r = query(a, b, m+1, e, k*2+2);
    return min(l, r);
}

void update(int s, int e, int k, int idx, int v){
    if(s == e){
        d[k] = v;
        return;
    }
    int m = (s + e) >> 1;
    if(idx <= m)
        update(s, m, 2*k+1, idx, v);
    else
        update(m+1, e, 2*k+2, idx, v);
}

int main(){
    int n = 10;
    srand(time(0));
    for(int i=0; i<n; i++){
        c[i] = rand() % 100;
        cout<<c[i]<<" ";
    }
    cout<<endl;
    build(0, 0, n-1);
    int op, l, r;
    while(cin>>op>>l>>r){
        if(op)
            cout<<query(l, r, 0, n-1, 0)<<endl;
        else
            update(0, n-1, 0, l, r);
    }
    return 0;
}
*/
