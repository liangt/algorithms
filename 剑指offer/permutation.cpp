/*
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 10;
int a[N], b[N], n;
bool visit[N];

void dfs(int c){
    if(c == n){
        for(int i = 0; i < n; i++)
            cout<<b[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i = 0; i < n; i++){
        if(!visit[i]){
            b[c] = a[i];
            visit[i] = true;
            dfs(c+1);
            visit[i] = false;
        }
    }
}

void dfs2(int c){
    if(c == n){
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    dfs2(c+1);
    for(int i = c+1; i < n; i++){
        swap(a[c], a[i]);
        dfs2(c+1);
        swap(a[c], a[i]);
    }
}

void dfs3(int c){
    if(c == n){
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    dfs3(c+1);
    for(int i = c+1; i < n; i++){
        if(a[c] != a[i] && a[i] != a[i-1]){
            swap(a[c], a[i]);
            dfs3(c+1);
            swap(a[c], a[i]);
        }
    }
}

int main(){
    n = 5;
    //a[0] = a[1] = 1, a[2] = a[3] = 2;
    for(int i = 0; i < n; i++){
        a[i] = (i + 1) % 3;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a, a+n);
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"*****"<<endl;
    dfs3(0);
    return 0;
}
*/
