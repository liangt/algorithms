/*
// f[i][j] 表示从下表i开始到j所需添加的最少括号数
// f[i][j] = f[i+1][j-1]   a[i]与a[j]匹配
// f[i][j] = min{f[i][k]+1, f[k+1][j]+1}
#include <iostream>
#include <string>
using namespace std;

const int N = 101;
int dis[N][N];

int main(){
    int k,n;
    cin>>k;
    string str;
    while(k--){
        cin>>str;
        n = str.size();
        for(int i=0; i<n; i++)
            dis[i][i] = 1;
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                dis[i][j] = 1000;
        for(int l=1; l<n; l++)
            for(int i=0; i<n-l; i++){
                int j = i + l;
                if(str[i]=='(' && str[j]==')' || str[i]=='[' && str[j]==']')
                            dis[i][j] = dis[i+1][j-1];
                for(int k=i; k<j; k++)
                            if(dis[i][j] > dis[i][k] + dis[k+1][j])
                                dis[i][j] = dis[i][k] + dis[k+1][j];
            }
        cout<<dis[0][n-1]<<endl;
    }
    return 0;
}
*/
