/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N =11;
struct node{
    int val;
    node* next;
    node(int v): val(v), next(NULL){}
};
node* hash_array[N];

void insert(int k){
    int j = k % N;
    if(hash_array[j] == NULL)
        hash_array[j] = new node(k);
    else{
        node* tmp = hash_array[j];
        hash_array[j] = new node(k);
        hash_array[j]->next = tmp;
    }
}

node* find(int k){
    int j = k % N;
    node* tmp = hash_array[j];
    while(tmp != NULL){
        if(tmp->val == k)
            return tmp;
        tmp = tmp->next;
    }
    return NULL;
}

int main(){
    srand(time(0));
    const int n = 100;
    int a[n];
    for(int i=0; i<n; i++){
        a[i] = rand() % 10000;
        insert(a[i]);
    }

    node* tmp;
    for(int i=0; i<N; i++){
        tmp = hash_array[i];
        while(tmp != NULL){
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }
    return 0;
}
*/
