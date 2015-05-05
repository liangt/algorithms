/*
#include <iostream>
#include <string>
using namespace std;

const int N = 50;
int next[N+1];

void buildNext(string p){
    int n=p.size();
    next[0] = next[1] = 0;
    int nxt = 0;
    for(int i=1; i<n; i++){
        while(nxt && p[nxt]!=p[i])
            nxt = next[nxt];
        if(p[nxt]==p[i])
            nxt++;
        next[i+1] = nxt;
    }
}

// 返回所有匹配的子串数
int kmp1(string s, string p){
    buildNext(p);
    int n1=s.size(), n2=p.size();
    int nxt=0, ans = 0;
    for(int i=0; i<n1; i++){
        while(nxt && s[i]!=p[nxt])
            nxt = next[nxt];
        if(s[i] == p[nxt])
            nxt++;
        if(nxt == n2){
            nxt = next[nxt];
            ans++;
        }
    }
    return ans;
}

// 返回第一个匹配子串的位置，没有匹配返回-1
int kmp2(string s, string p){
    int n1=s.size(), n2=p.size();
    int nxt = 0;
    for(int i=0; i<n1; i++){
        while(nxt && s[i]!=p[nxt])
            nxt = next[nxt];
        if(s[i] == p[nxt])
            nxt++;
        if(nxt == n2)
            return i-n2+1;
    }
    return -1;
}

int main(){
    string s, p;
    while(cin>>s>>p)
        cout<<kmp1(s, p)<<" "<<kmp2(s, p)<<endl;
	return 0;
}
*/
