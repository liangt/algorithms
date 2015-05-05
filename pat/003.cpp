/*
#include <iostream>
using namespace std;

int a[100];

int main(){
    int n, m, i, j, tmp;
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>a[i];
    m = n - m % n;
    if(m){
        i=0, j=m-1;
        while(i<j){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++, j--;
        }
        i=m, j=n-1;
        while(i<j){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++, j--;
        }
        i=0, j=n-1;
        while(i<j){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++, j--;
        }
    }
    for(int i=0; i<n-1; i++)
        cout<<a[i]<<" ";
    cout<<a[n-1]<<endl;
	return 0;
}
*/
