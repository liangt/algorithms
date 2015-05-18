/*
#include <iostream>
using namespace std;

// Binary Index Tree 树状数组
// 主要完成如下操作:
//  (1) 给定i,计算前i项的和
//  (2) 给定i和v，给第i项增加v
const int N = 20;
int bit[N+1], n;

int sum(int i){
    int s = 0;
    while(i > 0){
        s += bit[i];
        i -= i & -i;   // i&-i = i&(i-1)
    }
    return s;
}

int add(int i, int v){
    while(i < n){
        bit[i] += v;
        i  += i & -i;
    }
}

int main(){
	return 0;
}
*/
