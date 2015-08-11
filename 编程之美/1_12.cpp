/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N = 5;
int a[N];

int main(){
    srand(time(0));
    for(int i=0; i<N; i++)
        a[i] = rand() % 1000;
    int ans = 0;
    for(int i=0; i<N; i++)
        ans ^= a[i];
    cout<<ans<<endl;
    if(ans){
        int j;
        unsigned c = __builtin_clz(ans);
        c = 0x80000000 >> c;
        for(j=0; j<N; j++)
            if(a[j] & c)
                break;
        cout<<a[j]<<" ";
        a[j] = ans ^ a[j];
        cout<<a[j]<<endl;
        ans = 0;
        for(int i=0; i<N; i++)
            ans ^= a[i];
        cout<<ans<<endl;
    }
    return 0;
}
*/
