/*
#include <iostream>
#include <cmath>
using namespace std;

const int N  = 50;
bool tag[N+1];

int main(){
    int x = 1, y, i = 1;
    double a = (1 + sqrt(5)) / 2;
    double b = a + 1;
    while(x <= N){
        y = x + i;
        tag[x] = true;
        tag[y] = true;
        cout<<i<<" : "<<x<<" "<<y<<" "<<int(a*i)<<" "<<int(b*i)<<endl;
        while(x<=N && tag[x])
            x++;
        i++;
    }
}
*/
