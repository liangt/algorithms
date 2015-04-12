/*
#include <iostream>
#include <vector>
#include<utility>
#include <algorithm>
using namespace std;

typedef pair<int, int> pn;

vector<int> twoSum(vector<int> &numbers, int target) {
    vector<pn> tmp;
    vector<int> ans;
    int n = numbers.size();
    for(int i=0; i<n; i++)
        tmp.push_back(pn(numbers[i], i+1));
    sort(tmp.begin(), tmp.end());
    int i=0, j=n-1;
    while(i < j){
        if(tmp[i].first + tmp[j].first == target ){
            if(tmp[i].second >tmp[j].second) {
                ans.push_back(tmp[j].second);
                ans.push_back(tmp[i].second);
            }
            else{
                ans.push_back(tmp[i].second);
                ans.push_back(tmp[j].second);
            }
            break;
        }
        else if(tmp[i].first + tmp[j].first < target)
            i++;
        else
            j--;
    }
    return ans;
}

int main(){
    int nums[]={2, 7, 11, 15}, target=9;
    vector<int> numbers(nums, nums+4);
    vector<int> ans = twoSum(numbers, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
*/
