/*
#include <iostream>
using namespace std;

int binarySearch(int* a, int n ,int k){
    int l=0, r=n-1, m;
    while(l <= r){
        m = (l + r) / 2;
        if(a[m] < k)
            l = m + 1;
        else if(a[m] > k)
            r = m -1;
        else
            return m;
    }
    return -1;
}

int equalOrLarger(int* a, int n, int k){
    int l=-1,r=n,m;
    while(l+1 < r){
        m = (l + r) / 2;
        if(a[m] >= k)
            r = m;  // r为大于等于k的最小元素的位置
        else
            l = m; // l为小于k的最大元素的位置
        cout<<l<<" "<<r<<endl;
    }
    return r;
}

int larger(int* a, int n, int k){
    int l=-1,r=n,m;
    while(l+1 < r){
        m = (l + r) / 2;
        if(a[m] > k)
            r = m;  // r为大于k的最小元素的位置
        else
            l = m; // l为小于等于k的最大元素的位置
        cout<<l<<" "<<r<<endl;
    }
    return r;
}

int main(){
    int a[8];
    int n, k;
    while(cin>>n){
        for(int i=0; i<n; i++)
            cin>>a[i];
        while(cin>>k){
            if(k == -1)
                break;
            cout<<larger(a, n, k)<<endl;
        }
    }
	return 0;
}
*/
