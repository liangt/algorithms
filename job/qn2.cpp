/*
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n, tmp;
    map<int, int> num;
    vector<int> ans;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        num[tmp]++;
    }
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        num[tmp]++;
    }
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        num[tmp]++;
    }
    map<int, int>::iterator it;
    for(it = num.begin(); it != num.end(); it++)
        if(it->second == 3)
            ans.push_back(it->first);
    n = ans.size() - 1;
    for(int i = 0; i < n; i++)
        cout<<ans[i]<<' ';
    cout<<ans[n]<<endl;
    return 0;
}
*/
