/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct linux{
    int mj;
    int mn;
    int pl;
    linux(int mj, int mn, int pl):mj(mj), mn(mn), pl(pl){}
    bool operator<(const linux &other) const{
        if(mj > other.mj)
            return true;
        else if(mj == other.mj && mn > other.mn)
            return true;
        else if(mj == other.mj && mn == other.mn && pl > other.pl)
            return true;
        else
            return false;
    }
};

int main(){
    int n, major, minor, patch, m, j;
    vector<linux> lnx;
    string in;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>in;
        major = 0;
        m = in.size();
        j = 0;
        while(in[j] != '.'){
            major = major * 10 + (in[j] - '0');
            j++;
        }
        j++;
        minor = 0;
         while(in[j] != '.' && j < m){
            minor = minor * 10 + (in[j] - '0');
            j++;
        }
        if(minor & 1)
            continue;
        patch = 0;
        while(j < m){
            patch = patch * 10 + (in[j] - '0');
            j++;
        }
        lnx.push_back(linux(major, minor, patch));
    }
    if(lnx.size() == 0)
        cout<<"no stable available"<<endl;
    else{
        sort(lnx.begin(), lnx.end());
        cout<<lnx[0].mj<<'.'<<lnx[0].mn;
        if(lnx[0].pl == 0)
            cout<<endl;
        else
            cout<<'.'<<lnx[0].pl<<endl;
    }

    return 0;
}
*/
