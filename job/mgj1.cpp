/*
#include <iostream>
using namespace std;

int main(){
    int n, a[100], b[100];
    cin>>n;
    n--;
    for(int i = 0; i <= n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++)
        b[i] = a[i+1] - a[i];
    n--;
    int t, ans = 1000;
    for(int i = 0; i < n; i++){
        b[i] += b[i+1];
        t = 0;
        for(int j=0; j<=n; j++)
            if(t < b[j])
                t = b[j];
        b[i] -= b[i+1];
        if(t < ans)
            ans = t;
    }
    cout<<ans<<endl;
    return 0;
}
*/
