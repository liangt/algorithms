/*
#include <iostream>
#include <string>
using namespace std;

const int NP = 20;
const int NS = 100;
int pn[NP], sn[NS];

// pn[i]表示模式串中从第i个字符开始的真后缀子串与模式串的最长公共前缀的长度(即i从1开始)
// sn[i]表示串中从第i个字符开始的子串与模式串的最长公共前缀的长度
//    显然但sn[i]等于模式串的长度时，即表示一次匹配
//    以计算pn[i]为例，假设k是0-i-1中i+pn[i]最大下标，则有如下情形：
//  (1) k+pn[k] <= i, 这种情形很简单，直接从从开头逐一匹配 0-i, 1-(i+1), ....
//  (2) k+pn[k] > i, 与i对应的t=i-k (0-k, 1-(k+1), ...)
//                  从t的角度，对应关系: 0-t-i, 1-(t+1)-(i+1), ..., pn[t]-(t+pn[t])-(i+pn[t])
//                  从k的角度，对应关系: 0-t-i, 1-(t+1)-(i+1), ..., (pn[k]-t)-(pn[k])-(k+pn[k])
//      (1) t+pn[t] < pn[k],即: pn[t] < pn[k]-t,此时，pn[t]+1 != t+pn[t]+1 (从t的角度),而t+pn[t]+1 = i+pn[t]+1(从k的角度)，
//                            故， pn[t]+1 != i+pn[t]+1， 即 pn[i] = pn[t], 此时最大值仍是k
//      (2) t+pn[t] >= pn[k],即: pn[t] >= pn[k]-t,此时从t的角度,我们至少可以得到pn[t]=i+pn[t],即pn[i]>=pn[k]-i，此后再逐个匹配后面的字符
//   当然，其实我们可以将情形(1)归结到情形(2)的第二种情况，因为k+pn[k]<i,即pn[k]<i-k=t,而pn[t]>=0,所以pn[t]>=0>pn[k]-t，并且它们还有一个共同点便是k会更新
int extendkmp(string s, string p){
    int j=1, ns=s.size(), np=p.size();
    // 处理模式串
    pn[0] = 0;
    while(j<np && p[j-1]==p[j])
        j++;
    pn[1] = j - 1;
    int k=1,t;
    for(int i=2; i<np; i++){
        if(k + pn[k] <= i){  // 情形(1), 从头开始匹配
            j = i;
            while(j<np && p[j-i]==p[j])
                j++;
            pn[i] = j - i;
            k = i;
        }
        else{ // k + pn[k] > i  情形(2)
            t = i - k;
            if(t+pn[t] < pn[k])    // 情形(2)的第一情况
                pn[i] = pn[t];
            else{   // 情形(2)的第二情况
                j = k+pn[k];
                while(j<np && p[j-i]==p[j])
                    j++;
                pn[i] = j - i;
                k = i;
            }
        }
    }

    // 处理串
    j = 0;
    while(j<np && j<ns && p[j]==s[j])
        j++;
    sn[0] = j;
    k = 0;
    for(int i=1; i<ns; i++){
        if( k + sn[k] <= i){
            j = i;
            while(j<ns && j-i<np && p[j-i]==s[j])
                j++;
            sn[i] = j - i;
            k = i;
        }
        else{
            t = i - k;
            if(t+pn[t] < sn[k])
                sn[i] = pn[t];
            else{
                j = k+sn[k];
                while(j<ns && j-i<np && p[j-i]==s[j])
                    j++;
                sn[i] = j - i;
                k = i;
            }
        }
    }
    // 返回匹配的子串数
    //int ans = 0;
   // for(int i=0; i<ns; i++)
  //   if(sn[i] == np)
    //        ans++;
   // return ans;

    // 返回第一个匹配的子串的起始下标
    for(int i=0; i<ns; i++)
        if(sn[i] == np)
            return i;
    return -1;   //没有匹配的子串返回-1
}

// 上面的实现比较看上去比较繁琐，如果将第一种情形与第二种情形的第二种情况合并，可以得到简洁的实现
int extendkmp2(string s, string p){
    int j=1, ns=s.size(), np=p.size();
    // 处理模式串
    pn[0] = 0;
    while(j<np && p[j-1]==p[j])
        j++;
    pn[1] = j - 1;
    int k=1,t;
    for(int i=2; i<np; i++){
        t = i - k;
        if(t+pn[t] < pn[k])
            pn[i] = pn[t];
        else{
            //j = max(k+pn[k], i);
            j = k + pn[k];
            if(j < i)
                j = i;
            while(j<np && p[j-i]==p[j])
                j++;
            pn[i] = j - i;
            k = i;
        }
    }

    // 处理串
    j = 0;
    while(j<np && j<ns && p[j]==s[j])
        j++;
    sn[0] = j;
    k = 0;
    for(int i=1; i<ns; i++){
        t = i - k;
        if(t+pn[t] < sn[k])
            sn[i] = pn[t];
        else{
            //j = max(k+sn[k], i);
            j = k + sn[k];
            if(j < i)
                j = i;
            while(j<ns && j-i<np && p[j-i]==s[j])
                j++;
            sn[i] = j - i;
            k = i;
        }
    }

    // 返回第一个匹配的子串的起始下标
    for(int i=0; i<ns; i++)
        if(sn[i] == np)
            return i;
    return -1;   //没有匹配的子串返回-1
}

int main(){
    string s, p;
    while(cin>>s>>p)
        cout<<extendkmp2(s, p)<<endl;
	return 0;
}
*/
