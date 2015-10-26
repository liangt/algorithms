/*
#include <iostream>
#include <vector>
using namespace std;

int a[] = {1, 1, 1, 1, 1, 1, 1, 1}, b[4], n = 8;

void dfs(int s, vector<int>& tmp){
    if(s == n){
        for(int i = 0; i < tmp.size(); i++)
            cout<<tmp[i]<<" ";
        cout<<endl;
        return;
    }
    int m = tmp.size() - 1;
    if(m < 0 || b[a[s]] == 0)
        dfs(s+1, tmp);
    tmp.push_back(a[s]);
    if(b[a[s]])
        dfs(s+1, tmp);
    else{
        b[a[s]] = 1;
        dfs(s+1, tmp);
        b[a[s]] = 0;
    }
    tmp.pop_back();
}

int main(){
    vector<int> tmp;
    dfs(0, tmp);
    return 0;
}
*/
