/*
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

const int N = 10;
int a[N], f[N], g[N];

int main(){
    for(int i = 0; i < N; i++)
        a[i] = rand() % 20 - 10;
    int mx=a[0], tmp = 0;
    for(int i = 0; i < N; i++){
        if(tmp > 0)
            tmp += a[i];
        else
            tmp = a[i];
        if(tmp > mx)
            mx = tmp;
        f[i] = mx;
    }
    mx = a[N-1], tmp = 0;
    for(int i = N - 1; i >= 0; i--){
        if(tmp > 0)
            tmp += a[i];
        else
            tmp = a[i];
        if(tmp > mx)
            mx = tmp;
        g[i] = tmp;
    }
    mx = f[0] + g[1];
    for(int i = 1; i < N - 2; i++){
        tmp = f[i] + g[i+1];
        if(tmp > mx)
            mx = tmp;
    }
    for(int i = 0; i < N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i = 0; i < N; i++)
        cout<<f[i]<<" ";
    cout<<endl;
    for(int i = 0; i < N; i++)
        cout<<g[i]<<" ";
    cout<<endl;
    cout<<mx<<endl;

    return 0;
}
*/
