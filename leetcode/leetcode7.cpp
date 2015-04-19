/*
#include <iostream>
using namespace std;

int reverse(int x){
	int a[10];
	for(int i=0; i<10; i++)
		a[i] = 0;
	bool tag = false;
	if(x < 0){
		x = -x;
		tag = true;
	}
	int n = 0;
	while(x){
		a[n++] = x % 10;
		x /= 10;
	}
	long long ans = 0;
	for(int i=0; i<n; i++)
		ans = ans * 10 + a[i];
	if(tag)
		ans = -ans;
	if(ans < -(1<<31) || ans > ((1<<31)-1))
		ans = 0;
	return ans;
}

int main(){
	int x;
	while(cin>>x)
		cout<<reverse(x)<<endl;
	return 0;
}
*/