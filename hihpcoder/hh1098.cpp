/*
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 1;
const int M = 1e6;

struct edge{
    int from, to, weight;
    bool operator<(const edge& other) const{
        return weight < other.weight;
    }
};
edge edges[M];

int pa[N], rk[N];

int fd(int a){
    if(pa[a] == 0)
        return a;
    else
        return pa[a] = fd(pa[a]);
}

bool un(int a, int b){
    int ra = fd(a);
    int rb = fd(b);
    if(ra == rb)
        return false;
    if(rk[ra] < rk[rb])
        pa[ra] = rb;
    else if(rk[ra] > rk[rb])
        pa[rb] = ra;
    else{
        pa[ra] = rb;
        rk[rb]++;
    }
    return true;
}

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
        cin>>edges[i].from>>edges[i].to>>edges[i].weight;
    sort(edges, edges+m);
    int ans = 0;
    for(int i=0; i<m; i++){
        if(un(edges[i].from, edges[i].to))
            ans += edges[i].weight;
    }
    cout<<ans<<endl;
}
*/
