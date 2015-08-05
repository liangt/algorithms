/*
#include <iostream>
using namespace std;

const int N = 10;
int a[N], tree[N], p, n;

void build(int r){
    int l = 2 * r + 1;
    if(l < n)
        build(l);
    tree[r] = a[p++];
    l++;
    if(l < n)
        build(l);
}

bool find(int r, int v){
    if(r >= n)
        return false;
    if(tree[r] == v)
        return true;
    else if(tree[r] > v)
        return find(2*r+1, v);
    else
        return find(2*r+2, v);
}

int main(){
    n = 5;
    p = 0;
    for(int i=0; i<n; i++)
        a[i] = 2 * i + 1;
    build(0);
    for(int i=0; i<n; i++)
        cout<<tree[i]<<endl;
    return 0;
}
*/
