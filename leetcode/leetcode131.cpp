/*
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

void help(vector<vector<int> >& part, string s, int i, vector<string>& tmp, vector<vector<string> >& ans){
	if(i == s.size()){
		ans.push_back(tmp);
		return;
	}
    for(int j=0; j<part[i].size(); j++){
        tmp.push_back(s.substr(i, part[i][j]-i+1));
		help(part, s, part[i][j]+1, tmp, ans);
		tmp.pop_back();
    }
}

vector<vector<string> > partition(string s) {
    int n = s.size();
    vector<vector<int> > part(n);
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
            if(isPalindrome(s, i, j))
                part[i].push_back(j);
	vector<vector<string> > ans;
	vector<string> tmp;
	help(part, s, 0, tmp, ans);
	return ans;
 }

int main(){
    string in;
    cin>>in;
    vector<vector<string> > ans = partition(in);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
    return 0;
}
*/