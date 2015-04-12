/*
#include <iostream>
using namespace std;

struct node{
    int val;
    node* next;
    node(int v): val(v), next(NULL){}
};

node* reverseList(node* root){
    if(root==NULL|| root->next==NULL)
        return root;
    node* nroot = NULL, *tmp;
    while(root != NULL){
        tmp = root->next;
        root->next = nroot;
        nroot = root;
        root = tmp;
    }
    return nroot;
}

node* reverseOddAndEvenNode(node* root){
    if(root==NULL|| root->next==NULL)
        return root;
    node* nroot = new node(0);
    nroot->next = root;
    node* pre=nroot, *tmp;
    while(root != NULL){
        tmp = root->next;
        pre->next = tmp;
        root->next = tmp->next;
        tmp->next = root;
        pre = root;
        root = root->next;
    }
    return nroot->next;
}

int main(){
    int a[] = {2, 3, 4, 5, 6};
    node* root = new node(1);
    node* tmp = root;
    for(int i=0; i<5; i++){
        tmp->next = new node(a[i]);
        tmp = tmp->next;
    }
    tmp = root;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    root = reverseList(root);
    tmp = root;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    root = reverseOddAndEvenNode(root);
    tmp = root;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    return 0;
}
*/
