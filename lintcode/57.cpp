/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > threeSum(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans;
        vector<int> pair(3);
        int pre = nums[0] - 1, pre2, s, e, tmp;
        n -= 2;
        for(int i = 0; i < n; i++){
            cout<<i<<endl;
            if(nums[i] == pre)
                continue;
            s = i + 1;
            e = n + 1;
            pre2 = nums[s] - 1;
            pair[0] = nums[i];
            while(s < e){
                tmp = nums[i] + nums[s] + nums[e];
                cout<<i<<" "<<s<<" "<<e<<endl;
                if(tmp > 0)
                    e--;
                else if(tmp < 0)
                    s++;
                else{
                    if(nums[s] != pre2){
                        pre2 = nums[s];
                        pair[1] = pre2;
                        pair[2] = nums[e];
                        ans.push_back(pair);
                    }
                    s++;
                }
            }
            pre = nums[i];
        }
        return ans;
    }

int main(){
    vector<int> nums{2, 3, 7, 11};
    threeSum(nums);
    cout<<nums.max_size()<<endl;
    return 0;
}
*/
