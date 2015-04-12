/*
// f[i][j] 表示从下表i开始到j所需添加的最少字符数
// f[i][j] = f[i+1][j-1]   a[i] == a[j]
// f[i][j] = min{f[i+1][j]+1, f[i][j-1]+1}   a[i] != a[j]
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int N = 1002;
int d[N][N];

int main(){
    int k, n;
    string a;
    cin>>k;
    while(k--){
        cin>>a;
        n = a.size();
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                d[i][j] = 2000;
        for(int j=1; j<n; j++)
            for(int i=0; i<n-j; i++){
                int t = i + j;
                if(a[i] == a[t])
                    d[i][t] = d[i+1][t-1];
                else{
                    d[i][t] = min(d[i][t], d[i+1][t]+1);
                    d[i][t] = min(d[i][t], d[i][t-1]+1);
                }
            }
        cout<<d[0][n-1]<<endl;
    }
    return 0;
}
*/
