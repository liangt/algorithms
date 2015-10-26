/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 返回不超过n的最大的2的幂
// O(log(n))
int power1(int n){
    int ans = 1;
    while(ans <= n)
        ans <<= 1;
    ans >>= 1;
    return ans;
}

// 返回不超过n的最大的2的幂
// O(loglog(n))
int power2(int n){
    long long cur;
    int pre, ans = 1;
    while(n > 1){
        cur = 2, pre = 1;
        while(cur <= n){
            pre = cur;
            cur *= cur;
        }
        n /= pre;
        ans *= pre;
    }
    return ans;
}

int main(){
    int n = 1, n1, n2;
    clock_t s, e;
    for(int i = 1; i < 10; i++){
        s = clock();
        for(int j = 0; j < 10000; j++)
            n1 = power1(n);
        e = clock();
        cout<<n1<<" : "<<e - s<<endl;

        s = clock();
        for(int j = 0; j < 10000; j++)
            n2 = power2(n);
        e = clock();
        cout<<n2<<" : "<<e - s<<endl;

        n *= 10;
    }
    return 0;
}
*/
