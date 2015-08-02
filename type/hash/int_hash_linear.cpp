/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N = 11;
const int EMPTY = -1;
const int DELETE = -2;
int hash_array[N];

bool insert(int k){
    int j;
    for(int i=0; i<N; i++){
        j = (k + i) % N;
        if(hash_array[j] == EMPTY || hash_array[j] == DELETE){
            hash_array[j] =k;
            return true;
        }
    }
    return false;
}

int find(int k){
    int j;
    for(int i=0; i<N; i++){
        j = (k + i) % N;
        if(hash_array[j] == k)
            return j;
        if(hash_array[j] == EMPTY)
            return -1;
    }
    return -1;
}

bool delete_ele(int k){
    int j = find(k);
    if(j == -1)
        return false;
    hash_array[j] = DELETE;
    return true;
}

int main(){
    for(int i=0; i<N; i++)
        hash_array[i] = EMPTY;
    int a[10];
    srand(time(0));
    cout<<"Origin: "<<endl;
    for(int i=0; i<10; i++){
        a[i] = rand() % 97;
        cout<<a[i]<<" ";
        insert(a[i]);
    }
    cout<<endl;
    cout<<"Hash_array: "<<endl;
    for(int i=0; i<N; i++)
        cout<<hash_array[i]<<" ";
    cout<<endl;
    return 0;
}
*/
