/*
#include <iostream>
using namespace std;

int removeElement(int A[], int n, int elem) {
	int i=0;
	for(int j=0; j<n; j++)
		if(A[j] != elem)
			A[i++] = A[j];
	return i;
}

int main(){
	int a[] = {1, 1, 2, 2, 1}, n;
	n = removeElement(a, 5, 1);
	cout<<n<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
*/