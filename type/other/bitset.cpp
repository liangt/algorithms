/*
#include <iostream>
#include <ctime>
#include <bitset>
#include <cstdlib>
using namespace std;

int main(){
    unsigned char bits[13];
    bitset<101> bts;
    for(int i = 0; i < 13; i++)
        bits[i] = '\0';
    unsigned a, b, i;
    for(int j = 0; j < 10; j++){
        i = rand() % 100 + 1;
        bts[i] = 1;
        a = i >> 3;
        b = i & 7;
        cout<<i<<" "<<a<<" "<<b<<endl;
        bits[a] |= (1 << b);
    }
    cout<<"*****"<<endl;
    for(i = 1; i < 101; i++){
        a = i >> 3;
        b = i & 7;
        if(bits[a] & (1 << b))
           cout<<i<<" "<<a<<" "<<b<<endl;
    }
    cout<<"*****"<<endl;
    for(i = 1; i < 101; i++){
        if(bts[i])
           cout<<i<<endl;
    }
    return 0;
}
*/
