/*
#include <iostream>
using namespace std;

struct node{
    int val;
    int size;
    node* left;
    node* right;
    node(int val):val(val), size(1), left(NULL), right(NULL){}
};

int size(node* pnode){
    if(pnode == NULL)
        return 0;
    return pnode->size;
}

node* leftRotate(node* pnode){
    node* right = pnode->right;
    pnode->right = right->left;
    right->left = pnode;
    right->size = size(pnode);
    pnode->size = size(pnode->left) + size(pnode->right) + 1;
    return right;
}

node* rightRotate(node* pnode){
    node* left = pnode->left;
    pnode->left = left->right;
    left->right = pnode;
    left->size = size(pnode);
    pnode->size = size(pnode->left) + size(pnode->right) + 1;
    return left;
}

node* balance(node* pnode){
    if(pnode->left != NULL){
        node* left = pnode->left;
        if(size(left->left) > size(pnode->right)){
            pnode = rightRotate(pnode);
            pnode->right = balance(pnode->right);
            pnode = balance(pnode);
        }
        else if(size(left->right) > size(pnode->right)){
            pnode->left = leftRotate(pnode->left);
            pnode = rightRotate(pnode);
            pnode->left = balance(pnode->left);
            pnode->right = balance(pnode->right);
            pnode = balance(pnode);
        }
    }
    if(pnode->right != NULL){
        node* right = pnode->right;
        if(size(right->right) > size(pnode->left)){
            pnode = leftRotate(pnode);
            pnode->left = balance(pnode->left);
            pnode = balance(pnode);
        }
        else if(size(right->left) > size(pnode->left)){
            pnode->right = rightRotate(pnode->right);
            pnode = leftRotate(pnode);
            pnode->left = balance(pnode->left);
            pnode->right = balance(pnode->right);
            pnode = balance(pnode);
        }
    }
    return pnode;
}

node* insert(node* root, int v){
    if(root == NULL){
        root = new node(v);
        return root;
    }
    root->size++;
    if(root->val > v)
        root->left = insert(root->left, v);
    else
        root->right = insert(root->right, v);
    root = balance(root);
    return root;
}

// 删除无需调用balance来维持树的平衡
node* remove(node* root, int v){
    if(root == NULL)
        return NULL;
    root->size--;
    if(root->val > v)
        root->left = remove(root->left, v);
    else if(root->val < v)
        root->right = remove(root->right, v);
    else{
        if(root->left == NULL){
            node* tmp = root;
            root = root->right;
            delete tmp;
        }
        else if(root->right == NULL){
            node* tmp = root;
            root = root->left;
            delete tmp;
        }
        else{
            if(root->right->left == NULL){
                node* tmp = root;
                root = root->right;
                root->left = tmp->left;
                delete tmp;
            }
            else{
                node *tmp = root, *pa = root;
                root = root->right;
                while(root->left != NULL){
                    root->size--;
                    pa = root;
                    root = root->left;
                }
                root->left = tmp->left;
                pa->left = root->right;
                root->right = tmp->right;
                delete tmp;
            }
        }
    }
    root->size = size(root->left) + size(root->right) + 1;
    return root;
}

node* find(node* root, int v){
    if(root == NULL)
        return NULL;
    if(root->val == v)
        return root;
    else if(root->val > v)
        return find(root->left, v);
    else
        return find(root->right, v);
}

void travel(node* root){
    if(root == NULL)
        return;
    travel(root->left);
    cout<<root->val<<" "<<root->size<<endl;
    travel(root->right);
}

int main(){
    int a[] = {3, 1, 8, 2, 5};
    node* root = NULL;
    for(int i=0; i<5; i++)
        root = insert(root, a[i]);
    travel(root);
    node* tmp = remove(root, 3);
    travel(tmp);
    return 0;
}
*/
