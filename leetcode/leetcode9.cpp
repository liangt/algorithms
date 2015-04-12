/*
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if(x < 0)
        return false;
    long long ans = 0;
    int tmp = x;
    while(tmp){
        ans = ans * 10 + tmp % 10;
        tmp /= 10;
    }
    return ans == x;
}

bool isPalindrome2(int x) {
    if(x < 0)
        return false;
    int tmp = 0;
    while(tmp < x){
        tmp = tmp * 10 + x% 10;
        x /= 10;
    }
    return tmp==x || tmp/10 ==x;
}

int main(){
    int x;
    while(cin>>x)
        cout<<isPalindrome(x)<<" "<<isPalindrome2(x)<<endl;
    return 0;
}
*/
