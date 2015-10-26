/*
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>
using namespace std;

const int N = 100002;
typedef pair<int, int> node;
vector<node> tree[N];
map<node, node> mp;

int ans, n;

int dfs(int s, int p){
    int ct = 1, sct, tp;
    node tmp;
    for(int i = 0; i < tree[s].size(); i++){
        tmp = tree[s][i];
        if(tmp.first == p)
            continue;
        sct = dfs(tmp.first, s);
        ct += sct;
        tp = sct * (n - sct);
        ans += tp * tmp.second;
        mp[node(s, tmp.first)] = node(tp, tmp.second);
    }
    return ct;
}

int main(){
    int m, f, t, w;
    string op;
    cin>>n>>m;
    for(int i = 1; i < n; i++){
        cin>>f>>t>>w;
        tree[f].push_back(node(t, w));
        tree[t].push_back(node(f, w));
    }
    ans = 0;
    dfs(1, -1);
    node tmp;
    while(m--){
        cin>>op;
        if(op == "QUERY")
            cout<<ans<<endl;
        else{
            cin>>f>>t>>w;
            if(mp.find(node(f, t)) != mp.end()){
                tmp = mp[node(f, t)];
                ans += tmp.first * (w - tmp.second);
                mp[node(f, t)] = node(tmp.first, w);
            }
            else{
                tmp = mp[node(t, f)];
                ans += tmp.first * (w - tmp.second);
                mp[node(t, f)] = node(tmp.first, w);
            }
        }
    }
    return 0;
}
*/
