/*
#include <iostream>
using namespace std;

int a[5], ans[5], n;
bool visit[5];

void dfs(int c){
    if(c == n){
        for(int i = 0; i < n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i = 0; i < n; i++)
        if(visit[i] == false){
            visit[i] = true;
            ans[c] = a[i];
            dfs(c+1);
            visit[i] = false;
        }
}

void dfs(int i, int j){
    if(i == n){
        for(int t = 0; t < j; t++)
            cout<<ans[t]<<" ";
        cout<<endl;
        return;
    }
    dfs(i+1, j);
    ans[j] = a[i];
    dfs(i+1, j+1);
}

int main(){
    n = 5;
    for(int i = 0; i < n; i++)
        a[i] = i + 1;
    dfs(0, 0);
    return 0;
}
*/
