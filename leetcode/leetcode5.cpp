/*
#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s) {
        int n = s.size();
        if(n<=1)
            return s;
        int st, ed, sm=0, em=0;
        for(int i=1; i<n; i++){
            // even
            for(st=i-1,ed=i; st>=0 && ed<n && s[st] == s[ed]; st--, ed++);
            if(ed-st-1 > em - sm+1){
                sm =st + 1;
                em = ed - 1;
            }

            // odd
            for(st=i-1,ed=i+1; st>=0 && ed<n && s[st] == s[ed]; st--, ed++);
            if(ed-st-1 > em - sm+1){
                sm =st + 1;
                em = ed - 1;
            }
        }
        return s.substr(sm, em-sm+1);
}

int main(){
    string s;
    while(cin>>s)
        cout<<longestPalindrome(s)<<endl;
    return 0;
}
*/
