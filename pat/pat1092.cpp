/*
#include <iostream>
#include <string>
using namespace std;

int a[10], b[26], c[26];

int main(){
    string s1, s2;
    cin>>s2>>s1;
    for(int i=0; i<s2.size(); i++)
        if(s2[i] >= '0' && s2[i] <= '9')
            a[s2[i]-'0']++;
        else if(s2[i] >= 'a' && s2[i] <= 'z')
            b[s2[i]-'a']++;
        else
            c[s2[i]-'A']++;
    for(int i=0; i<s1.size(); i++)
        if(s1[i] >= '0' && s1[i] <= '9')
            a[s1[i]-'0']--;
        else if(s1[i] >= 'a' && s1[i] <= 'z')
            b[s1[i]-'a']--;
        else
            c[s1[i]-'A']--;

    int p=0, n=0;
        for(int i=0; i<10; i++)
            if(a[i] > 0)
                p+=a[i];
            else if(a[i] < 0)
                n-=a[i];
        for(int i=0; i<26; i++)
            if(b[i] > 0)
                p+=b[i];
            else if(b[i] < 0)
                n-=b[i];
         for(int i=0; i<26; i++)
            if(c[i] > 0)
                p+=c[i];
            else if(c[i] < 0)
                n-=c[i];
           if(n > 0)
                cout<<"No "<<n<<endl;
           else
                cout<<"Yes "<<p<<endl;
    return 0;
}
*/
