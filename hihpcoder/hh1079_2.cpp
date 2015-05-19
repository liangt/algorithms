/*
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

#define maxn 100005

int a[maxn], b[maxn];
int c[2*maxn];

int n, l;

int compress() //坐标离散化
{
    memcpy(c, a, sizeof(a));
    memcpy(c+n, b, sizeof(b));

    sort(c, c+2*n);
    int size = unique(c, c+2*n)-c;

    for(int i = 0; i < n; i++){
        a[i] = lower_bound(c, c+size, a[i])-c;
        b[i] = lower_bound(c, c+size, b[i])-c;
    }

    return size-1;
}

struct node
{
    node(){}
    node(int ll, int rr) { l = ll;  r = rr;}
    int l, r;
    int lazy;
};

node tree[4*maxn];
int data[maxn]; //存储对应区间海报编号

void build(int rt, int l, int r)
{
    tree[rt] = node(l, r);
    tree[rt].lazy = 0;
    if(l == r) return;

    int m = l+(r-l)/2;
    build(2*rt, l, m);
    build(2*rt+1, m+1, r);
}


void seg_modify(int rt, int ll, int rr, int v)
{
    int l = tree[rt].l, r = tree[rt].r;
    int &lazy = tree[rt].lazy;
    int lc = 2*rt, rc = 2*rt+1;

    if(l == ll && r == rr){     //懒惰更新
        lazy = v;
        return;
    }
    else{
        if(lazy){
            tree[lc].lazy = lazy;
            tree[rc].lazy = lazy;
            lazy = 0;
        }
    }

    int m = l+(r-l)/2;
    if(rr <= m)
        seg_modify(lc, ll, rr, v);
    else if(ll > m)
        seg_modify(rc, ll, rr, v);
    else{
        seg_modify(lc, ll, m, v);
        seg_modify(rc, m+1, rr, v);
    }

}

void traverse(int rt)   //遍历线段树，使所有懒惰值真正赋值到data数组上
{
    int l = tree[rt].l, r = tree[rt].r;
    int lc = 2*rt, rc = 2*rt+1;
    if(l == r){
        data[l] = tree[rt].lazy;
        return;
    }

    if(tree[rt].lazy){
        tree[lc].lazy = tree[rt].lazy;
        tree[rc].lazy = tree[rt].lazy;
    }

    traverse(lc);
    traverse(rc);
}

int main()
{
    while(~scanf("%d%d", &n, &l)){
        for(int i = 0; i < n; i++)
            scanf("%d%d", a+i, b+i);

        l = compress();
        build(1, 0, l-1);

        for(int i = 0; i < n; i++)
            seg_modify(1, a[i], b[i]-1, i+1);
        traverse(1);

        sort(data, data+l);
        int ans = unique(data, data+l)-data;
        if(!data[0]) ans--;
        printf("%d\n", ans);
    }
    return 0;
}
*/
