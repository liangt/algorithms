/*
#include <iostream>
using namespace std;

void count(vector<int>& A, int i, int c, int k, int s, int target, int& ans){
    if(c > k || s > target || i > A.size())
        return;
    if(c == k && s == target){
        ans++;
        return;
    }
    count(A, i+1, c, k, s, target, ans);
    count(A, i+1, c+1, k, s+A[i], target, ans);
}

int kSum(vector<int> A, int k, int target) {
    int ans = 0;
    count(A, 0, 0, k, 0, target, ans);
    return ans;
}


// dp
// dp[i][k][j]表示前i个元素中选出k个元素,其和为j的方案数
// dp[i][k][j] = dp[i-1][k][j](不选A[i]) + dp[i-1][k-1][j-A[i]](选A[i])
//    空间优化: 和01背包一样,
int kSum2(vector<int> A, int k, int target) {
    int n = A.size();
    vector<vector<int>> f(k+1, vector<int>(target+1, 0));
    f[0][0] = 1;
    for(int i = 0; i < n; i++)
        for(int t = k; t > 0; t--)
            for(int j = target; j >= A[i]; j--)
                f[t][j] += f[t-1][j-A[i]];
    return f[k][target];
}

int main(){
    return 0;
}
*/
