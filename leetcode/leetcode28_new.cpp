/*
#include <iostream>
#include <string>
using namespace std;

// Extend_KMP
int strStr(string s, string p) {
    int ns=s.size(), np=p.size();
    if(np==0)
        return 0;
    if(ns==0)
        return -1;
    int *pn = new int[np];
    int *sn = new int[ns];

    // 处理模式串
    int j=1;
    pn[0] = 0;
    while(j<np && p[j-1]==p[j])
        j++;
    pn[1] = j - 1;
    int k=1,t;
    for(int i=2; i<np; i++){
        if(k + pn[k] <= i){
            j = i;
            while(j<np && p[j-i]==p[j])
                j++;
            pn[i] = j - i;
            k = i;
        }
        else{
            t = i - k;
            if(t+pn[t] < pn[k])
                pn[i] = pn[t];
            else{
                j = k+pn[k];
                while(j<np && p[j-i]==p[j])
                    j++;
                pn[i] = j - i;
                k = i;
            }
        }
    }

    // 处理串
    j = 0;
    while(j<np && j<ns && p[j]==s[j])
        j++;
    sn[0] = j;
    k = 0;
    for(int i=1; i<ns; i++){
        if( k + sn[k] <= i){
            j = i;
            while(j<ns && j-i<np && p[j-i]==s[j])
                j++;
            sn[i] = j - i;
            k = i;
        }
        else{
            t = i - k;
            if(t+pn[t] < sn[k])
                sn[i] = pn[t];
            else{
                j = k+sn[k];
                while(j<ns && j-i<np && p[j-i]==s[j])
                    j++;
                sn[i] = j - i;
                k = i;
            }
        }
    }

    for(int i=0; i<ns; i++)
        if(sn[i] == np)
            return i;
    return -1;
 }

int main(){
    string s, p;
    while(cin>>s>>p)
        cout<<strStr(s, p)<<endl;
	return 0;
}
*/
