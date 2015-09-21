/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void help(vector<vector<int>> &ans, vector<int> &tmp, vector<int> &num, int target, int i){
	    if(target == 0){
	            ans.push_back(tmp);
	            return;
	    }
	    if(i == num.size())
	        return;
	    help(ans, tmp, num, target, i+1);

	    if(num[i] <= target){
	        tmp.push_back(num[i]);
	        help(ans, tmp, num, target-num[i], i+1);
	        tmp.pop_back();
	    }
	}

    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        // write your code here
        vector<vector<int>> ans;
        vector<int> tmp;
        sort(num.begin(), num.end());
        help(ans, tmp, num, target, 0);
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < ans[i].size(); j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }
        return ans;
    }

int main(){
    vector<int> num{7,1,2,5,1,6,10};
    int target = 8;
    vector<vector<int> > ans = combinationSum2(num, target);
}
*/
