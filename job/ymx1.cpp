/*
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 10;
int a[N], b[N*2][N], c[N];

void init(){
    for(int i = 0; i < N; i++)
        a[i] = i;
    int j;
    for(int i = N - 1; i > 0; i--){
        j = rand() % (i + 1);
        swap(a[i], a[j]);
    }
}

int main(){
    init();
    for(int i = 0; i < N; i++)
        b[0][i] = a[i];

    for(int k = 1; k < 20; k++)
            for(int i = 0; i < N; i++)
                b[k][i] = a[b[k-1][i]];

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < N; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }

    int s;
    for(int i = 0; i < N; i++){
        c[i] = 1;
        s = a[i];
        while(a[s] != a[i]){
            c[i]++;
            s = a[s];
        }
    }
    cout<<"T"<<endl;
    for(int i = 0; i < N; i++)
        cout<<c[i]<<" ";
    cout<<endl;
    return 0;
}
*/
