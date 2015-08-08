#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N = 10;
int a[N];

int solution(){
    // 一种解方案：每次将最大的元素翻转到对应的位置
    // 不一定是最优的，但可以作为最优解的一个上界
    int c = 0, m, t, j;
    for(int i=N-1; i>0; i--){
        m = i;
        for(j=i-1; j>=0; j--)
            if(a[m] < a[j])
                m = j;
        if(m == i)
            continue;
        j = 0;
        while(j < m){
            t = a[j];
            a[j] = a[m];
            a[m] = t;
            j++;
            m--;
        }
        j = 0;
        m = i;
         while(j < m){
            t = a[j];
            a[j] = a[m];
            a[m] = t;
            j++;
            m--;
        }
        c += 2;
    }
    return c;
}

// 枚举所有翻转情况，求最优的结果


int main(){
    srand(time(0));
    for(int i=0; i<N; i++)
        a[i] = rand() % 1000;
    for(int i=0; i<N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int c = solution();
    for(int i=0; i<N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<c<<endl;
    return 0;
}
