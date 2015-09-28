/*
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int N = 2000000;

struct Point
{
    double x;
    double y;
    int i;
};
Point point[N];

bool cmpx(const Point& a, const Point& b)
{
    return a.x < b.x;
}

bool cmpy(const Point& a, const Point& b)
{
    return a.y < b.y;
}

double dist(int i, int j){
    double x = point[i].x - point[j].x;
    double y = point[i].y - point[j].y;
    return sqrt(x * x + y * y);
}

int main()
{
   int n, s, e;
   double tmp, dis = 1e20;
   cin>>n;
   for(int i = 0; i < n; i++){
        cin>>point[i].x>>point[i].y;
        point[i].i = i;
   }
   for(int i = 1; i < n; i++){
        tmp = dist(i-1, i);
        if(tmp < dis){
            dis = tmp;
            s = i - 1;
            e = i;
        }
   }
    sort(point, point+n, cmpx);
    for(int i = 1; i < n; i++){
        tmp = dist(i-1, i);
        if(tmp < dis){
            dis = tmp;
            s = point[i - 1].i;
            e = point[i].i;
        }
   }
    sort(point, point+n, cmpy);
    for(int i = 1; i < n; i++){
        tmp = dist(i-1, i);
        if(tmp < dis){
            dis = tmp;
            s = point[i - 1].i;
            e = point[i].i;
        }
   }
   cout<<"Closest points: ";
   if( s < e)
        cout<<s<<", "<<e<<endl;
    else
        cout<<e<<", "<<s<<endl;
    return 0;
}
*/
