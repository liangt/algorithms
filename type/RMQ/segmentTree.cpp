/*
#include <iostream>
using namespace std;

// 线段树
// 实现一：用数组实现的完美二叉树表示(即每一层都是满的)
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

void update(int i, int v){
	i += n -1;
	seg[i] = v;
	int p = (i - 1) / 2;
	while(p && seg[p] > seg[i]){
		seg[p] = seg[i];
		i = p;
		p = (i - 1) / 2;
	}
}

// 查询[a,b)区间的最小值
//[l,r)的最小值为seg[k]
// 当[l,r)包含与[a,b)时，直接返回seg[k],否则递归返回左右节点的小值
int query(int a, int b, int l, int r, int k){
    if(r<=a || b<=l)  // 区间不相交，返回INF
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

// 实现二：用数组表示，不进行2的幂扩展，即最终线段树不一定是完美二叉树
// n个元素的线段树的最大空间不超过4n,准确说应该是2n-1到4n-5之间
// n=2^k+j (0<j<=2^k),  空间大小不超过为1+2+...+2^k+2^(k+1)=2^(k+2)-1=4*2^k-1=4(n-j)-1=4n-4j-1
// j=1时，空间为4n-5
// j=2^k时，空间为2n-1
void build2(int l, int r, int k){
    if(r-l == 1){  // 叶节点
        seg[k] = a[l];
        return;
    }
    int lc, rc, m;
    lc = 2 * k + 1;
    rc = l + 1;  //2*k+2
    m = (l + r) / 2;
    build2(l, m, lc);
    build2(m, r, rc);
    if(seg[lc] > seg[rc])
        seg[k] = seg[rc];
    else
        seg[k] = seg[lc];
}

void update2(int i, int v, int l, int r, int k){
    if(r - l == 1){
        seg[k] = v;
        return;
    }
    int m = (l + r) / 2;
    if(i < m)
        update2(i, v, l, m, 2*k+1);
    else
        update2(i, v, m, r, 2*k+2);
    if(seg[k] < v)
        seg[k] = v;
}

// 实现三: 指针
// n个元素构成的线段树最多有2n-1个节点
// n=2^k+j (0<j<=2^k)，分成两部分考虑
//        第一部分2^k，这部分的节点数为1+2+...+2^k=2^(k+1)-1
//        第二部分j,j<=n/2
//        将两部分合并，需要一个额外的根节点
// f(n)=2^(k+1)-1+f(j)+1=2^(k+1)+f(j)<=2^(k+1)+f(n/2)<=....<=2n-1
// 相比于数组的实现，其实空间消耗并没有减少，因为每个节点的空间消耗是数组的3倍(数组的节点只需保存值)
struct node{
    int val;
    node *left, *right;
    node(int v=0):val(v), left(NULL), right(NULL){}
};

void build3(int l, int r, node* root){
    if(r - l == 1){
        root = new node(a[l]);
        return;
    }
    int m = (l + r) / 2;
    build3(l, m, root->left);
    build3(m, r, root->right);
    if(root->left->val > root->right->val)
        root->val = root->right->val;
    else
        root->val = root->left->val;
}

void update3(int i, int v, int l, int r, node* root){
    if( r - l == 1){
        root->val = v;
        return;
    }
    int m = (l + r) / 2;   // 其实可以通过在node中添加一个表示区间中点的字段来避免区间左右端点的传递和中点的计算
    if(i < m)
        update3(i, v, l, m, root->left);
    else
        update3(i, v, m, r, root->right);
    if(root->val < v)
        root->val = v;
}

// 实现四: 静态表
// 为避免指针实现中频繁地分配内存，可以使用静态表现将内存分配，即声明一个node数组
// 将node的左右child指针换成数组下标
// 实现和指针基本一样，这里就不实现了

int main(){
    int c = 31;
   cout<< __builtin_parity(c)<<endl;
   cout<< __builtin_popcount(c)<<endl;
   cout<< __builtin_ffs(c)<<endl;
	return 0;
}
*/
