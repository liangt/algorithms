/*
#include <iostream>
#include <string>
using namespace std;

int  bf(string s, string p){
    int i, j, n1, n2;
    n1 = s.size();
    n2 = p.size();
    for(i=0, j=0; j<n2 && i<n1; i++)
        if(s[i] == p[j])
            j++;
        else{    // 不匹配，回溯
            i -= j;
            j = 0;
        }
    if(j == n2)
        return i-j;
    else
        return n1;
}

int main(){
    string s,p;
    while(cin>>s>>p)
        if(bf(s, p) == s.size())
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    return 0;
}
*/
