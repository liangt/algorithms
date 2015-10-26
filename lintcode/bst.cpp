/*
#include <iostream>
#include <stack>
using namespace std;

struct node{
    int val;
    node *left;
    node *right;
    node(int v): val(v), left(NULL), right(NULL){}
};

void preorder(node *root){
    if(root == NULL)
        return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void postorder(node *root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

void preorder2(node *root){
    if(root == NULL)
        return;
    stack<node*> st;
    st.push(root);
    node *tmp;
    while(!st.empty()){
        tmp = st.top();
        st.pop();
        cout<<tmp->val<<" ";
        if(tmp->right)
            st.push(tmp->right);
        if(tmp->left)
            st.push(tmp->left);
    }
    cout<<endl;
}

void inorder2(node *root){
    if(root == NULL)
        return;
    stack<node*> st;
    st.push(root);
    node *tmp = root;
    while(tmp->left != NULL){
        tmp = tmp->left;
        st.push(tmp);
    }
    while(!st.empty()){
        tmp = st.top();
        st.pop();
        cout<<tmp->val<<" ";
        tmp = tmp->right;
        if(tmp != NULL){
            st.push(tmp);
            while(tmp->left != NULL){
                tmp = tmp->left;
                st.push(tmp);
            }
        }
    }
    cout<<endl;
}

void postorder2(node *root){
    if(root == NULL)
        return;
    stack<node*> st;
    node *tmp = root, *last = NULL;
    st.push(root);
    while(tmp->left != NULL){
        tmp = tmp->left;
        st.push(tmp);
    }
    while(!st.empty()){
        tmp = st.top();
        if(tmp->right == NULL || tmp->right == last){
            st.pop();
            last = tmp;
            cout<<tmp->val<<" ";
        }
        else{
            tmp = tmp->right;
            st.push(tmp);
            while(tmp->left != NULL){
                tmp = tmp->left;
                st.push(tmp);
            }
        }
    }
}

int main(){
    node *root = new node(1);
    root->left = new node(-1);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(2);
    root->right->left = new node(-3);
    root->right->right = new node(2);

    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;
    preorder2(root);

    cout<<"inorder"<<endl;
    inorder(root);
    cout<<endl;
    inorder2(root);

    cout<<"postorder"<<endl;
    postorder(root);
    cout<<endl;
    postorder2(root);

    return 0;
}
*/
