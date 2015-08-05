#include <iostream>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
};

node* leftRotate(node* pnode){
    node* right = pnode->right;
    pnode->right = right->left;
    right->left = pnode;
    return right;
}

node* rightRotate(node* pnode){
    node* left = pnode->left;
    pnode->left = left->right;
    left->right = pnode;
    return left;
}

node* insert(node* root, int v){
    return root;
}

// 删除无需调用balance来维持树的平衡
node* remove(node* root, int v){
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

int main(){
    return 0;
}
