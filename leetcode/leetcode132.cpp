/*
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int minCut(string s) {
	int n = s.size();
    bool** part = new bool*[n];
    int* tmp = new int[n];
    for(int i=0; i<n; i++){
        part[i] = new bool[n];
        memset(part[i], false, sizeof(part[i]));
        tmp[i] = i;
    }
    part[0][0] = 1;
    for(int i=1; i<n; i++){
            part[i][i] = part[i][i-1] = 1;
    }
    int j;
    for(int l=1; l<n; l++)
        for(int i=0; i+l<n; i++){
            j = i + l;
            if(s[i] == s[j])
                part[i][j] = part[i+1][j-1];
        }
    for(int i=1; i<n; i++){
        if(part[0][i])
            tmp[i] = 0;
        else{
            for(int k=1; k<=i; k++)
                if(part[k][i]){
                    j = tmp[k-1] + 1;
                    if(j < tmp[i])
                        tmp[i] = j;
                }
        }
    }
    return tmp[n-1];
}

int minCut2(string s) {
	int n = s.size();
    vector<vector<int> > part(n);
    vector<int> tmp(n, 0);
    for(int i=0; i<n; i++)
        part[i] = tmp;
    part[0][0] = 1;
    for(int i=1; i<n; i++){
            part[i][i] = part[i][i-1] = 1;
            tmp [i] = i;
    }
    int j;
    for(int l=1; l<n; l++)
        for(int i=0; i+l<n; i++){
            j = i + l;
            if(s[i] == s[j])
                part[i][j] = part[i+1][j-1];
        }
    for(int i=1; i<n; i++){
        if(part[0][i])
            tmp[i] = 0;
        else{
            for(int k=1; k<=i; k++)
                if(part[k][i]){
                    j = tmp[k-1] + 1;
                    if(j < tmp[i])
                        tmp[i] = j;
                }
        }
    }
    return tmp[n-1];
}

// Time Limit Exceeded
bool isPalindrome(string st, int s, int e){
    while(s<=e)
        if(st[s++] != st[e--])
            return false;
    return true;
}

int minCut(string s) {
	int n = s.size();
    vector<vector<int> > part(n);
    vector<int> tmp(n, n-1);
    for(int i=0; i<n; i++)
        part[i] = tmp;
    int j, tp;
	for(int l=0; l<n; l++){
        for(int i=0; i+l<n; i++){
            j = i + l;
            if(isPalindrome(s, i, j))
                part[i][j] = 0;
            else{
                for(int k=i; k<j; k++){
                    tp = part[i][k] + part[k+1][j] + 1;
                    if(tp < part[i][j])
                        part[i][j] = tp;
                }
            }
        }
	}
	return part[0][n-1];
}

// Time Limit Exceeded
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
	string in;
	while(cin>>in)
		cout<<minCut(in)<<endl;
 return 0;
}
*/
