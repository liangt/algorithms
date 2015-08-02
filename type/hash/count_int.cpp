/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 11;
const int EMPTY = -1;
int hash_array[N], ct[N];

void insert(int k){
    int j;
    for(int i=0; i<N; i++){
        j = (k + i) % N;
         if(hash_array[j] == k)
            break;
        if(hash_array[j] == EMPTY){
            hash_array[j] = k;
            break;
        }
    }
}

int find(int k){
    int j;
    for(int i=0; i<N; i++){
        j = (k + i) % N;
        if(hash_array[j] == k)
            return j;
    }
}

int main(){
    srand(time(0));
    int n = 10000, a[10000], s, e, t;
    for(int i=0; i<8; i++){
        s = i * 1250;
        e = s + 1250;
        t = rand();
        for(int j=s; j<e; j++)
            a[j] = t;
    }
    random_shuffle(a, a+n);

    memset(hash_array, -1, sizeof(hash_array));
    for(int i=0; i<n; i++)
        insert(a[i]);
    t = 0;
    for(int i=0; i<N; i++)
        if(hash_array[i] != -1)
            t++;
    cout<<t<<endl;


    int i, c, ms=0, me=0, mn=n;
    c = 3 * t;
    t = 0, s = 0;
    for(e=0; e<n; e++){
        i = find(a[e]);
        ct[i]++;
        if(ct[i] > 3){
            if(a[s] == a[e]){
                while(ct[i] > 3){
                    ct[i]--;
                    s++;
                    i = find(a[s]);
                }
            }
        }
        else
            t++;
        if(t == c){
            i = e - s + 1;
            if(i < mn){
                mn = i;
                ms = s;
                me = e;
            }
        }
    }
    cout<<ms<<" "<<me<<" "<<mn<<endl;
    for(i=ms; i<=me; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/
