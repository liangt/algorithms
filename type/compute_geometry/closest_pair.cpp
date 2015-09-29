/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

struct point{
    int x, y;
};

const int INF = 1e9;
point pts[20];

int closest_pair(int s, int e){
    if(s == e)
        return INF;
    int m = (s + e) >> 1;
    int d1 = closest_pair(s, m);
    int d2 = closest_pair(m+1, e);
    if(d1 > d2)
        d1 = d2;
}

int main(){
    int n = 20;
    for(int i = 0; i < n; i++){
        pts[i].x = rand() % 100 - 50;
        pts[i].y = rand() % 80 - 40;
    }
    return 0;
}
*/
