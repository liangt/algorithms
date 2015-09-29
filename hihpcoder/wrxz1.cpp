/*
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y, r, dx, dy, di, dj, ds, ans = 0;
    int ty, tmp, ansx, ansy;
    cin>>x>>y>>r;
    for(int i = x -r-1; i<=x+r+1; i++){
        dx = i - x;
        dy = sqrt(r * r - dx * dx);
        ty = y + dy;
        for(int j = -1; j <=1; j++){
            tmp = ty + j;
            di = i -x;
            dj = tmp - y;
            ds = di * di + dj * dj;
            if(ds <= r * r){
                if(ds > ans){
                    ans = ds;
                    ansx = i;
                    ansy = tmp;
                }
                else if(ds == ans){
                    if(ansx < i){
                        ansx = i;
                        ansy = tmp;
                    }
                    else if(ansx == i){
                        if(ansy < tmp)
                            ansy = tmp;
                    }
                }
            }
        }

        ty = y - dy;
        for(int j = -1; j <=1; j++){
            tmp = ty + j;
            di = i -x;
            dj = tmp - y;
            ds = di * di + dj * dj;
            if(ds <= r * r){
                if(ds > ans){
                    ans = ds;
                    ansx = i;
                    ansy = tmp;
                }
                else if(ds == ans){
                    if(ansx < i){
                        ansx = i;
                        ansy = tmp;
                    }
                    else if(ansx == i){
                        if(ansy < tmp)
                            ansy = tmp;
                    }
                }
            }
        }
    }
    cout<<ansx<<" "<<ansy<<endl;
    return 0;
}
*/
