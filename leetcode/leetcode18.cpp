/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > fourSum(vector<int> &num, int target) {
    int n = num.size();
    vector<vector<int> > ans;
    if(n < 4)
        return ans;
    sort(num.begin(), num.end());
    int c, d, tc, tmp;
    int ta = target >> 2, tb, tc2, ts;
    vector<int> tp(4);
    for(int i=0; i<n; i++){
        if(i && num[i]==num[i-1])
            continue;
        if(num[i]>ta)
            break;
        ts = num[i];
        tb = (target - ts) / 3;
        for(int j=i+1; j<n; j++){
            if(j>i+1 && num[j]==num[j-1])
                continue;
            if(num[j] > tb)
                break;
            ts = num[i] + num[j];
            c = tc = j + 1;
            d = n - 1;
            tc2 = (target - ts) >> 1;
            while(c<d){
                if(c>tc && num[c]==num[c-1]){
                    c++;
                    continue;
                }
                if(num[c] > tc2)
                    break;
                tmp = ts + num[c] + num[d];
                if(tmp < target)
                    c++;
                else if(tmp > target)
                    d--;
                else{
                    tp[0] = num[i];
                    tp[1] = num[j];
                    tp[2] = num[c];
                    tp[3] = num[d];
                    ans.push_back(tp);
                    c++;
                    d--;
                }
            }
        }
    }
    return ans;
}

int main(){
    //int s[] = {-2,0,0,2,2};
    //int s[] = {-2,0,1,1,2};
    int s[] = {1,0,-1,0,-2,2};
    int target = 0;
    vector<int> num(s, s+6);
    vector<vector<int> > ans = fourSum(num, target);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<4; j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
*/
