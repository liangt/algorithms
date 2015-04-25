/*
#include <iostream>
#include <string>
#include <cstdlib>
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
    return n1;
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
    else
        return n1;
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
    return ns;
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
    return ns;
}

// Boyer-Moore
int boyerMoore(string s, string p){
    return -1;
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
        cout<<endl;
    }
    return 0;
}
*/
