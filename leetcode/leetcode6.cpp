/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string convert(string s, int nRows) {
	if(nRows == 1)
		return s;
	bool tag = true;
	int row = 0;
	vector<string> tmp(nRows);
	for(int i=0; i<s.size(); i++){
		tmp[row] += s[i];
		if(row == 0)
			tag = true;
		if(row == nRows-1)
			tag = false;
		if(tag)
			row++;
		else
			row--;
	}
	string ans = "";
	for(int i=0; i<nRows; i++)
		ans += tmp[i];
	return ans;
}

int main(){
	string s = "PAYPALISHIRING", ans = "PAHNAPLSIIGYIR";
	if(convert("PAYPALISHIRING", 3) == ans)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
*/