/*
#include <iostream>
#include <string>
using namespace std;

// 枚举中心，最坏情况时间复杂度为O(n^2),超时
int longestpalindrome(string str){
    int n = str.size(), l=1;
    for(int i=0; i<n; i++){
        // 奇数
        for(int j=1; i-j>=0 && i+j<n; j++){
            if(str[i-j] != str[i+j])
                break;
            if(2*j + 1 > l)
                l = 2 * j + 1;
        }

        // 偶数
        for(int j=1; i-j>=0 && i+j-1<n; j++){
            if(str[i-j] != str[i+j-1])
                break;
            if(2*j > l)
                l = 2 * j;
        }
    }
    return l;
}

//Manacher算法，时间复杂度O(n)
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
    int n;
    cin>>n;
    string str;
    while(n--){
        cin>>str;
        cout<<longestpalindrome3(str)<<endl;
    }
	return 0;
}
*/
