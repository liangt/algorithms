/*
#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

const int N = 1000;
struct node{
    int id;
    int val;
    bool operator<(const node other) const {
        return val > other.val;
    }
};
vector<int> G[N];
int n, in_degree[N], a[N], b[N];

int main(){
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];

    int j;
    for(int i=0; i<n; i++){
        if(a[i] == -1)
            continue;
        j = a[i] % n;
        while(j != i){
            G[j].push_back(i);
            in_degree[i]++;
            j = (j + 1) % n;
        }
    }
    priority_queue<node> pq;
    node tmp;
    for(int i=0; i<n; i++)
        if(in_degree[i] == 0 && a[i] != -1){
            tmp.id = i;
            tmp.val = a[i];
            pq.push(tmp);
        }

    j = 0;
    node tp;
    while(!pq.empty()){
        tp = pq.top();
        pq.pop();
        b[j++] = tp.val;
        for(int i=0; i<G[tp.id].size(); i++){
            in_degree[G[tp.id][i]]--;
            if(in_degree[G[tp.id][i]] == 0){
                tmp.id = G[tp.id][i];
                tmp.val = a[tmp.id];
                pq.push(tmp);
            }
        }
    }
    for(int i=0; i<j-1; i++)
        cout<<b[i]<<" ";
    cout<<b[j-1]<<endl;
    return 0;
}
*/
