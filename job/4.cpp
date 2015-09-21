/*
#include <iostream>
using namespace std;

int ans[5001];

int main(){
    int n, m, k, a, b, c, t;
    cin>>n>>m>>k;
    m--;
    while(n--){
        cin>>a>>b>>c;
        for(int p=0; p<k; p++)
            for(int i=m; i>=c; i--){
                t = ans[i-c] + a - (m - i)*b;
                if(t > ans[i])
                    ans[i] = t;
            }
    }
    cout<<ans[m]<<endl;
    return 0;
}
*/
