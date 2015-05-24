/*
#include <iostream>
using namespace std;

// 多重背包  (转换成01背包)
const int N = 100;
int f[1+N];

int main(){
    int n, w, v, m, num, V, wt, vt, t;
    cin>>n>>V;
    while(n--){
        cin>>w>>v>>num;
        m = 1;
        while(m<num){
            wt = m * w;
            vt = m * v;
            for(int i=V; i>=wt; i--){
                t = f[i-wt] + vt;
                if(f[i] < t)
                    f[i] = t;
            }
            num -= m;
            m <<= 1;
        }
        wt = num * w;
        vt = num * v;
        for(int i=V; i>=wt; i--){
            t = f[i-wt] + vt;
            if(f[i] < t)
                f[i] = t;
        }
    }
    cout<<f[V]<<endl;
	return 0;
}
*/
