/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// O(n^3)
int max1(int *a, int n){
    int ans = a[0], tmp;
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++){
            tmp = 0;
            for(int t = i; t <= j; t++)
                tmp += a[t];
            if(tmp > ans)
                ans = tmp;
        }
    return ans;
}

// O(n^2)
int max2(int *a, int n){
    int ans = a[0], tmp;
    for(int i = 0; i < n; i++){
        tmp = 0;
        for(int j = i; j < n; j++){
            tmp += a[j];
            if(tmp > ans)
                ans = tmp;
        }
    }
    return ans;
}

// O(nlogn)
int max3(int *a, int s, int e){
    if(s == e)
        return a[s];
    int m = (s + e) >> 1;
    int mx1 = max3(a, s, m);
    int mx2 = max3(a, m+1, e);
    if(mx1 < mx2)
        mx1 = mx2;
    int ans = mx1, tmp;
    mx1 = a[m], tmp = 0;
    for(int i = m; i >= s; i--){
        tmp += a[i];
        if(tmp > mx1)
            mx1 = tmp;
    }
    mx2 = a[m+1], tmp = 0;
    for(int i = m + 1; i <= e; i++){
        tmp += a[i];
        if(tmp > mx2)
            mx2 = tmp;
    }
    mx1 += mx2;
    if(ans < mx1)
        ans = mx1;
    return ans;
}

// O(n)
int max4(int *a, int n){
    int ans = a[0], tmp = 0;
    for(int i = 0; i < n; i++){
        if(tmp <= 0)
            tmp = a[i];
        else
            tmp += a[i];
        if(tmp > ans)
            ans = tmp;
    }
    return ans;
}

int main(){
    srand(time(0));
    int n = 10, a[10];
    for(int i = 0; i < n; i++)
        a[i] = rand() % 100 - 50;
    cout<<max1(a, n)<<endl;
    cout<<max2(a, n)<<endl;
    cout<<max3(a, 0, n - 1)<<endl;
    cout<<max4(a, n)<<endl;
    return 0;
}
*/
