/*
#include <iostream>
using namespace std;

void rotate1(int *a, int n, int k){
    k %= n;
    int i = 0, m = k, j = k, tp;
    while(1){
        while(i < m && j < n){
            tp = a[i];
            a[i] = a[j];
            a[j] = tp;
            i++, j++;
        }
        if(i == m){
            if(j == n)
                break;
            else
                m = j;
        }
        else
            j = m;
    }
}

void rotate2(int *a, int n, int k){
    k %= n;
    int i = 0, j = k - 1, tp;
    while(i < j){
        tp = a[i];
        a[i] = a[j];
        a[j] = tp;
        i++, j--;
    }
    i = k, j = n - 1;
    while(i < j){
        tp = a[i];
        a[i] = a[j];
        a[j] = tp;
        i++, j--;
    }
    i = 0, j = n - 1;
    while(i < j){
        tp = a[i];
        a[i] = a[j];
        a[j] = tp;
        i++, j--;
    }
}

int gcd1(int a, int b){
    if(b == 0)
        return a;
    return gcd1(b, a%b);
}

int gcd2(int a, int b){
    int tp;
    while(b){
        tp = b;
        b = a % b;
        a = tp;
    }
    return a;
}

void rotate3(int *a, int n, int k){
    k %= n;
    int d = gcd2(n, k);
    int s, tp, c;
    for(int i = 0; i < d; i++){
        tp = a[i];
        s = i;
        c = (s + k) % n;
        while(c != i){
            a[s] = a[c];
            s = c;
            c = (s + k) % n;
        }
        a[s] = tp;
    }
}

int main(){
    int a[]{1, 2, 3, 4, 5, 6, 7, 8};
    rotate3(a, 8, 3);
    for(int i = 0; i < 8; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/
