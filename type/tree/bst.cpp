/*
#include <iostream>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
    node(int val):val(val), left(NULL), right(NULL){}
};

node* insert(node* root, int v){
    if(root == NULL){
        root = new node(v);
        return root;
    }
    if(root->val > v)
        root->left = insert(root->left, v);
    else
        root->right = insert(root->right, v);
    return root;
}

node* find(node* root, int v){
    while(root != NULL){
        if(root->val == v)
            return root;
        else if(root->val > v)
            return find(root->left, v);
        else
            return find(root->right, v);
    }
    return NULL;
}

node* findmin(node* root){
    if(root == NULL)
        return NULL;
    while(root->left != NULL)
        root = root->left;
    return root;
}

node* findmax(node* root){
    if(root == NULL)
        return NULL;
    while(root->right != NULL)
        root = root->right;
    return root;
}

node* deletenode(node* root, int v){
    if(root == NULL)
        return NULL;
    if(root->val > v)
        root->left = deletenode(root->left, v);
    else if(root->val < v)
        root->right = deletenode(root->right, v);
    else{
        if(root->right == NULL){
            node* tmp = root->left;
            delete root;
            return tmp;
        }
        if(root->left == NULL){
            node* tmp = root->right;
            delete root;
            return tmp;
        }
        if(root->right->left == NULL){
            node* tmp = root->right;
            tmp->left = root->left;
            delete root;
            return tmp;
        }
        node *pa=root, *tmp=root->right;
        while(tmp->left != NULL){
            root = tmp;
            tmp = tmp->left;
        }
        tmp->left = root->left;
        pa->left = tmp->right;
        tmp->right = root->right;
        delete root;
        return tmp;
    }
    return root;
}

void travel(node* root){
    if(root == NULL)
        return;
    travel(root->left);
    cout<<root->val<<endl;
    travel(root->right);
}

int main(){
    int a[] = {3, 7, 8 , 9 , 1};
    node* root = NULL;
    for(int i=0; i<5; i++)
        root = insert(root, a[i]);
    travel(root);
    cout<<"delete 3: "<<root->val<<endl;
    root = deletenode(root, 3);
    travel(root);
    cout<<"delete 7: "<<root->val<<endl;
    root = deletenode(root, 7);
    travel(root);
    cout<<"delete 1: "<<root->val<<endl;
    root = deletenode(root, 1);
    travel(root);
    return 0;
}
*/
