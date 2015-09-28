/*
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct point{
    double x, y;
};

point pt[100];

int cross(point p1, point p2, point p3){
    return (p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y);
}

bool isOnLine(point *pt, int n){
    int x_c, m = n - 2; // 统计垂直于x轴的直线
    double tmp;
    for(int i = 0; i < m; i++){
        x_c = 0;
        unordered_map<double, bool> ks;
        for(int j = i + 1; j < n; j++){
            if(pt[j].x == pt[i].x){
                x_c++;
                if(x_c > 1)
                    return true;
            }
            else{
                tmp = (pt[j].y - pt[i].y) / (pt[j].x - pt[i].x);
                if(ks[tmp])
                    return true;
                ks[tmp] = true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin>>x;
    for(int i = 0; i < n; i++)
        cin>>pt[i].x>>pt[i].y;
    if(isOnLine(pt, n))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
*/
