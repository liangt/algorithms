/*
#include <iostream>
using namespace std;

const int N = 100;
int s[N+1][N], r, c, t;

int main(){
    int tmp, ans, mx;
    cin>>t;
    while(t--){
        cin>>r>>c;
        for(int i = 1; i <= r; i++){
            for(int j = 0; j < c; j++){
                cin>>tmp;
                s[i][j] = s[i-1][j] + tmp;
            }
        }
        ans = s[1][0];
        for(int i = 0; i < r; i++){
            for(int j = i+1; j <= r; j++){
                mx = s[j][0] - s[i][0];
                tmp = 0;
                for(int t = 0; t < c; t++){
                    if(tmp > 0)
                        tmp += s[j][t] - s[i][t];
                    else
                        tmp = s[j][t] - s[i][t];
                    if(mx < tmp)
                        mx = tmp;
                }
                if(mx > ans)
                    ans = mx;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
