/*
#include <iostream>
#include <string>
using namespace std;

int atoi(string str) {
	int n = str.size();
	int s=0;
	while(s<n && str[s]==' ')
		s++;
	if(s==n || (str[s]!='+' && str[s]!='-' && str[s]<'0' && str[s]>'9'))
		return 0;
	bool tag = false;
	if(str[s] == '-' || str[s] == '+'){
		if(str[s] == '-')
			tag = true;
		s++;
		while(s<n && (str[s]<'0' || str[s]>'9')){
			if(str[s]=='-' || str[s]=='+')
				return 0;
			s++;
		}
	}
	else if(str[s]<'0' || str[s]>'9')
		return 0;
	long long ans = 0;
	while(s<n){
		if(str[s]>='0' && str[s]<='9'){
			ans = ans * 10 + (str[s] - '0');
			if(tag){
				if(-ans < INT_MIN)
					return INT_MIN;
			}
			else{
				if(ans > INT_MAX)
					return INT_MAX;
			}
		}
		s++;
	}
	return tag ? -ans : ans;
}

int atoi(string str) {
	int n = str.size();
	int s=0;
	while(s<n && str[s]==' ')
		s++;
	if(s==n)
		return 0;
	bool tag = false;
	if(str[s] == '-'){
		tag = true;
		s++;
	}
	else if(str[s] == '+')
		s++;
	else if(str[s]<'0' || str[s]>'9')
		return 0;
	long long ans = 0;
	while(s<n){
		if(str[s]>='0' && str[s]<='9'){
			ans = ans * 10 + (str[s] - '0');
			if(tag){
				if(-ans < INT_MIN)
					return INT_MIN;
			}
			else{
				if(ans > INT_MAX)
					return INT_MAX;
			}
		}
		else
			break;
		s++;
	}
	return tag ? -ans : ans;
}

int main(){
	string s;
	while(getline(cin,s))
		cout<<atoi(s)<<endl;
	return 0;
}
*/