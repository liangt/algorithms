/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Output Limit Exceeded
vector<vector<int> > threeSum1(vector<int> &num) {
    sort(num.begin(), num.end());
    int n = num.size();
    vector<vector<int> > ans;
    if(n<3 || num[0]>0 || num[n-1]<0)
        return ans;
    vector<int>::iterator nn = lower_bound(num.begin(), num.end(), 0);
    vector<int>::iterator np = upper_bound(num.begin(), num.end(), 0);
    vector<int>::iterator nt;
    vector<int> tmp(3);
    if(np-nn>=3){
        tmp[0] = 0;  tmp[1] = 0;  tmp[2] = 0;
        ans.push_back(tmp);
    }
    for(vector<int>::iterator i=num.begin(); i<nn; i++){
        if(i!=num.begin() && *i==*(i-1))
                continue;
        for(vector<int>::iterator j=np; j<num.end(); j++){
                n =  -(*i+*j);
                nt = lower_bound(i+1, j, n);
                if(*nt == n){
                    tmp[0] = *i;  tmp[1] = *nt;  tmp[2] = *j;
                    ans.push_back(tmp);
                }
        }
    }
    return  ans;
}

// Time Limit Exceeded
vector<vector<int> > threeSum2(vector<int> &num) {
    sort(num.begin(), num.end());
    int n = num.size();
    vector<vector<int> > ans;
    if(n<3 || num[0]>0 || num[n-1]<0)
        return ans;
    vector<int>::iterator nn = lower_bound(num.begin(), num.end(), 0);
    vector<int>::iterator np = upper_bound(num.begin(), num.end(), 0);
    vector<int>::iterator nt;
    vector<int> tmp(3);
    if(np-nn>=3){
        tmp[0] = 0;  tmp[1] = 0;  tmp[2] = 0;
        ans.push_back(tmp);
    }
    for(vector<int>::iterator i=num.begin(); i<nn; i++){
        if(i!=num.begin() && *i==*(i-1))
                continue;
        for(vector<int>::iterator j=np; j<num.end(); j++){
                n =  -(*i+*j);
                if(n < 0)
                    nt = lower_bound(i+1, nn, n);
                else
                    nt = lower_bound(nn, j, n);
                if(*nt == n){
                    tmp[0] = *i;  tmp[1] = *nt;  tmp[2] = *j;
                    ans.push_back(tmp);
                }
        }
    }
    sort(ans.begin(), ans.end());
    return  vector<vector<int> >(ans.begin(), unique(ans.begin(), ans.end()));
}

// Accept
vector<vector<int> > threeSum(vector<int> &num) {
    sort(num.begin(), num.end());
    int n = num.size();
    vector<vector<int> > ans;
    if(n<3 || num[0]>0 || num[n-1]<0)
        return ans;
    int s, e, ts, t;
    vector<int> tmp(3);
    for(int i=0; i<n; i++){
        if(num[i] > 0)
            break;
        if(i && num[i]==num[i-1])
            continue;
        s = ts = i + 1;
        e =n - 1;
        while(s < e){
            if(s>ts && num[s]==num[s-1]){
                s++;
                continue;
            }
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
