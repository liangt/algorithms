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
    for(int j=0; j<part[i].size(); j++){
        ans.push_back(s.substr(i, part[i][j]-i+1));

    }
}

vector<vector<string> > partition(string s) {
    int n = s.size();
    vector<vector<int> > part(n);
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
            if(isPalindrome(s, i, j))
                part[i].push_back(j);
 }

int main(){
    string in;
    cin>>in;
    partition(in);
    return 0;
}
