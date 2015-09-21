/*
#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

const int N = 1001;
int a[N], prime[N];

void cal_prime(){
    for(int i = 1; i < N; i++)
        prime[i] = 1;
    for(int i = 2; i * i < N; i++){
        if(prime[i])
            for(int j = i * 2; j < N; j += i)
                prime[j] = 0;
    }
}

int main(){
    freopen("B-small-attempt0.in", "r", stdin);
    freopen("B-small-attempt0.out", "w", stdout);
    freopen("B-large.in", "r", stdin);
    freopen("B-large.out", "w", stdout);

    cal_prime();
    int t;
    cin>>t;
    for(int l = 1; l <= t; l++){
        memset(a, 0, sizeof(a));

        cout<<"Case #"<<l<<":"<<endl;
    }
    return 0;
}
*/
