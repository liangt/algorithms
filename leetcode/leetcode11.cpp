/*
#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
	int i=0, j=height.size()-1, ans=0, tmp, t;
	while(i < j){
		tmp = height[i]<=height[j]?height[i]:height[j];
        tmp *= j - i;
        if(tmp > ans)
			ans = tmp;
        if(height[i] <= height[j])
			i++;
        else
            j--;
    }
    return ans;
}

int main(){
    int a[] = {2, 1, 4, 3, 2, 6,};
    vector<int> height(a, a+6);
    cout<<maxArea(height)<<endl;
    return 0;
}
*/