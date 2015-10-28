/*
#include <iostream>
using namespace std;

const int N = 10;
int a[N][N];

int main(){
    int n, m, t;
    while(cin>>n){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                a[i][j] = i * n + j + 1;
        m = (n + 1) / 2;
        for(int i = 0; i < m; i++){
            t = n - i - 1;
            for(int j = i; j <= t; j++)
                cout<<a[i][j]<<" ";
            for(int j = i + 1; j <= t; j++)
                cout<<a[j][t]<<" ";
            for(int j = t - 1; j >= i; j--)
                cout<<a[t][j]<<" ";
            for(int j = t - 1; j > i; j--)
                cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
