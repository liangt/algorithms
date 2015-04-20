/*
#include <iostream>
using namespace std;

int removeDuplicates(int A[], int n) {
	if(n == 0)
		return 0;
	int i = 0;
	for(int j=1; j<n; j++){
		if(A[j] != A[i]){
			A[++i] = A[j];
		}
	}
	return i+1;
}

int main(){
	int a[] = {1, 1, 2}, n;
	n = removeDuplicates(a, 3);
	cout<<n<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
*/