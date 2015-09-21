/*
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long r, x1, y1, x2, y2, tmp;
    cin>>r>>x1>>y1>>x2>>y2;
    tmp = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    r <<= 1;
    r *= r;
    if(tmp % r == 0){
        tmp /= r;
        tmp = sqrt(double(tmp));
    }
    else{
        tmp /= r;
        tmp = int(sqrt(double(tmp))) + 1;
    }
    cout<<tmp<<endl;
    return 0;
}
*/

/*
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int r, x1, y1, x2, y2;
    cin>>r>>x1>>y1>>x2>>y2;
    double tmp = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
     long long ans = sqrt(tmp);
    r <<= 1;
    if(ans * ans == tmp){
        if(ans % r == 0)
            ans /= r;
        else
            ans = ans / r + 1;
    }
    else
        ans = ans / r + 1;
    cout<<ans<<endl;
    return 0;
}
*/
