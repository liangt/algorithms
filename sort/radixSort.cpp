#include <iostream>
using namespace std;

// 基数排序小toy
void radixSort(){
    string s[] = {"ab", "cd", "d", "ef", "av", "po", "a"};
    for(int i=0; i<7; i++)
        cout<<s[i]<<" ";
    cout<<endl;
    string tmp[7];
    int a[] = {1, 2, 3, 4, 1, 5, 1};   // s中字符串第一个字母的排序
    int b[] = {2, 3, 1, 4, 6, 5, 1};   // s中字符串第二个字母的排序
    int c[8] = {0}, d[7];
    for(int i=0; i<7; i++)
        c[b[i]+1]++;
    for(int i=1; i<8; i++)
        c[i] += c[i-1];
    for(int i=0; i<7; i++){
        tmp[c[b[i]]] = s[i];
        d[c[b[i]]++] = a[i];    // 此时先根据第二个字母排序后第一字母的顺序也要相应改变
    }

    for(int i=0; i<7; i++)
        a[i] = d[i];
    for(int i=0; i<8; i++)
        c[i] = 0;
    for(int i=0; i<7; i++)
        c[a[i]+1]++;
    for(int i=1; i<8; i++)
        c[i] += c[i-1];
    for(int i=0; i<7; i++)
        s[c[a[i]]++] = tmp[i];

    for(int i=0; i<7; i++)
        cout<<s[i]<<" ";
    cout<<endl;
}

int main(){
    radixSort();
	return 0;
}
