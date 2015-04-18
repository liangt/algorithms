#include <iostream>
#include <vector>
#include <utility>
#include <stack>
using namespace std;

typedef pair<int, int> node;
int maxArea(vector<int>& height){
    stack<node> que;
    int ans = 0, tmp, h, t;
    node tp;
    for(int i=1; i<height.size(); i++){
        h = height[i] > height[i-1] ? height[i-1] : height[i];
        tmp = 1;
        while(!que.empty() && que.top().first >= h){
            tp = que.top();
            que.pop();
            tmp += tp.second;
            t = tp.first * tp.second;
            if(t > ans)
                ans = t;
        }
        que.push(node(h, tmp));
    }
    tmp = 0;
    while(!que.empty()){
        tp = que.top();
        que.pop();
        tmp += tp.second;
        t = tp.first * tmp;
        if(t > ans)
            ans = t;
    }
    return ans;
}

int main(){
    int a[] = {2, 1, 4, 3, 2, 6,};
    vector<int> height(a, a+6);
    cout<<maxArea(height)<<endl;
    return 0;
}
