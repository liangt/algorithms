/*
#include <iostream>
using namespace std;

// 返回不超过n的最大的2的幂
// O(log(n))
int power(int n, int &ct){
    int ans = 1;
    ct = -1;
    while(ans <= n){
        ans <<= 1;
        ct++;
    }
    ans >>= 1;
    return ans;
}

int min(int a, int b){
    return a <= b ? a : b;
}

// sparse table
int st[8][100];

void sparse_table(int *a, int n){
    int i, c = 1, m;
    for(i = 0; i < n; i++)
        st[0][i] = a[i];
    i = 1;
    do{
        m = n - c;
        for(int j = 0; j <= m; j++)
            st[i][j] = min(st[i-1][j], st[i-1][j+c]);
        c <<= 1;
        i++;
    }while(m > 0);
}

int look_up(int s, int e){
    int n, m;
    n = power(e-s+1, m);
    return min(st[m][s], st[m][e-n+1]);
}

int main(){
    int n, a[20];
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sparse_table(a, n);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < n; j++)
            cout<<st[i][j]<<" ";
        cout<<endl;
    }
    int s, e;
    while(cin>>s>>e)
        cout<<look_up(s, e)<<endl;
    return 0;
}
*/
