#include <iostream>
using namespace std;

// 线段树
// 这里用数组实现的完美二叉树表示(即每一层都是满的)
// n个元素的线段树的最大空间不超过4n,准确说应该是2n-1到4n-5之间
// 最少的情况是n为2的幂，此时的空间为2n-1
// 最多的情况是n为2的幂+1，此时的空间为4n-5
// 这里考虑两种操作:
//    (1) 查询 log(n)
//    (2) 更新 log(n)

const int N = 20;
const int INF = 1000000;
int a[N], seg[4*N], n;

void build(int num){
	n = 1;
	while( n < num)  // 首先将最后一层节点数扩展到2的幂
		n <<= 1;
	int i, l=n-1, r;
	for(i=0; i<num; i++)
		seg[l+i] = a[i];
	for(i=tp+num; i<n; i++)
		seg[i] = INF;
	for(i=n-2; i>=0; i--){
		l = i * 2 + 1;
		r = i * 2 + 2;
		if(a[l] > a[r])
			a[i] = a[r];
		else
			a[i] = a[l];
	}
}

void update(int i, int v){
	i += n -1;
	seg[i] = v;
	int p = (i - 1) / 2;
	while(p && a[p] > a[i]){
		a[p] = a[i];
		i = p;
		p = (i - 1) / 2;
	}
}

// 查询[a,b)区间的最小值
//[l,r)的最小值为seg[k]
// 当[l,r)包含与[a,b)时，直接返回seg[k],否则递归返回左右节点的小值
int query(int a, int b, int l, int r, int k){
    if(r<=a || b>=l)  // 区间不相交，返回INF
        return INF;
    if(a<=l && b>=r)
        return seg[k];
    int lv, rv, m;
    m = (l + r) / 2;
    lv = query(a, b, l, m, 2*k+1);
    rv = query(a, b, m, r, 2*k+2);
    if(lv > rv)
        return rv;
    return lv;
}

int main(){
	return 0;
}
