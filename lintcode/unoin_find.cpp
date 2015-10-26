/*
#include <iostream>
using namespace std;

const int N = 10;
int pa[N+1], rk[N+1];

int fd(int i){
    if(pa[[i] == 0)
        return i;
    return pa[i] = fd(pa[i]);
}

void un(int i, int j){
    int ri = fd(i);
    int rj = fd(j);
    if(ri == rj)
        return;
    if(rk[ri] < rk[rj])
        pa[ri] = rj;
    else if(rk[ri] > rk[rj])
        pa[rj] = ri;
    else{
        pa[ri] = rj;
        rk[rj]++;
    }
}

int main(){
    return 0;
}
*/
