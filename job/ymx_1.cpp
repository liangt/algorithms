/*
#include <iostream>
using namespace std;

void squarePatternPrint(int n)
{
    int m = (n + 1) >> 1, tp;
    for(int i = 0; i < m; i++){
        tp = 2 * i * n + 1;
        for(int j = 1; j < n; j++)
            cout<<tp++<<"*";
        cout<<tp<<endl;
    }
    m = 2 * (n / 2) - 1;
    for(int i = m; i >= 1; i-=2){
        tp = i * n + 1;
        for(int j = 1; j < n; j++)
            cout<<tp++<<"*";
        cout<<tp<<endl;
    }
}

int main(){
    int n;
    while(cin>>n)
        squarePatternPrint(n);
    return 0;
}
*/
