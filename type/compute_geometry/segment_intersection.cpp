/*
#include <iostream>
using namespace std;

struct point{
    double x, y;
};

typedef point segment[2];

int cross(point p1, point p2, point p3){
    int ans = (p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y);
    if(ans < 0)
        return -1;
    else if(ans > 0)
        return 1;
    else
        return 0;
}

bool within(point p1, point p2, point p3){
    int max_x, min_x, max_y, min_y;
    if(p2.x <= p3.x){
        min_x = p2.x;
        max_x = p3.x;
    }
    else{
        min_x = p3.x;
        max_x = p2.x;
    }
    if(p2.y <= p3.y){
        min_y = p2.y;
        max_y = p3.y;
    }
    else{
        min_y = p3.y;
        max_y = p2.y;
    }
    return p1.x >= min_x && p1.x <= max_x && p1.y >= min_y && p1.y <= max_y;
}

bool intersect(segment s1, segment s2){
    int d1 = cross(s1[0], s2[0], s2[1]);
    int d2 = cross(s1[1], s2[0], s2[1]);
    int d3 = cross(s2[0], s1[0], s1[1]);
    int d4 = cross(s2[1], s1[0], s1[1]);
    if(d1 == 0 && within(s1[0], s2[0], s2[1]))
        return true;
    else if(d2 == 0 && within(s1[1], s2[0], s2[1]))
        return true;
    else if(d3 == 0 && within(s2[0], s1[0], s1[1]))
        return true;
    else if(d4 == 0 && within(s2[1], s1[0], s2[1]))
        return true;
    else if(d1 * d2 < 0 && d3 * d4 < 0)
        return true;
    else
        return false;
}

bool intersect(segment s1, segment s2, point &ans){
    int d1 = cross(s1[0], s2[0], s2[1]);
    int d2 = cross(s1[1], s2[0], s2[1]);
    int d3 = cross(s2[0], s1[0], s1[1]);
    int d4 = cross(s2[1], s1[0], s1[1]);
    if(d1 == 0 && within(s1[0], s2[0], s2[1])){
        ans.x = s1[0].x;
        ans.y = s1[0].y;
        return true;
    }
    else if(d2 == 0 && within(s1[1], s2[0], s2[1])){
        ans.x = s1[1].x;
        ans.y = s1[1].y;
        return true;
    }
    else if(d3 == 0 && within(s2[0], s1[0], s1[1])){
        ans.x = s2[0].x;
        ans.y = s2[0].y;
        return true;
    }
    else if(d4 == 0 && within(s2[1], s1[0], s2[1])){
        ans.x = s2[1].x;
        ans.y = s2[1].y;
        return true;
    }
    else if(d1 * d2 < 0 && d3 * d4 < 0){
        double a = s1[1].y - s1[0].y;
        double b = s1[0].x - s1[1].x;
        double e = a * s1[0].x + b * s1[0].y;
        double c =  s2[1].y - s2[0].y;
        double d = s2[0].x - s2[1].x;
        double f = c * s2[0].x + d * s2[0].y;
        double denominator = a * d - b * c;
        ans.x = (e * d - b * f) / denominator;
        ans.y = (a * f - e * c) / denominator;
        return true;
    }
    else
        return false;
}

int main(){
    segment s1, s2;
    point ans;
    cin>>s1[0].x>>s1[0].y>>s1[1].x>>s1[1].y;
    cin>>s2[0].x>>s2[0].y>>s2[1].x>>s2[1].y;
    if(intersect(s1, s2, ans))
        cout<<"Yes: x = "<<ans.x<<", y = "<<ans.y<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
*/
