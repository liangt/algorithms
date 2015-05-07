/*
#include <iostream>
#include <string>
using namespace std;

// KMP
int strStr(string haystack, string needle) {
    int ns=haystack.size(), np=needle.size();
    if(np==0)
        return 0;
    if(ns==0)
        return -1;
    int* bound = new int[np+1];
    bound[0] = bound[1] = 0;
    int pre = 0;
    for(int i=1; i<np; i++){
        while(pre && needle[i] != needle[pre])
            pre = bound[pre];
        if(needle[i] == needle[pre])
            pre++;
        bound[i+1] = pre;
    }
    pre = 0;
    for(int i=0; i<ns; i++){
        while(pre && haystack[i]!=needle[pre])
            pre = bound[pre];
        if(haystack[i]==needle[pre])
            pre++;
        if(pre == np)
            return i-np+1;
    }
    return -1;
 }

int main(){
    string s, p;
    while(cin>>s>>p)
        cout<<strStr(s, p)<<endl;
	return 0;
}
*/
