/*
#include <iostream>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
    node* parent;
    node(int v, node* parent=NULL):val(v), left(NULL), right(NULL), parent(parent){}
};

node* leftRotate(node* pnode){// 左旋, zag
    node* right = pnode->right;
    pnode->right = right->left;
    if(pnode->right != NULL)
        pnode->right->parent = pnode;
    right->left = pnode;
    right->parent = pnode->parent;
     if(pnode->parent != NULL){
        if(pnode->parent->left == pnode)
            pnode->parent->left = right;
        else
            pnode->parent->right = right;
     }
    pnode->parent = right;
    return right;
}

node* rightRotate(node* pnode){ // 右旋, zig
    node* left = pnode->left;
    pnode->left = left->right;
    if(pnode->left != NULL)
        pnode->left->parent = pnode;
    left->right = pnode;
    left->parent = pnode->parent;
    if(pnode->parent != NULL){
        if(pnode->parent->left == pnode)
            pnode->parent->left = left;
        else
            pnode->parent->right = left;
    }
    pnode->parent = left;
    return left;
}

node* splay(node* pnode){
    node* pa = NULL;
    while(pnode->parent != NULL){
        pa = pnode->parent;
        if(pa->left == pnode){  // left child
            if(pa->parent == NULL)   // parent node is root
                pnode = rightRotate(pa);
            else if(pa->parent->left == pa){  // left-left
                pa = rightRotate(pa->parent);
                pnode = rightRotate(pa);
            }
            else{  // right-left
                pa = rightRotate(pa);
                pnode = leftRotate(pa);
            }
        }
        else{  // right child
            if(pa->parent == NULL)
                pnode = leftRotate(pa);
            else if(pa->parent->left == pa){ // left-right
                pa = leftRotate(pa);
                pnode = rightRotate(pa);
            }
            else{ // right-right
                pa = leftRotate(pa->parent);
                pnode = leftRotate(pa);
            }
        }
    }
    return pnode;
}

node* insert(node* root, int v){
    if(root == NULL){
        root = new node(v);
        return root;
    }
    node* pa = NULL;
    while(root != NULL){
        pa = root;
        if(root->val > v)
            root = root->left;
        else if(root->val < v)
            root = root->right;
        else
            break;
    }
    if(root == NULL){
        if(pa->val > v){
            root = new node(v, pa);
            pa->left = root;
        }
        else{
            root = new node(v, pa);
            pa->right = root;
        }
    }
    root = splay(root);
    return root;
}

node* findMin(node* root){
    node* pa = NULL;
    while(root != NULL){
        pa = root;
        root = root->left;
    }
    return pa;
}

node* find(node* root, int v){
    while(root != NULL){
        if(root->val == v)
            break;
        else if(root->val > v)
            root = root->left;
        else
            root = root->right;
    }
    return root;
}

node* join(node* left, node* right){
    if(left == NULL)
        return right;
    if(right == NULL)
        return left;
    left->parent = NULL;
    right->parent = NULL;

    node* rightMin = findMin(right);
    right = splay(rightMin);
    right->left = left;
    left->parent = right;
    return right;
}

node* remove(node* root, int v){
    node* tmp = find(root, v);
    if(tmp != NULL){
        tmp = splay(tmp);
        root = join(tmp->left, tmp->right);
        delete tmp;
    }
    return root;
}

void travel(node* root){
    if(root == NULL)
        return;
    travel(root->left);
    cout<<root->val<<" "<<endl;
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
