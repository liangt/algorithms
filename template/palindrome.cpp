/*
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int N = 50;
// 回文子串的标志数组
//map[i][j]=1当子串st[i]-st[j]是回文; 否则, map[i][j]=0
bool map[N][N];

// 求字符串中的所有回文子串
// 直接枚举开始和结尾位置，然后判断是不是回文
// 时间复杂度: O(n^3)
bool isPalindrome(string st, int s, int e){
    while(s<=e)
        if(st[s++] != st[e--])
            return false;
    return true;
}

void palindromeMap1(string st){
    int n= st.size();
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
            map[i][j] = isPalindrome(st, i, j);
}

// dp
// (1) i<j,
//     (1) st[i]==st[j], map[i][j] = map[i+1][j-1]
//     (2) st[i]!=st[j], map[i][j] = 0;
// (2) i==j, map[i][j] = 1
//     时间复杂度: O(n^2)
void palindromeMap2(string st){
    int n= st.size();
    map[0][0] = 1;
    for(int i=1; i<n; i++)
            map[i][i] = map[i][i-1] = 1;

    int j;
    for(int l=1; l<n; l++)
        for(int i=0; i+l<n; i++){
            j = i + l;
            if(st[i] == st[j])
                map[i][j] = map[i+1][j-1];
            else
                map[i][j] = 0;
        }
}

// 最少的划分数使得每个子串都是回文
//dp[i]表示从0-i的子串的最少划分数
//dp[i] = min{dp[k-1] + 1} 当k-i的子串是回文
int dp[N];
int minCut(string s) {
	int n = s.size();
    map[0][0] = 1;
    for(int i=1; i<n; i++){
            map[i][i] = map[i][i-1] = 1;
            dp[i] = i;
    }
    int j;
    // 求回文标志数组
    for(int l=1; l<n; l++)
        for(int i=0; i+l<n; i++){
            j = i + l;
            if(s[i] == s[j])
                map[i][j] = map[i+1][j-1];
        }

    for(int i=1; i<n; i++){
        if(map[0][i])
            dp[i] = 0;
        else{
            for(int k=1; k<=i; k++)
                if(map[k][i]){
                    j = dp[k-1] + 1;
                    if(j < dp[i])
                        dp[i] = j;
                }
        }
    }
    return dp[n-1];
}

void print(int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++)
            cout<<map[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    string in;
    while(cin>>in){
        memset(map, 0, sizeof(map));
        cout<<minCut(in)<<endl;

        memset(map, 0, sizeof(map));
        palindromeMap1(in);
        print (in.size());

         memset(map, 0, sizeof(map));
        palindromeMap2(in);
        print (in.size());
    }
    return 0;
}
*/
