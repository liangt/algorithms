/*
#include <iostream>
using namespace std;

void rotate1(int *a, int n, int m){
    m = m % n;
    int i = 0, j = m, tmp;
    while(1){
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j++;
        if(i == m){
            if(j == n)
                break;
            m = j;
        }
        else if(j == n)
            j = m;
    }
}

void rotate2(int *a, int n, int m){
    m = m % n;
    int i = 0, j = m - 1, tmp;
    while(i < j){
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++, j--;
    }
    i = m, j = n - 1;
    while(i < j){
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++, j--;
    }
    i = 0, j = n - 1;
    while(i < j){
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++, j--;
    }
}

int gcd(int n, int m){
    return m == 0 ? n : gcd(m, n%m);
}

void rotate3(int *a, int n, int m){
    m = m % n;
    int g = gcd(n, m), i, j, tmp;
    while(g--){
        i = g;
        tmp = a[i];
        j = i + m;
        while(j != g){
            a[i] = a[j];
            i = j;
            j += m;
            if(j >= n)
                j -= n;
        }
        a[i] = tmp;
    }
}

int main(){
    int a[]{1, 2, 3, 4, 5, 6, 7};
    rotate3(a, 7, 3);
    for(auto x: a)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
*/
