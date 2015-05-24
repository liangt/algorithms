/*
#include <iostream>
using namespace std;

int V, n;
int w[10], v[10];

int dfs(int i, int vl){
    if(i == n)
        return 0;
    if(w[i] > vl)
            return dfs(i+1, vl);
    int v1 = dfs(i+1, vl);
    int v2 = v[i] + dfs(i+1, vl-w[i]);
    if(v1 > v2)
        return v1;
    else
        return v2;
}

int main(){
    cin>>n>>V;
    for(int i=0; i<n; i++)
        cin>>w[i]>>v[i];
    cout<<dfs(0, V)<<endl;

    int ans = 0, t, wt, vt;
    for(int i=1; i<(2<<n); i++){
        wt = 0;
        vt = 0;
        for(int j=0; j<n; j++){
            t = (i>>j) & 1;
            if(t){
                t = n - j -1;
                wt += w[t];
                vt += v[t];
            }
        }
        if(wt <= V && ans < vt)
            ans = vt;
    }
    cout<<ans<<endl;
	return 0;
}
*/
