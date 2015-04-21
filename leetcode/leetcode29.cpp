/*
#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor) {
    if(divisor == 0 || (dividend==INT_MIN && divisor==-1))
        return INT_MAX;
    if(dividend == 0)
        return 0;
    long long dd = dividend;
    long long ds = divisor;
    bool t=true;
    if(dividend < 0){
        dd = -dd;
        t = !t;
    }
    if(divisor < 0){
        ds = -ds;
        t = !t;
    }
    if(dd < ds)
        return 0;
    int ans=0, tp;
    long long tmp=0;
    while(ds <= dd){
        tmp = ds;
        dd -= ds;
        tp = 1;
        while(tmp <= dd){  // 每次翻倍
            dd -= tmp;
            tmp += tmp;
            tp += tp;
        }
        ans += tp;
    }
    return t ? ans : -ans;
}

// Time Limit Exceeded
int divide(int dividend, int divisor) {
    if(divisor == 0)
        return INT_MAX;
    if(dividend == 0)
        return 0;
    bool t=true;
    if(dividend < 0){
        dividend = -dividend;
        t = !t;
    }
    if(divisor < 0){
        divisor = -divisor;
        t = !t;
    }
    int ans=0, tmp=0;
    while(tmp <= dividend){
        tmp += divisor;
        ans++;
    }
    ans--;
    return t ? ans : -ans;
}

int main(){
    int a,b;
    while(cin>>a>>b)
        cout<<divide(a, b)<<endl;
    return 0;
}
*/
