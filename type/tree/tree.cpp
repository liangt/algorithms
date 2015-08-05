#include <iostream>
using namespace std;

struct node{
    int val;
    int height;
    node* left;
    node* right;
    node(int val):val(val), height(0), left(NULL), right(NULL){}
};

int height(node* pnode){
    if(pnode == NULL)
        return -1;
    return pnode->height;
}

int maxHeight(int a, int b){
    return a < b ? b : a;
}

node* leftRotate(node* pnode){
    node* right = pnode->right;
    pnode->right = right->left;
    right->left = pnode;
    pnode->height = maxHeight(height(pnode->left), height(pnode->right)) + 1;
    right->height = maxHeight(height(right->left), height(right->right)) + 1;
    return right;
}

node* rightRotate(node* pnode){
    node* left = pnode->left;
    pnode->left = left->right;
    left->right = pnode;
    pnode->height = maxHeight(height(pnode->left), height(pnode->right)) + 1;
    left->height = maxHeight(height(left->left), height(left->right)) + 1;
    return left;
}

node* leftRightRotate(node* pnode){
    pnode->left = leftRotate(pnode->left);
    pnode = rightRotate(pnode);
    return pnode;
}

node* rightLeftRotate(node* pnode){
    pnode->right = rightRotate(pnode->right);
    pnode = leftRotate(pnode);
    return pnode;
}

node* insert(node* root, int v){
    if(root == NULL){
        root = new node(v);
        return root;
    }
    if(root->val > v){ // left
        root->left = insert(root->left, v);
        if(height(root->left) - height(root->right) > 1){  // unbalance
            if(root->left->val > v) // left-left
                rightRotate(root);
            else //left-right
                leftRightRotate(root);
        }
    }
    else{ // right
        root->right = insert(root->right, v);
        if(height(root->right) - height(root->left) > 1){  // unbalance
            if(root->left->val > v) // right-right
                leftRotate(root);
            else //right-left
                rightLeftRotate(root);
        }
    }
    root->height = maxHeight(height(root->left), height(root->right)) + 1;
    return root;
}

node* remove(node* root, int v){
    if(root == NULL)
        return NULL;
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
    root->height = maxHeight(height(root->left), height(root->right)) + 1;
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
    cout<<root->val<<" "<<root->height<<endl;
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
