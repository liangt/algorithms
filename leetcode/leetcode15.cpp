/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int> &num, int target){
    sort(num.begin(), num.end());
    int n = num.size();
    vector<vector<int> > ans;
    int s, e, ts, te, t;
    vector<int> tmp(3);
    for(int i=0; i<n; i++){
        if(num[i] > 0)
            break;
        if(i && num[i]==num[i-1])
            continue;
        s = ts = i + 1;
        e = te = n - 1;
        while(s < e){
            while(s<e && s>ts && num[s]==num[s-1])
                s++;
            while(s<e && e<te  &&  num[e]==num[e+1])
                e--;
            if(s==e || num[e] < 0)
                break;
            t = num[s] + num[e] + num[i];
            if(t > 0)
                e--;
            else if(t < 0)
                s++;
            else{
                tmp[0] = num[i];
                tmp[1] = num[s];
                tmp[2] = num[e];
                ans.push_back(tmp);
                s++;
                e--;
            }
        }
    }
    return  ans;
}

int main(){
    //int s[] = {-2,0,0,2,2};
    //int s[] = {-2,0,1,1,2};
    int s[] = {-1,-1,-1,0,1,1};
    vector<int> num(s, s+5);
    vector<vector<int> > ans = threeSum(num);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<3; j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
*/
