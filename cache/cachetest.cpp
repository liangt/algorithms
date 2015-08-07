/*
#include <iostream>
#include "FIFOCache.h"
#include "LFUCache.h"
using namespace std;

int main(){
    int a[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1};
    int n = 17;

    cout<<"FIFOCache: "<<endl;
    FIFOCache cache(3);
    int c = 0; // 记录命中次数
    for(int i=0; i<n; i++){
        if(cache.get(a[i]))
            c++;
        cache.print();
    }
    cout<<"命令率为: "<<double(c)/n<<endl;

    cout<<"LFUCache: "<<endl;
    LFUCache cache2(3);
    c = 0; // 记录命中次数
    for(int i=0; i<n; i++){
        if(cache2.get(a[i]))
            c++;
        cache2.print();
    }
    cout<<"命令率为: "<<double(c)/n<<endl;
    return 0;
}
*/
