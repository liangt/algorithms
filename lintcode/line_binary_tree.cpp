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

void transfer(node *root){
    if(root == NULL)
        return;
    stack<node*> st;
    st.push(root);
    node *tmp = root;
    while(tmp->left != NULL){
        tmp = tmp->left;
        st.push(tmp);
    }
    node *pre = NULL;
    while(!st.empty()){
        tmp = st.top();
        st.pop();
        if(tmp->left == NULL)
            tmp->left = pre;
        if(pre != NULL && pre->right == NULL)
            pre->right = tmp;
        pre = tmp;
        if(tmp->right != NULL){
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
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    transfer(root);
    node *tmp = root->left->right;
    cout<<tmp->val<<" "<<tmp->left->val<<" "<<tmp->right->val<<endl;
    tmp = root->right->left;
    cout<<tmp->val<<" "<<tmp->left->val<<" "<<tmp->right->val<<endl;
    return 0;
}
*/
