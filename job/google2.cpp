/*
#include <iostream>
using namespace std;

int find_min(int *a, int n){
    int s = 0, e = n - 1, m;
    while(s < e){
        m = (s + e) >> 1;
        if(a[s] < a[m]){
            // [s, m]是递增的部分,则最小值可能是a[s]或位于[m,e]
            if(a[s] < a[e])
                return a[s];
            s = m ;
        }
        else{
            // [m,e]是递增的部分,则最小值可能是a[e]或位于[s,m]
            if(a[e] < a[m])
                return a[e];
            e = m ;
        }
    }
    return a[s];
}

int find1(int* a, int n){
    int s = 0,  e = n - 1, m;
    while(s <= e){
        m = (s + e) >> 1;
        if(a[m] == target)
            return m;
        else if(a[m] < target){
        }
        else{
        }
    }
    return -1;
}

int main(){
    int a[] = {4, 5, 6, 7, 1, 2, 3};
    cout<<find_min(a, 7)<<endl;
    return 0;
}
*/
