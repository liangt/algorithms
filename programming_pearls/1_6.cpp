/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class bit_set{
public:
    bit_set(int n){
        int m = n >> 3;
        if(n & 0x7)
            m++;
        val = new unsigned[m];
        for(int i = 0; i < m; i++)
            val[i] = 0;
    }
    ~bit_set(){ delete [] val; }
    void add(int v){
        v--;
        int i = v >> 3;
        if(v & 0x7)
            i++;
        int j = (v & 0x7) << 2;
        val[i] += (1 << j);
    }
    int operator[](int v){
         v--;
        int i = v >> 3;
        if(v & 0x7)
            i++;
        int j = (v & 0x7) << 2;
        return (val[i] >> j) & 0xf;
    }
private:
    int n;
    unsigned *val;
};

int main(){
    int n = 20, tp;
    int a[20];
    srand(time(0));
    for(int i = 0; i < n; i++){
        a[i] = rand() % 10 + 1;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bit_set bs(10);
    for(int i = 0; i < n; i++)
        bs.add(a[i]);
    for(int i = 0; i < 10; i++){
        tp = bs[i+1];
        for(int j = 0; j < tp; j++)
            cout<<i+1<<" ";
    }
    cout<<endl;
    return 0;
}
*/
