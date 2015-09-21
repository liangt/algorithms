/*
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

const int N = 50000;
int pa[N], rk[N];
map<int, int> mp;
map<int, vector<int>> depend;
map<int, bool> ans;

int fd(int x){
    if(pa[x] == 0)
        return x;
    return pa[x] = fd(pa[x]);
}

void un(int a, int b){
    int ra = fd(a);
    int rb = fd(b);
    if(ra == rb){
        ans[ra] = true;
        return;
    }

    if(rk[ra] < rk[rb])
        pa[ra] = rb;
    else if(rk[ra] > rk[rb])
        pa[rb] = ra;
    else{
        pa[ra] = rb;
        rk[rb]++;
    }
}

int main(){
    int tid, tmp, n, t, i, j;
    string in, str1, str2;
    cin>>t;
    while(t--){
        cin>>tid;
        getline(cin, in);
        i = 1;
        while(in[i] != '\t')
            i++;
        str1 = in.substr(1, i-1);
        str2 = in.substr(i+1, in.size()-i);
        n = str1.size();
        if(n > 1){
            i = 0;
            while(i < n){
                j = i;
                tmp = 0;
                while(j<n && str1[j]!=','){
                    tmp = tmp * 10 + (str1[j] - '0');
                    j++;
                }
                mp[tmp] = tid;
                i = j + 1;
            }
        }
        n = str2.size();
        if(n > 1){
            i = 0;
            while(i < n){
                j = i;
                tmp = 0;
                while(j<n && str2[j]!=','){
                    tmp = tmp * 10 + (str2[j] - '0');
                    j++;
                }
                depend[tid].push_back(tmp);
                i = j + 1;
            }
        }
    }
    map<int, vector<int>>::iterator it;
    for(it = depend.begin(); it != depend.end(); it++){
        n = it->second.size();
        for(i = 0; i < n; i++)
            un(it->first, mp[it->second[i]]);
    }
    cout<<ans.size()<<endl;
    return 0;
}
*/
