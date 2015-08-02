/*
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 10008;
const int M = 1230;
int hash_array[N], primes[M], n, m;

void isPrime(){
    for(int i=2; i<N; i++)
        hash_array[i] = 1;
    int j = 0;
    for(int i=2; i<N; i++)
        if(hash_array[i]){
            primes[j++] = i;
            for(int j=i+i; j<N; j+=i)
                if(hash_array[j])
                    hash_array[j] = 0;
        }
}

int binary_find(int k){
    int s = -1, e = M, m;
    while(s + 1< e){
        m = (s + e) >> 1;
        if(primes[m] < k)
            s = m;
        else
            e = m;
    }
    return e;
}

int insert(int k){
    int j;
    for(int i=0; i<m; i++){
        j = (k + i * i) % m;
        if(hash_array[j] == -1){
            hash_array[j] = k;
            return j;
        }
    }
    return -1;
}

int main(){
    isPrime();
    cin>>m>>n;
    m = primes[binary_find(m)];
    memset(hash_array, -1, sizeof(hash_array));
    int i, j;
    while(n--){
        cin>>i;
        j = insert(i);
        if(j == -1)
            cout<<'-';
        else
            cout<<j;
        if(n)
            cout<<' ';
        else
            cout<<endl;
    }
    return 0;
}
*/
