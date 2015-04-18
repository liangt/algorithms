/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0)
        return "";
    string ans = strs[0];
    for(int i=1; i<strs.size(); i++){
        if(ans.size()==0 || strs[i].size()==0)
        return "";
        int j = 0;
        while(ans[j] == strs[i][j])
            j++;
        ans  = ans.substr(0, j);
    }
    return ans;
}

int main(){
    vector<string> strs(4);
    for(int i=0; i<4; i++)
        cin>>strs[i];
    cout<<longestCommonPrefix(strs)<<endl;
    return 0;
}
*/
