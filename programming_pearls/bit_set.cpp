/*
#include <iostream>
using namespace std;

class bit_set{
public:
    bit_set(int n): n(n){
        int m = n >> 3;
        if(n & 7)
            m ++;
        bits = new int [m];
    }
    ~bit_set(){ delete [] bits; }
    void reset(int pos){
    }
private:
    int n;
    unsigned *bits;
};

int main(){
    return 0;
}
*/
