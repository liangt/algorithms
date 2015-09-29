/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

struct point{
    int x, y;
};

bool  cmp_x(point p1, point p2){
    return p1.x < p2.x;
}

bool cmp_y(point p1, point p2){
    return p1.y < p2.y;
}

point pts[20];
int rk[20];

void findRank(int s, int e){
    if(s == e)
        return;
    int m = (s + e) >> 1;
    findRank(s, m);
    findRank(m+1, e);
    sort(pts+s, pts+m+1, cmp_y);
    sort(pts+m+1, pts+e+1, cmp_y);
    int i = s, j = m + 1;
    while(i <= m && j <= e){
        if(pts[j].y < pts[i].y){
            rk[j] += i - s;
            j++;
        }
        else
            i++;
    }
    i -= s;
    while(j <= e){
        rk[j] += i;
        j++;
    }
    sort(pts+s, pts+e+1, cmp_x);
}


int main(){
    srand(time(0));
    int n = 6;
    for(int i = 0; i< n; i++){
        pts[i].x = rand() % 100 - 50;
        pts[i].y = rand() % 200 - 100;
    }
    sort(pts, pts+n, cmp_x);
    cout<<"Sort by x :"<<endl;
    for(int i = 0; i< n; i++)
        cout<<i<<" : "<<pts[i].x<<" , "<<pts[i].y<<endl;
    findRank(0, n-1);
    for(int i = 0; i < n; i++)
        cout<<i<<" : "<<rk[i]<<endl;
    return 0;
}
*/
