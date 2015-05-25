/*
#include <iostream>
#include <string>
using namespace std;

const int N = 20;
int f[1+N];

int main(){
    string s, t;
    cin>>s>>t;
    int n, m;
    n = s.size();
    m = t.size();
    for(int i=0; i<n; i++)
        for(int j=m; j>0; j--)
            if(s[i] == t[j-1])
                f[j] = f[j-1] + 1;
    n = 0;
    for(int i=1; i<=m; i++)
        if(f[i] > n)
            n = f[i];
    cout<<n<<endl;
	return 0;
}
*/
