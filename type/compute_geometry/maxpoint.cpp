/*
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

struct point{
    int x, y;
};

point pts[20];
bool tag[20];

// 分治: O(nlogn)
void findMax(int s, int e){
    if( s == e){
        tag[s] = true;
        return;
    }
    int m = (s + e) >> 1;
    findMax(s, m);
    findMax(m+1, e);
    int max_y = pts[m+1].y;
    for(int i = m + 2; i <= e; i++)
        if(tag[i] && max_y < pts[i].y)
            max_y = pts[i].y;
    for(int i = s; i <= m; i++)
        if(tag[i] && max_y >= pts[i].y)
            tag[i] = false;
}

bool cmp(point p1, point p2){
    return p1.x < p2.x;
}

// O(n)
void findMax(int n){
    int m = n - 1;
    tag[m] = true;
    int max_y = pts[m].y;
    for(int i = m - 1; i >= 0; i--){
            if(max_y < pts[i].y){
                max_y = pts[i].y;
                tag[i] = true;
            }
    }
}


int main(){
    srand(time(0));
    int n = 20;
    for(int i = 0; i < n; i++){
        pts[i].x = rand() % 100 - 50;
        pts[i].y = rand() % 80 - 40;
    }
    sort(pts, pts+n, cmp);
    for(int i = 0; i < n; i++)
        cout<<i<<" : "<<pts[i].x<<" , "<<pts[i].y<<endl;
    findMax(0, n-1);
    for(int i = 0; i < n; i++)
        if(tag[i])
            cout<<i<<" : "<<pts[i].x<<" , "<<pts[i].y<<endl;
    for(int i = 0; i < n; i++)
        tag[i] = false;
    findMax(n);
    for(int i = 0; i < n; i++)
        if(tag[i])
            cout<<i<<" : "<<pts[i].x<<" , "<<pts[i].y<<endl;
    return 0;
}
*/
