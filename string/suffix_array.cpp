/*
#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
const int N=300;
// sa[i]表示排序后排在第i个位置的后缀(这里后缀不使用完整的字符串表示，而是用其的开始下标表示)
// rk[i]表示从第i个位置开始后缀在排序后的顺序序号
// sa[i]=j    <====>    rk[j]=i
int sa[N+1], rk[N+1], tmp[N+1];   // N+1是因为将空串也当作一个后缀来处理

// 根据长度为k的大小比较对长度为2k的大小
bool cmp(int i, int j){
    if(rk[i] < rk[j])
        return true;
    else if(rk[i] > rk[j])
        return false;
    else{
        int ri = i+k<=n ? rk[i+k] : -1;
        int rj = j+k<=n ? rk[j+k] : -1;
        return ri < rj;
    }
}

// 总的时间复杂度主要取决于 logn次循环，每次循环排序的时间复杂度
// 这里的实现为 logn * O(nlogn) = O(nlognlogn)
// 将排序改为基数排序，时间复杂度为 O(nlogn)
void suffixArray(string s){
    n = s.size();

    // 初始化
    for(int i=0; i<n; i++){
        sa[i] = i;
        rk[i] = s[i];
    }
    sa[n] = n;
    rk[n] = -1;

    // 利用长度为k的结果对长度为2k的排序
    for(k=1; k<=n; k<<=1){
        sort(sa, sa+n+1, cmp);   // 这里直接用sort,时间复杂度是O(nlogn)，当然也可以改用基数排序,时间复杂度O(n)

        // 用新的sa更新rk
        // 为什么不直接用sa[i]=j ===> rk[j]=i直接得到rk呢？
        // 因为从i和j开始的后缀的长度为l的子串可能相等，即它们的rk值应该相等，而直接用上述关系得到的值不是相等的，这会影响后面计算2l长的子串是大小的比较
        // 由sa的定义可知，相等的后缀子串必然在sa中相邻，同时sa[i-1]开始的子串一定小于等于sa[i]开始的子串
        tmp[sa[0]] = 0;
        for(int i=1; i<=n; i++)
            tmp[sa[i]] = tmp[sa[i-1]] +( cmp(sa[i-1], sa[i]) ? 1 : 0);
        for(int i=0; i<=n; i++)
            rk[i] = tmp[i];
    }
}

// 改用基数排序计算
// 假设字符串组成是a-z
int ct[N+1];  //计数数组
int m; // 当前名次的上限
void radixSort(){
    // 先处理后面长度为k的串
    int tp = 0; // 记录空串的数量，循环完后tp=k
    for(int i=0; i<=m; i++)
        ct[i] = 0;
    for(int i=0; i<=n; i++){
        if(sa[i]+k > n)
            tmp[tp++] = sa[i];   // 空串直接复制
        else
            ct[rk[sa[i]+k]+1]++;
    }
    ct[0] = k;   // tp=k
    for(int i=1; i<=m; i++)
        ct[i] += ct[i-1];
    for(int i=0; i<=n; i++){
        tp = sa[i] + k;
        if(tp <= n)
            tmp[ct[rk[tp]]++] = sa[i];
    }

    // 再处理前面为k的串
    for(int i=0; i<=m; i++)
        ct[i] = 0;
    for(int i=0; i<=n; i++)
            ct[rk[tmp[i]]+1]++;
    for(int i=1; i<=m; i++)
        ct[i] += ct[i-1];
    for(int i=0; i<=n; i++)
        sa[ct[rk[tmp[i]]]++] = tmp[i];
}

void suffixArray2(string s){
    n = s.size();

    // 初始化
    for(int i=0; i<n; i++){
        sa[i] = i;
        rk[i] = s[i] -'a';
    }
    sa[n] = n;
    rk[n] = 0;
    m = 28;

    // 利用长度为k的结果对长度为2k的排序
    int tp;
    for(k=1; k<=n; k<<=1){
        radixSort();
        tmp[sa[0]] = 0;
        m = 1;
        for(int i=1; i<=n; i++){
            tp = cmp(sa[i-1], sa[i]) ? 1 : 0;
            m += tp;
            tmp[sa[i]] = tmp[sa[i-1]] +tp;
        }
        for(int i=0; i<=n; i++)
            rk[i] = tmp[i];
    }
}

// 计算高度数组，结果保存在tmp中
// tmp[i]表示后缀sa[i]与sa[i+1]的最长公共前缀
// 如果按照tmp[0],tmp[1],...,tmp[n]的顺序计算，在最坏情况下时间复杂度是O(n^2)
// 如何选择某种计算顺序，使得时间复杂度降为O(n)?
// 定义h[i]=tmp[rk[i]-1],如果按照h[1],..,h[n]的顺序来计算，那么时间复杂度为O(n)
// tmp[rk[i]-1]表示sa[rk[i]-1]与sa[rk[i]]=i开始后缀的最长公共前缀的长度
// 若sa[rk[i]-1]=k,则从i+1开始和从k+1开始的后缀的最长公共前缀至少是h[i]-1(它们是从i开始和k开始的后缀去掉开头字母)
void height(string s){
    tmp[0] = 0;
    int n=s.size(), h=0, j;
    for(int i=0; i<n; i++){
        j = sa[rk[i]-1];
        if(h>0)
            h--;
        for(; j+h<n&&i+h<n; h++)
            if(s[j+h] != s[i+h])
                break;
        tmp[rk[i]-1] = h;
    }
}

int main(){
    string s = "abracadabra";
    suffixArray(s);
    height(s);
    for(int i=0; i<s.size(); i++)
        cout<<tmp[i]<<" ";
    cout<<endl;
    suffixArray2(s);
    height(s);
    for(int i=0; i<s.size(); i++)
        cout<<tmp[i]<<" ";
    cout<<endl;
	return 0;
}
*/
