/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// 快排与高位优先排序的结合
// 每次根据左边的字母进行3划分
// 能很好处理等值，有较长公共前缀，取值范围较小以及小数组的问题
// 其性能并不直接取决于字母表的大小
// 通用排序算法，特别适用于较长公共前缀的字符串
// 时间复杂度： O(N)-O(NL)
// 空间复杂度： O(logN+L)

int charAt(string a, int l){
    return a.size()>l ? a[l] : -1;
}
void quick3sort_help (string a[], int s, int e, int l){
    if(s >= e)
        return;
    int m = (s + e) >> 1;
    swap(a[m], a[e]);
    m = charAt(a[e], l);
    int i=s-1, j=e;
    while(i < j){
        while(i<e && charAt(a[++i], l) <= m);
        while(j>s && charAt(a[--j], l) >= m);
        if(i < j)
            swap(a[i], a[j]);
    }
    swap(a[i], a[e]);
    quick3sort_help(a, s, j, l);            // 仍然比较第l个字符
    quick3sort_help(a, j+1, i, l+1);  // 前l个字符相同，从第l+1个字符开始比较
    quick3sort_help(a, i+1, e, l);      // 仍然比较第l个字符
}

void quick3sort (string a[], int n){
    quick3sort_help(a, 0, n-1, 0);
}

int main(){
    srand(time(0));
    const int N = 10;
    const int L = 6;
    int l;
    string a[N];
    string b(L, 'a');
    for(int i=0; i<N; i++){
        for(int j=0; j<L; j++)
            b[j] = 'a' + rand() % 26;
        l = rand() % 6 + 1;
        a[i] = b.substr(0, l);
        cout<<a[i]<<" ";
    }
    cout<<endl;

    quick3sort(a, N);

    for(int i=0; i<N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/
