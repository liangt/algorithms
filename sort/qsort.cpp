/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <algorithm>
using namespace std;

void qsort(int* a, int s, int e){
    if(s >= e)
        return;
    int m = (s + e)  >> 1;
    swap(a[m], a[e]);
    m = a[e];
    int i = s -1, j = e;
    while(i < j){
        while(i<e && a[++i]<=m);
        while(j>s && a[--j]>=m);
        if(i < j)
            swap(a[i], a[j]);
    }
    swap(a[i], a[e]);
    qsort(a, s, j);
    qsort(a, i+1, e);
}

void qsort2(int* a, int n){
    if(n <= 1 )
        return;
    stack<int> st;
    st.push(0);
    st.push(n-1);
    int s, e, m, i, j;
    while(!st.empty()){
        e = st.top();
        st.pop();
        s = st.top();
        st.pop();
        m = (s + e) >> 1;
        swap(a[m], a[e]);
        m = a[e];
        i = s-1, j = e;
        while(i < j){
            while(i<e && a[++i]<=m);
            while(j>s && a[--j]>=m);
            if(i < j)
                swap(a[i], a[j]);
        }
        swap(a[i], a[e]);
        i++;
        if(i < e){
            st.push(i);
            st.push(e);
        }
        if(s < j){
            st.push(s);
            st.push(j);
        }
    }
}

int main(){
    srand(time(0));
    const int n = 10;
    int a[n];
    for(int i=0; i<n; i++)
        a[i] = rand() % 100;
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    //qsort(a, 0, n-1);
    qsort2(a, n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/
