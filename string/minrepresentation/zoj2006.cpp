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

int main(){
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        cout<<minRepresentation(s)+1<<endl;
    }
	return 0;
}
*/
