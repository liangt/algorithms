/*
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int a[130];

int lengthOfLongestSubstring(string s) {
    memset(a, 0, sizeof(a));
    int n = s.size();
    int i=0, j=0, tp, mx=0;
    while(j<n){
        tp = s[j];
        if(a[tp]){
            tp = j - i;
            if(mx < tp)
                mx = tp;
            tp = s[i] ;
            a[tp]--;
            i++;
        }
        else{
            a[tp] = 1;
            j++;
        }
    }
    tp = j - i;
    if(mx < tp)
        mx = tp;
    return mx;
}

int main(){
    string st;
    while(cin>>st)
        cout<< lengthOfLongestSubstring(st)<<endl;
    return 0;
}
*/
