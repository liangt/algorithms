/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 枚举中心
// 最坏情况下，时间复杂度是O(n^2)
// 最坏情形出现在字符串包含大量连续相同的字符时，如aaa....aaaa, ba.....ac等
string longestpalindrome(string str){
    int n = str.size(), s=0, l=1;
    for(int i=0; i<n; i++){
        // 奇数
        for(int j=1; i-j>=0 && i+j<n; j++){
            if(str[i-j] != str[i+j])
                break;
            if(2*j + 1 > l){
                l = 2 * j + 1;
                s = i - j;
            }
        }

        // 偶数
        for(int j=1; i-j>=0 && i+j-1<n; j++){
            if(str[i-j] != str[i+j-1])
                break;
            if(2*j > l){
                l = 2 * j;
                s = i - j;
            }
        }
    }
    return str.substr(s, l);
}

// 剪支
// 当某个中心位置从左到右枚举时，当某个位置处的回文串到达了字符串的末尾，那么该位置之后的位置便没必要继续枚举了，因为后面的回文子串不会比它更长
// 当某个中心位置从右到左枚举时，当某个位置处的回文串到达了字符串的开头，那么该位置之前的位置便没必要继续枚举了，因为前面的回文子串不会比它更长
// 这样我们可以从中间位置开始枚举，这样可以避免上面一些最坏情况的出现
// 但这并没有避免最坏情况下O(n^2)的复杂度，对于baaaa....aaaac型的字符串的时间复杂度依然是O(n^2)
string longestpalindrome2(string str){
    int n = str.size(), s=0, l=1, j;
    int m = n >> 1;
    // 前半部分
    for(int i=m-1; i>0; i--){
        // 奇数
        for(j=1; i-j>=0; j++){
            if(str[i-j] != str[i+j])
                break;
            if(2*j + 1 >= l){
                l = 2 * j + 1;
                s = i - j;
            }
        }
        if(i - j< 0)
            break;

        // 偶数
        for(j=1; i-j>=0; j++){
            if(str[i-j] != str[i+j-1])
                break;
            if(2*j >=l){
                l = 2 * j;
                s = i - j;
            }
        }
        if(i - j< 0)
            break;
    }

    // 后半部分
    for(int i=m; i<n; i++){
         // 偶数
        for(j=1; i+j-1<n; j++){
            if(str[i-j] != str[i+j-1])
                break;
            if(2*j > l){
                l = 2 * j;
                s = i - j;
            }
        }
        if(i + j - 1 == n)
            break;

        // 奇数
        for(j=1; i+j<n; j++){
            if(str[i-j] != str[i+j])
                break;
            if(2*j + 1 > l){
                l = 2 * j + 1;
                s = i - j;
            }
        }
        if(i + j== n)
            break;
    }

    return str.substr(s, l);
}

// Manacher算法
// 时间复杂度O(n)
// 通过添加特殊字符，使奇数和偶数的情形统一为奇数情形处理，如: abad  ---> #a#b#a#d#
// 定义一个辅助数组a,a[i]表示以第i个字符为中心的中场回文子串的长度，通过定义可知a[i]为奇数
// 对j<i,假定a[j]=2*k+1,若j+k>i,则i关于j的对称位置t=2*j-i,则
//a[i]>=min{a[t], 2*(j+k-i)+1}=min{a[t], a[j]+2*j-2*i}
//a[i]>=max{3, min{a[t], a[j]+2*j-2*i}}，即对于i位置，回文川的长度至少为max{3, min{a[t], a[j]+2*j-2*i}}
// 实现中a[i]表示长度的一半，即a[i]>=max{1, min{a[t], a[j]+j-i}}
const int N = 2000002;
int a[N];
int longestpalindrome3(string str){
    int n = str.size();
    string tmp(2*n+1, '#');
    for(int i=0; i<n; i++){
        tmp[2*i+1] = str[i];
    }
    a[1] = 1;
    n = 2 * n + 1;
    int l = 3, c = 1, t, j, k;
    for(int i=2; i<n; i++){
        c = 1;
        if(j + a[j] > i){
            t = 2 * j - i;
            c = max(c, min(a[t], a[j]+j-i));
        }
        for(k=c; i-k>=0 && i+k<n; k++){
            if(tmp[i-k] != tmp[i+k])
                break;
            if(2*k+1 > l)
                l = 2 * k + 1;
        }
        a[i] = k - 1;
        if(i + a[i] > j + a[j])
            j = i;
    }
    return l/2;
}

int main(){
    string str;
    while(cin>>str)
        cout<<longestpalindrome(str)<<'\t'<<longestpalindrome2(str)<<'\t'<<longestpalindrome3(str)<<endl;
	return 0;
}
*/
