/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int part1(int* a, int n){
    int s = -1, e = n-1;
    int k = a[e];
    while(s < e){
        while(++s < e && a[s] <= k);
        while(--e > s && a[e] >= k);
        if(s < e)
            swap(a[s], a[e]);
    }
    swap(a[s], a[n-1]);
    return s;  // sΪ֧���λ��
}

int part2(int* a, int n, int k){
    int s = -1, e = n;
    while(s < e){
        while(++s < e && a[s] <= k);
        while(--e > s && a[e] > k);
        if(s < e)
            swap(a[s], a[e]);
    }
   return s;  // sΪ��һ������k��λ��
}

int part3(int* a, int n, int k){
    int i = -1;
    while(++i<n && a[i] <= k); // iΪ��һ������k��λ��
    for(int j=i+1; j<n; j++){
        if(a[j] <= k){
            swap(a[i], a[j]);
            i++;
        }
    }
    return i; // iΪ��һ������k��λ��
}

int main(){
    int a[10];
    srand(time(0));
    for(int i=0; i<10; i++)
        a[i] = rand() % 100;
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int k;
    cin>>k;
    cout<<part3(a, 10, k)<<endl;
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/
