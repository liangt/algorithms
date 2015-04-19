#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(string st, int s, int e){
    while(s<=e)
        if(st[s++] != st[e--])
            return false;
    return true;
}

void help(vector<vector<int> >& part, string s, int i, int tmp, int& ans){
	if(tmp >= ans)
		return;
	if(i == s.size()){
		tmp -= 1;
		if(tmp < ans)
			ans = tmp;
		return;
	}
    for(int j=part[i].size()-1; j>=0; j--){
		if(part[i][j] == s.size()-1){
			ans = tmp;
			break;
		}
		help(part, s, part[i][j]+1, tmp+1, ans);
	}
}

int minCut(string s) {
	int n = s.size();
    vector<vector<int> > part(n);
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
            if(isPalindrome(s, i, j))
                part[i].push_back(j);
	int ans = n - 1;
	help(part, s, 0, 0, ans);
	return ans;
}

int main(){
    string in = "apjesgpsxoeiokmqmfgvjslcjukbqxpsobyhjpbgdfruqdkeiszrlmtwgfxyfostpqczidfljwfbbrflkgdvtytbgqalguewnhvvmcgxboycffopmtmhtfizxkmeftcucxpobxmelmjtuzigsxnncxpaibgpuijwhankxbplpyejxmrrjgeoevqozwdtgospohznkoyzocjlracchjqnggbfeebmuvbicbvmpuleywrpzwsihivnrwtxcukwplgtobhgxukwrdlszfaiqxwjvrgxnsveedxseeyeykarqnjrtlaliyudpacctzizcftjlunlgnfwcqqxcqikocqffsjyurzwysfjmswvhbrmshjuzsgpwyubtfbnwajuvrfhlccvfwhxfqthkcwhatktymgxostjlztwdxritygbrbibdgkezvzajizxasjnrcjwzdfvdnwwqeyumkamhzoqhnqjfzwzbixclcxqrtniznemxeahfozp";
	cout<<in.size()<<endl;
	cout<<isPalindrome(in, 0, in.size()-1)<<endl;
	while(cin>>in)
		cout<<minCut(in)<<endl;
    return 0;
}