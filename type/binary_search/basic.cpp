/*
#include <iostream>
using namespace std;

bool binarySearch1(int* a, int n, int k){
    int l=0, r=n-1, m;
    while(l <=r){
        m = (l + r) / 2;
        if(a[m] < k)
            l = m + 1;
        else if(a[m] > k)
            r = m - 1;
        else
            return true;
    }
    return false;
}

int binarySearch2(int* a, int n, int k){
    int l=0, r=n-1, m;
    while(l <= r){
        m = (l + r) / 2;
        if(a[m] < k)
            l = m + 1;
        else if(a[m] > k)
            r = m - 1;
        else
            return m;
    }
    return -1;
}

// 给binarysearch传一个比较函数
int binarySearch3(int* a, int n, int k, int (*cmp)(int a, int b)){
    int  l=0, r=n-1, m;
    while(l <= r){
        m = (l + r) / 2;
        if(cmp(a[m], k) < 0)
            l = m + 1;
        else if(cmp(a[m], k) > 0)
            r = m - 1;
        else
            return m;
    }
    return -1;
}

int cmp(int a, int b){
    return a - b;
}

// lower_bound
// 返回第一个>=k的位置
int lowerBound(int* a, int n, int k){
    int l=0, r=n, m;
    while(l + 1 < r){
        m = (l + r) / 2;
        if(a[m] >= k)
            r = m;
        else
            l = m;
    }
    return r;
}

int main(){
    int a[10], n, k;
    while(cin>>n){
        for(int i=0; i<n; i++)
            cin>>a[i];
        cin>>k;
        if(binarySearch1(a, n, k))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        cout<<binarySearch2(a, n, k)<<" "<<binarySearch3(a, n, k, cmp)<<endl;
        cout<<lowerBound(a, n, k)<<endl;
    }
	return 0;
}
*/
