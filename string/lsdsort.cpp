/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// 从右到左处理字符
// 非常适用于等长字符串的比较
// 时间复杂度: O(NL+LR)
// 空间复杂度: O(N+R)
// 下面以处理全由小写字母组成的等长字符串为例
// a-z  ---->  0-25
void lsdsort (string a[], int n){
    if(n <= 1)
        return;
    int L = a[0].size();
    string* b  = new string[n];
    int* ct = new int[27];
    for(int l=L-1; l>=0; l--){
        for(int i=0; i<27; i++)
            ct[i] = 0;
        for(int i=0; i<n; i++)
            ct[a[i][l]-'a'+1]++;  // 这里a[i][l]-'a'加1的目的是使得ct[a[i][l]-'a']刚好为a[i][l]-'a'的开始位置
        for(int i=1; i<26; i++)
            ct[i] += ct[i-1];
        for(int i=0; i<n; i++)
            b[ct[a[i][l]-'a']++] = a[i];
        for(int i=0; i<n; i++)
            a[i] = b[i];
    }
    delete []b;
    delete []ct;
}

int main(){
    srand(time(0));
    const int N = 100;
    const int L = 6;
    string a[N];
    string b(L, 'a');
    cout<<int(b[6])<<"......"<<endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<L; j++)
            b[j] = 'a' + rand() % 26;
        a[i] = b;
        cout<<a[i]<<" ";
    }
    cout<<endl;

    lsdsort(a, N);

    for(int i=0; i<N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/
