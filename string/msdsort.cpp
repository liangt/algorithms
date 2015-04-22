/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// 从左到右处理字符
// 一般只需要检查若干字符便能完成所有字符串的排序
// 它能快速将需要排序的数组划分成较小的数组，小数组的性能对整个排序的影响非常大
// 一般将小数组用插入排序实现，一般阈值为10
// 对于有大量等值的字符串，排序效率也不是很好，最坏情况便是所有都相等的情形，大量含有相同前缀的字符串也会导致同样的问题
// 时间复杂度： O(N)-O(NL+LR)
// 空间复杂度： O(N+LR)
// 特别适用于随机字符串
//下面以处理全由小写字母组成的字符串为例
// a-z  ---->  1-26, '\0'  ---->   0
void msdsort_help (string a[], int s, int e, int l){
    if(s+1 >= e)
        return;
    string* b  = new string[e-s];
    int* ct = new int[28];
    for(int i=0; i<28; i++)
        ct[i] = 0;
    for(int i=s; i<e; i++)
        if(a[i].size() < l)
            ct[0]++;
        else
            ct[a[i][l-1]-'a'+2]++;
    for(int i=1; i<27; i++)
        ct[i] += ct[i-1];
    for(int i=s; i<e; i++)
        if(a[i].size() < l)
            b[ct[0]++] = a[i];
        else
            b[ct[a[i][l-1]-'a'+1]++] = a[i];
    for(int i=s; i<e; i++)
        a[i] = b[i-s];
    delete []b;
    for(int i=1; i<27; i++)
        msdsort_help(a, ct[i-1], ct[i], l+1);
    delete []ct;
}

void msdsort (string a[], int n){
    msdsort_help(a, 0, n, 1);
}

int main(){
    srand(time(0));
    const int N = 100;
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

    msdsort(a, N);

    for(int i=0; i<N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/
