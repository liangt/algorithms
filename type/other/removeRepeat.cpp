/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 去掉排完序的数组中重复元素，返回去重后的数组大小
int removeRepeat(int* a, int n){
    int m = 1;
    for(int i=1; i<n; i++)
        if(a[m-1] != a[i])
            a[m++] = a[i];
    return m;
}

// 给定一个由0-9构成的字符串，计算出包含0-9这10个数字的最短区间的长度
int d[10];
int minRange(int* a, int n){
    int c = 0, m = 0;
    while(m < n && c < 10){
        if(d[a[m]] == 0){
            d[a[m]] = 1;
            c++;
        }
        else
            d[a[m]]++;
        m++;
    }
    if(c<10)
        return -1;
    int s, e;
    e = m + 1;
    s = 0;
    while(e < n){
        d[a[s]]--;
        if(d[a[s]] == 0){
            while(e < n && a[e]!=a[s])
                d[a[e++]]++;
            if(e<n)
                d[a[e++]]++;
        }
        s++;
        if(e - s + 1< m)
            m = e- s + 1;
    }
    return m;
}

int main(){
    int a[100];
    srand(time(0));
    for(int i=0; i<100; i++)
        a[i] = rand() % 10;
    cout<<minRange(a, 100)<<endl;
    return 0;
}
*/
