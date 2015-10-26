/*
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 10;
const int K = 3;
int a[N], que[N];

int main(){
    for(int i = 0; i < N; i++)
        a[i] = rand() % 20;
    for(int i = 0; i < N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int s = 0, e = 0;
    for(int i = 0; i < N; i++){
        while(s < e && a[i] <= a[que[e-1]])
            e--;
        que[e++] = i;
        cout<<a[que[s]]<<endl;
        if(i - que[s] + 1 == K)
            s++;
    }
    return 0;
}
*/
