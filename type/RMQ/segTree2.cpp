/*
#include <iostream>
#include <cstring>
using namespace std;

// 在segmentTree中更新只对某个点进行更新，这里实现对某个区间的更新
// 如，将某个区间的所有元素均设为某个值
// 思想: 为每个节点添加一个惰性标记，标记该节点是否进行了某种操作(更新)
// 所谓惰性，即当需要该节点时再进行相应的操作(更新)
// 每次更新时间复杂度: O(logn)

const int N = 20;
const int INF = 1000000;
int a[N], tag[4*N], seg[4*N], n;

void build(int num){
    memset(tag, -1, sizeof(tag));
	n = 1;
	while( n < num)
		n <<= 1;
	int i, l=n-1, r;
	for(i=0; i<num; i++)
		seg[l+i] = a[i];
    r = 2 * n - 1;
	for(i=l+num; i<r; i++)
		seg[i] = INF;
	for(i=n-2; i>=0; i--){
		l = i * 2 + 1;
		r = i * 2 + 2;
		if(seg[l] > seg[r])
			seg[i] = seg[r];
		else
			seg[i] = seg[l];
	}
}

// 更新[a, b)内的所有元素为v
void update(int a, int b, int v, int l, int r, int k){
    if(a>=r || b<=l)
        return;
    if(a<=l && b>=r){
        seg[k] = v;
        tag[k] = v;
        return;
    }
    int m = (l + r) / 2, lv, rv;
    lv = 2 * k + 1;
    rv = lv + 1;
    if(tag[k] != -1){
        tag[lv] = tag[k];
        seg[lv] = tag[lv];
        tag[rv] = tag[k];
        seg[rv] = tag[rv];
        tag[k] = -1;
    }
    update(a, b, v, l, m, lv);
    update(a, b, v, m, r, rv);
    if(seg[l] > seg[r])
        seg[k] = seg[r];
    else
        seg[k] = seg[l];
}

int query(int a, int b, int l, int r, int k){
    if(a>=r || b<=l)
        return INF;
    if(a<=l && b>=r)
        return seg[k];
    int lv, rv, m;
    m = (l + r) / 2;
    lv = 2 * k + 1;
    rv = lv + 1;
    if(tag[k] != -1){
        tag[lv] = tag[k];
        seg[lv] = tag[lv];
        tag[rv] = tag[k];
        seg[rv] = tag[rv];
        tag[k] = -1;
    }
    lv = query(a, b, l, m, 2*k+1);
    rv = query(a, b, m, r, 2*k+2);
    if(lv > rv)
        return rv;
    return lv;
}

int main(){
    cin>>n;
    for(int i=-0; i<n; i++)
        cin>>a[i];
    build(n);
    int q, t, l, r, v;
    cin>>q;
    while(q--){
        cin>>t;
        if(t){
            cin>>l>>r>>v;
            update(l, r, v, 0, n, 0);
        }
        else{
            cin>>l>>r;
            cout<<query(l, r, 0, n, 0)<<endl;
        }
    }
	return 0;
}
*/
