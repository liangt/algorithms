/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string mp[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void help(vector<string>& ans, string digits, int n, string tmp){
	if(n==digits.size()){
		ans.push_back(tmp);
		return;
	}
	string tp = mp[digits[n]-'0'];
	for(int i=0; i<tp.size(); i++)
		help(ans, digits, n+1, tmp+tp[i]);
}

vector<string> letterCombinations(string digits) {
	vector<string> ans;
	if(digits!="")
		help(ans, digits, 0, "");
	return ans;
}

int main(){
	string in;
	vector<string> ans;
	while(cin>>in){
		ans = letterCombinations(in);
		for(int i=0; i<ans.size(); i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}
*/