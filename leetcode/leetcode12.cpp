/*
#include <iostream>
#include <map>
using namespace std;

int romanToInt(string s) {
        map<char, int> mp;
        mp['I'] = 1; mp['V'] = 5; mp['X'] = 10;
        mp['L'] = 50;   mp['C'] = 100;
        mp['D'] = 500; mp['M'] = 1000;
        int ans=0, i=0;
        while(i<s.size()-1){
            if(mp[s[i]] < mp[s[i+1]]){
                ans += mp[s[i+1]]-mp[s[i]];
                i++;
            }
            else
                ans += mp[s[i]];
            i++;
        }
        if(i < s.size())
            ans += mp[s[i]];
        return ans;
}

int main(){
    string in;
    while(cin>>in)
        cout<<romanToInt(in)<<endl;
    return 0;
}
*/
