/*
#include <iostream>
using namespace std;

int minRepresentation(string s){
    int n = s.size();
    if(n == 0)
        return 0;
    s += s;
    int i=0, j=1, k=0;
    while(i<n && j<n){
        while(k<n && s[i+k]==s[j+k])
            k++;
        if(k == n)
            return i>j ? j : i;
        if(s[i+k] > s[j+k])
            i += k + 1;
        else
            j += k + 1;
        k = 0;
        if(i == j)
            j++;
    }
    return i>j ? j : i;
}

string minRepresentation2(string s){
    int n = s.size();
    if(n == 0)
        return s;
    s += s;
    int i=0, j=1, k=0;
    while(i<n && j<n){
        while(k<n && s[i+k]==s[j+k])
            k++;
        if(k == n)
            return i>j ? s.substr(j, n) : s.substr(i, n) ;
        if(s[i+k] > s[j+k])
            i += k + 1;
        else
            j += k + 1;
        k = 0;
        if(i == j)
            j++;
    }
    return i>j ? s.substr(j, n) : s.substr(i, n) ;
}

int main(){
    string s;
    while(cin>>s)
        cout<<minRepresentation2(s)<<endl;
	return 0;
}
*/
