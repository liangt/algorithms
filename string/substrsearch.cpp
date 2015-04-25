/*
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

// 暴力最坏情况下的时间复杂度是O(MN)
// 最坏情况就是在重复性很高的文本中查找重复性很高的模式子串 ，如aaaaaaaaab中查找aaaaab
// 实际应用中这种情况出现的概率并不太大，所以暴力法仍然是广泛使用的有效算法
int  bf1(string s, string p){
    int n1 = s.size();
    int n2 = p.size();
    int j;
    for(int i=0; i<=n1-n2; i++){
            for(j=0; j<n2; j++)
                if(s[i+j] != p[j])
                    break;
            if(j == n2)
                return i;
    }
    return -1;
}

int  bf2(string s, string p){
    int i, j, n1, n2;
    n1 = s.size();
    n2 = p.size();
    for(i=0, j=0; j<n2 && i<n1; i++)
        if(s[i] == p[j])
            j++;
        else{    // 不匹配，回溯
            i -= j;
            j = 0;
        }
    if(j == n2)
        return i-j;
    return -1;
}

// KMP
// 暴力解法中每次不匹配时，i和j都要回溯，能不能通过给j赋值而避免i的回溯呢？
// 这正是KMP的出发点，也是其精髓所在
// 虽然最坏情况下时间复杂度是线性的
// 方法一： 用DFA模拟
// dfa[R][M] R为字母表的大小， M为模式子串的长度
// 简单起见，假定字符串均由小写字母组成，模式子串的长度不超过20
int dfa[26][20];
int kmp1(string s, string p){
    // 处理模式子串， 构造DFA
    for(int i=0; i<26; i++)
        dfa[i][0] = 0;
    dfa[p[0]-'a'][0] = 1;
    int np=p.size(), pre = 0, tmp;
    for(int i=1; i<np; i++){
        for(int j=0; j<26; j++)
            dfa[j][i] = dfa[j][pre];
        tmp = p[i] - 'a';
        dfa[tmp][i] = i + 1;
        pre = dfa[tmp][pre];
    }

    // 查找模式子串
    int ns=s.size();
    pre = 0;
    for(int i=0; i<ns; i++){
        pre = dfa[s[i]-'a'][pre];
        if(pre == np)
            return i+1-pre;
    }
    return -1;
}

// 方法二:  边界数组
//DFA模拟的一个主要问题是空间的消耗，一个改进便是采用边界数组，即DFA中每次nxt的值组成的数组
// 这样额外的空间消耗降为O(N)，当然需要付出一点时间代价(主要是查找过程)，当然最坏情况下算法的时间复杂度依然是线性的
int bound[21];
int kmp2(string s, string p){
    // 计算边界数组
    int np=p.size(), pre=0;
    bound[0] = bound[1] = 0;
    for(int i=1; i<np; i++){
        while(pre && p[pre]!=p[i])
                pre= bound[pre];
        if(p[pre] == p[i])
            pre++;
        bound[i+1] = pre;
    }

    // 查找模式子串
    int ns=s.size();
    pre = 0;
    for(int i=0; i<ns; i++){
        while(pre && s[i]!=p[pre])
            pre = bound[pre];
        if(s[i] == p[pre])
            pre++;
        if(pre == np)
            return i+1-pre;
    }
    return -1;
}

// Boyer-Moore
// 根据字符串构造一张每个字符在模式中的出现的最右边位置的表格
// 从右向左扫描模式字符串，并在匹配失败时通过跳跃将文本中的字符和它在模式字符串中出现的最右位置对齐
int rights[26];
int boyerMoore(string s, string p){
    int ns=s.size(), np=p.size();
    // 构造rights数组
    memset(rights, -1, sizeof(rights));
    for(int i=0; i<np; i++)
        rights[p[i]-'0'] = i;

    // 查找模式子串
    int skip;
    for(int i=0; i<=ns-np; i+=skip){
        skip = 0;
        for(int j=np-1; j>=0; j--)
            if(s[i+j] != p[j]){
                skip = j - rights[s[i+j]-'0'];
                if(skip < 1)
                    skip = 1;
                break;
            }
        if(skip == 0)
            return i;
    }
    return -1;
}

// Rabin-Karp
// 将长度为M的字符串看成是基为R的数，将其转换成0---Q-1之间的数
// 分别计算模式子串的散列值和文本串中所有M长连续子串的散列值
// 当它们散列值相等时，只要Q取得适当，如很大的素数，它们相等的概率几乎为1
// 当然，也可以当它们散列值相等时，再逐字符检查它们是否相等
int rabinKarp(string s, string p){
    int ns=s.size(), np=p.size();
    const int Q = 999983;
    const int R = 256;
    int RM=1, ph=p[0], sh=s[0];
    for(int i=1; i<np; i++){
        RM = (RM * R) % Q;
        ph = (ph * R + p[i]) % Q;
        sh = (sh * R + s[i]) % Q;
    }

    if(ph == sh)
        return 0;
    for(int i=np; i<ns; i++){
        sh = (sh + Q - s[i-np]*RM%Q) % Q;
        sh = (sh * R + s[i]) % Q;
        if(ph == sh)
            return i-np+1;
    }
    return  -1;
}

int main(){
    int ns, np, tmp;
    clock_t st, et;
    cout<<"General Case Test"<<endl;
    for(int i=1; i<=10; i++){
        cout<<"Test "<<i<<":"<<endl;
        string s="",p="";
        ns = rand() % 999999 + 1;
        for(int j=0; j<ns; j++)
            s += rand() % 26 + 'a';
        np = rand() % 19 + 1;
        for(int j=0; j<np; j++)
            p += rand() % 26 + 'a';
        st = clock();
        tmp = bf1(s, p);
        et = clock();
        cout<<"bf1:  "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = bf2(s, p);
        et = clock();
        cout<<"bf2:  "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = kmp1(s, p);
        et = clock();
        cout<<"kmp1: "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = kmp2(s, p);
        et = clock();
        cout<<"kmp2: "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = boyerMoore(s, p);
        et = clock();
        cout<<"boyerMoore: "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = rabinKarp(s, p);
        et = clock();
        cout<<"rabinKarp: "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        cout<<endl;
    }

    cout<<endl<<"Worst Case Test"<<endl;
    for(int i=1; i<=10; i++){
        cout<<"Test "<<i<<":"<<endl;
        ns = rand() % 999998 + 1;
        np = rand() % 18 + 1;
         string s(ns, 'a'), p(np, 'a');
         s += 'b';
         p += 'b';
        st = clock();
        tmp = bf1(s, p);
        et = clock();
        cout<<"bf1:  "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = bf2(s, p);
        et = clock();
        cout<<"bf2:  "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = kmp1(s, p);
        et = clock();
        cout<<"kmp1: "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = kmp2(s, p);
        et = clock();
        cout<<"kmp2: "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = boyerMoore(s, p);
        et = clock();
        cout<<"boyerMoore: "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        st = clock();
        tmp = rabinKarp(s, p);
        et = clock();
        cout<<"rabinKarp: "<<tmp<<" "<<double(et-st) / CLOCKS_PER_SEC<<endl;
        cout<<endl;
    }
    return 0;
}
*/
