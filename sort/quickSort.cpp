/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void quickSortHelp(int* a, int s, int e){
    if(s >= e)
        return;
    int i = s - 1, j = e;
    int m = (s+e)>>1;
    swap(a[m], a[e]);
    m = a[e];
    while(i < j){
        while(i<e && a[++i] <= m);
        while(j>s && a[--j] >= m);
        if(i < j)
            swap(a[i], a[j]);
    }
    swap(a[i], a[e]);
    //cout<<j<<" "<<i<<endl;  // [s,j]是小于m的区间， [j+1,i]是等于m的区间,，[i+1,e]是大于m的区间
    quickSortHelp(a, s, j);
    quickSortHelp(a, i+1, e);
}

void quickSort(int* a, int n){
    quickSortHelp(a, 0, n-1);
}

int main(){
    const int N = 10;
    int a[N];
    srand(time(0));
    for(int i=0; i<N; i++){
        a[i] = rand() % 100;
        cout<<a[i]<<" ";
    }
    cout<<endl;

    quickSort(a, N);

    for(int i=0; i<N; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
*/
