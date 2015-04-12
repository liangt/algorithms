/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

const int N = 10;
int a[N], k;

int fd(){
    int m, s, e;
    s = 0;
    e =  N - 1;
    while(s <= e){
        m = (s + e) >> 1;
        if(a[m] == k)
            return m;
        else if(a[m] > k)
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;
}

int lb(){
    int m, s = 0, e = N;
    while(s < e){
        m = (s + e) >> 1;
        if(a[m] >= k)
            e = m;
        else
            s = m  + 1;
    }
    return e;
}

int ub(){
    int m, s = 0, e = N;
    while(s < e){
        m = (s + e) >> 1;
        if(a[m] > k)
            e = m;
        else
            s = m  + 1;
    }
    return e;
}

int main(){
    srand(time(0));
    for(int i=0; i<N; i++)
        a[i] = rand() % 100;
    k = rand() % 100 ;
    sort(a, a+N);
    for(int i=0; i<N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<k<<endl;
    cout<<ub()<<endl;
    return 0;
}

int k, n;
int a[100], b[100];
bool  dfs(int i, int j){
    if(j == k)
        return true;
    if(i == n || j > k)
        return false;
    int tp = j, ct = 0;
    while(tp <= k && ct <= b[i]){
        if(dfs(i+1, tp))
            return true;
        tp += a[i];
        ct++;
    }
    return false;
}

void ff(){
    for(int i=0; i<n; i++)
        b[i] = 1;
    for(int i=1; i<n; i++)
        for(int j=0; j<i; j++)
            if(a[i] > a[j] && b[i] < b[j] + 1)
                b[i] = b[j] + 1;
    cout<<b[n-1]<<endl;
}


int a[10], n;

void sift_up(int i){
    int j;
    while(i){
            j = (i - 1) / 2;
            if(a[i] >= a[j])
                break;
            swap(a[i], a[j]);
            i = j;
    }
}

void sift_down(int i){
    int j;
    while(2*i+1 < n){
            j = 2 * i + 1;
            if(j+1 < n && a[j] > a[j+1])
                j++;
            if(a[i] <= a[j])
                break;
            swap(a[i], a[j]);
            i = j;
    }
}

void build_heap(){
    for(int i=n-1; i>0; i--)
        sift_up(i);
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    build_heap();
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
*/
