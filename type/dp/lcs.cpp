/*
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int N = 20;
int ans[N][N];
string s1, s2;

int dfs(int i, int j){
    if(i < 0 || j < 0)
        return 0;
    if(ans[i][j] > -1)
        return ans[i][j];
    int res;
    if(s1[i] == s2[j])
        res = dfs(i-1, j-1) + 1;
    else{
        int tp = dfs(i-1, j);
        res = dfs(i, j-1);
        if(res < tp)
            res = tp;
    }
    ans[i][j] = res;
    return res;
}

int ans2[N*N], n;
int dfs2(int i, int j){
    if(i<0 || j<0)
        return 0;
    int res = i * n + j;
    if(ans2[res] > -1)
        return ans2[res];
    if(s1[i] == s2[j])
        res = dfs2(i-1, j-1) + 1;
    else{
        int tp = dfs2(i, j-1);
        res = dfs2(i-1, j);
        if(res < tp)
            res = tp;
    }
    ans2[i*n+j] = res;
    return res;
}

int main(){
    memset(ans, -1, sizeof(ans));
    s1 = "ansged";
    s2 = "jjrnsgrn";
    cout<<dfs(s1.size()-1, s2.size()-1)<<endl;
    n = s2.size();
    cout<<dfs2(s1.size()-1, s2.size()-1)<<endl;
	return 0;
}
*/
