/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N  = 8;
int heap[N], n;

void build_heap(){
    int l, r, j, t=n/2-1;
    for(int i=t; i>=0; i--){
        j = i;
        while(j <= t){
            l = 2 * j + 1;
            r = l + 1;
            if(r<n && heap[l] > heap[r])
                l = r;
            if(heap[j] > heap[l]){
                r = heap[l];
                heap[l] = heap[j];
                heap[j] = r;
                j = l;
            }
            else
                break;
        }
    }
}

int popHeap(){
    if(n == 0)
        return -1;
    n--;
    int ans = heap[0];
    heap[0] = heap[n];
    int e = n / 2, s = 0, l, r;
    while(s < e){
        l = 2 * s + 1;
        r = l + 1;
        if(r < n && heap[l] > heap[r])
            l = r;
        if(heap[s] > heap[l]){
            r = heap[l];
            heap[l] = heap[s];
            heap[s] = r;
            s = l;
        }
        else
            break;
    }
    return ans;
}

int main(){
    srand(time(0));
    n = N;
    for(int i=0; i<n; i++){
         heap[i] = rand() % 200 + 56;
         cout<<heap[i]<<" ";
    }
    cout<<endl;

    build_heap();

    for(int i=0; i<n; i++)
         cout<<heap[i]<<" ";
    cout<<endl;

    popHeap();
    for(int i=0; i<n; i++)
         cout<<heap[i]<<" ";
    cout<<endl;

    return 0;
}
*/
