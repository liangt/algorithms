/*
#include <iostream>
using namespace std;

const int K = 100;
const int INF = 1000;
int f[K+1], deq[K+1], deqv[K+1];

int main(){
    int n, w, c, k, nk, s, t, tp;
    f[0] = 0;
    for(int i=1; i<=K; i++)
        f[i] = INF;
    cin>>n>>k;
    while(n--){
        cin>>w>>c;
        for(int i=0; i<w; i++){
            s = t = 0;
            nk = k / w;
            for(int j=0; j<=nk; j++){
                tp = f[i+j*w];
                while(s<t && deqv[t-1]>=tp)
                    t--;
                deq[t] = j;
                deqv[t++] = tp;
                f[i+j*w] = deqv[s];
                if(t == deq[s] + c)
                    s++;
            }
        }
    }
    if(f[k] < INF)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
	return 0;
}
*/
