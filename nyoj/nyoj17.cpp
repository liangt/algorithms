/*
#include <iostream>
#include <string>
using namespace std;

const int N =  10002;
int d[N];

int main(){
    int k,n, tp;
    string str;
    cin>>k;
    while(k--){
        cin>>str;
        n = str.size();
        for(int i=0; i<n; i++)
            d[i] = 1;
        for(int i=1; i<n; i++)
            for(int j=0; j<i; j++)
                if(str[i] > str[j] && d[i] < d[j] + 1)
                    d[i] = d[j] + 1;
        tp = 1;
        for(int i=0; i<n; i++)
            if(tp < d[i])
                tp = d[i];
        cout<<tp<<endl;
    }
    return 0;
}
*/
