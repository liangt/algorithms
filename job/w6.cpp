/*
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;

struct node{
    string c;
    int v;
    node(){}
    node(string c, int v):c(c), v(v){}
    bool operator<(const node &other) const{
        return v > other.v;
    }
};

int main(){
    int n, a, b, ans;
    string in;
    string dict = "0123456789abcde";
    node tmp1, tmp2;
    cin>>n;
    while(n--){
        unordered_map<int, int> ct;
        unordered_map<int, int> ht;
        priority_queue<node> que;
        cin>>a>>b;
        cin>>in;
        for(int i = 0; i < in.size(); i++)
            ct[in[i]]++;
        for(int i = 0; i < dict.size(); i++)
            if(ct[dict[i]]){
                que.push(node(""+dict[i], ct[dict[i]]));
                cout<<ct[dict[i]]<<endl;
            }
        while(!que.empty()){
            tmp1 = que.top();
            que.pop();
            if(que.empty())
                break;
            tmp2 = que.top();
            que.pop();
            tmp1.c += tmp2.c;
            tmp1.v += tmp2.v;
            for(int i = 0; i < tmp1.c.size(); i++)
                ht[tmp1.c[i]]++;
            que.push(tmp1);
        }
        ans = 0;
        for(int i = 0; i < dict.size(); i++){
                ans += ct[dict[i]] * ht[dict[i]];
                cout<<ht[dict[i]]<<endl;
        }
        cout<<ans<<endl;
    }
}
*/
