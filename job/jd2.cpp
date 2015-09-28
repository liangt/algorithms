/*
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

double a[600];

bool cmp(double x, double y){
    return x > y;
}

int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a, a+n, cmp);
    double ans = 0, c = 0;
    for(int i = 0; i < n; i++){
        if(ans >= 20)
            break;
        ans += sqrt(a[i] * a[i] - 1) * 2;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
*/
