/*
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

int main(){
    string in;
    getline(cin, in);
    stringstream sin(in);
    vector<int> a;
    unordered_map<int, int> mp;
    int tmp, n, ans = 0, s = 0, e = 0;
    while(sin>>tmp)
        a.push_back(tmp);
    n = a.size();
    vector<int> sm(n, 0);
    sm[0] = a[0];
    mp[sm[0]] = 1;
    for(int i = 1; i < n; i++){
        sm[i] = sm[i-1] + a[i];
        if(sm[i] == 0){
            s = 0;
            e = i;
            ans = i + 1;
            continue;
        }
        if(mp[sm[i]]){
            tmp = i - mp[sm[i]] + 1;
            if(tmp > ans){
                ans = tmp;
                s = mp[sm[i]];
                e = i;
            }
        }
        else
            mp[sm[i]] = i + 1;
    }
    for(int i = s; i < e; i++)
        cout<<a[i]<<" ";
    cout<<a[e]<<endl;
    return 0;
}
*/
