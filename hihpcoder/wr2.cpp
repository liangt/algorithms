/*
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

typedef pair<int, int> pp;
map<char, pp> mp1;

string findNearest(string st){
    int n;
    n = st.size();
    if(n == 1)
        return st;
    string ans = "";
    ans += st[0];
    int i;
    for(i=1; i<n; i++){
        ans += st[i];
        if(mp1[st[i-1]].first>mp1[st[i]].first || mp1[st[i-1]].second>mp1[st[i]].second)
            break;
    }
    if(i < n){
        for(int j=ans.size()-1; j>=0; j--){
            if(ans[j] > '0'){
                ans[j] -= 1;
                break;
            }
            else
                ans[j] = '9';
        }
        if(ans[0] == '0')
            ans = ans.substr(1, ans.size()-1);
        ans = findNearest(ans);
        for(int j=i+1; j<n; j++)
            ans += '9';
    }
    return ans;
}

int main(){
    // 枚举1-999内所有可能的组合
    map<int, pp> mp;
    mp[0] = pp(3, 1);
    mp[1] = pp(0, 0), mp[2] = pp(0, 1), mp[3] = pp(0, 2);
    mp[4] = pp(1, 0), mp[5] = pp(1, 1), mp[6] = pp(1, 2);
    mp[7] = pp(2, 0), mp[8] = pp(2, 1), mp[9] = pp(2, 2);
    vector<int> ans(10);
    for(int i=0; i<10; i++)
        ans[i] = i;
    for(int i=1; i<10; i++)
        for(int j=0; j<10; j++)
            if(mp[i].first <= mp[j].first && mp[i].second <= mp[j].second)
                ans.push_back(i*10 + j);
    for(int i=1; i<10; i++)
        for(int j=0; j<10; j++)
            if(mp[i].first <= mp[j].first && mp[i].second <= mp[j].second)
                for(int k=0; k<10; k++)
                    if(mp[j].first <= mp[k].first && mp[j].second <= mp[k].second)
                        ans.push_back(i*100 + j*10 + k);

    mp1['0'] = pp(3, 1);
    mp1['1'] = pp(0, 0), mp1['2'] = pp(0, 1), mp1['3'] = pp(0, 2);
    mp1['4'] = pp(1, 0), mp1['5'] = pp(1, 1), mp1['6'] = pp(1, 2);
    mp1['7'] = pp(2, 0), mp1['8'] = pp(2, 1), mp1['9'] = pp(2, 2);

    int t, k;
    vector<int>::iterator it;
    cin>>t;
    string in;
    while(t--){
        cin>>k;
        it = lower_bound(ans.begin(), ans.end(), k);
        if(*it == k)
            cout<<k<<endl;
        else
                cout<<*(it-1)<<endl;
        cin>>in;
        cout<<findNearest(in)<<endl;
    }
	return 0;
}
*/
