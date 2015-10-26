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

int ct[N], dis[N], n;

void dfs(int s, int p){
    ct[s] = 1;
    node tmp;
    int tp;
    for(int i = 0; i < tree[s].size(); i++){
        tmp = tree[s][i];
        if(tmp.first == p)
            continue;
        dfs(tmp.first, s);
        ct[s] += ct[tmp.first];
        tp = ct[tmp.first] * (n - ct[tmp.first]);
        dis[s] = dis[tmp.first] + tp * tmp.second;
        mp[node(s, tmp.first)] = node(tp, tmp.second);
    }
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
    dfs(1, -1);
    int ans = dis[1];
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
