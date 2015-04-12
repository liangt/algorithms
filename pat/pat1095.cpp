/*
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 10002;
struct node{
    string num;
    int h,  s;
};
node nd[N];
map<string, int> mp;
vector<node> vt;

bool cmp(node a, node b){
    if(a.num < b.num)
        return true;
    else if(a.num == b.num && a.h < b.h)
        return true;
    else
        return false;
}

bool cmp2(node a, node b){
    if(a.h < b.h)
        return true;
    else if(a.h == b.h && a.num < b.num)
        return true;
    else
        return false;
}

bool cmp3(int k, node a){
        return k<a.h;
}

int main(){
    int n, k, h, m, s;
    char st[4], st1[8];
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++){
            scanf("%s %d:%d:%d %s", st1, &h, &m, &s, st);
            nd[i].num = st1;
            nd[i].h = h * 3600 + m * 60 + s;
            if(strcmp(st, "in") == 0)
                nd[i].s = 1;
            else
                nd[i].s = 0;
    }

    // 去掉不匹配的in和out
    sort(nd, nd+n, cmp);
    node tmp;
    tmp.num = "";
    tmp.h = -1;
    int ms = 0;
    for(int i=0; i<n; i++){
        if(nd[i].num != tmp.num){
                tmp.num = nd[i].num;
                tmp.h = -1;
        }
        if(nd[i].s)   // in
            tmp.h = nd[i].h;
        else if(tmp.h > -1){  // out
            tmp.s = nd[i].h;
            vt.push_back(tmp);
            mp[tmp.num] += tmp.s - tmp.h;
            if(mp[tmp.num] > ms)
                ms = mp[tmp.num];
            tmp.num = "";
            tmp.h = -1;
        }
    }

    sort(vt.begin(), vt.end(), cmp2);    // 按开始时间排序

    // 处理每一个查询
    vector<node>::iterator it1, it2 = vt.begin();
    int res;
    while(k--){
        scanf("%d:%d:%d", &h, &m, &s);
        h = h * 3600 + m * 60 + s;
        it2 = upper_bound(it2, vt.end(), h, cmp3);
        it1 = vt.begin();
        res = 0;
        while(it1 != it2){
            if(it1->s > h)
                res++;
            it1++;
        }
        printf("%d\n", res);
    }
    map<string, int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
        if(it->second == ms)
            cout<<it->first<<" ";
    printf("%02d:%02d:%02d\n", ms/3600, (ms%3600)/60, ms%60);
    return 0;
}
*/
