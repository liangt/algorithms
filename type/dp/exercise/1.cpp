/*
#include <iostream>
using namespace std;

int ans[12][12], g[12][12];

int main(){
    int n, m, num;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>g[i][j];
    for(int i=1; i<n; i++)
        g[i][0] += g[i-1][0];
    for(int i=1; i<m; i++)
        g[0][i] += g[0][i-1];
    int j;
    num = n + m - 1;
    for(int l=2; l<num; l++)
        for(int i=1; i<n; i++){
            j = l - i;
            if(j>=m)
                continue;
            if(j<1)
                break;
            if(g[i][j-1] < g[i-1][j])
                g[i][j] += g[i][j-1];
            else
                g[i][j] += g[i-1][j];
        }
    cout<<g[n-1][m-1]<<endl;
	return 0;
}
*/
