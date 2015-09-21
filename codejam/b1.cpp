/*
#include <iostream>
using namespace std;

const int N = 1e5 + 1;
int a[N];

int main(){
    int n, i, j, t;
    cin>>n;
    for(i = 0; i < n; i++)
        cin>>a[i];
    for(i = 1; i < n; i++)
        if(a[i] < a[i-1])
            break;
    for(j = i; j < n; j++)
        if(a[j] >= a[j-1])
            break;
    i--, j--;
    while(i < j){
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++, j--;
    }
    for(i = 1; i < n; i++)
        if(a[i] <= a[i-1]){
            cout<<"no"<<endl;
            return 0;
        }
    cout<<"yes"<<endl;
    return 0;
}
*/
