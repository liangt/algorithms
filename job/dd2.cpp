/*
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int a[100][100];

int main(){
    string in, tmp;
    getline(cin, in);
    int i = 0, n = in.size(), r = 0, c, j, tp;
    while(i < n){
        tmp = "";
        while(i < n && in[i] != ';'){
            tmp += in[i];
            i++;
        }
        stringstream sin(tmp);
        c = 0;
        while(sin>>a[r][c++]);
        r++;
        i++;
    }
    int ans  = a[0][0] + a[0][1] + a[1][0] + a[1][1];
    r--, c--;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            tp =a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
            if(tp > ans)
                ans = tp;
        }
    }
    cout<<ans<<endl;
    return 0;
}
*/
