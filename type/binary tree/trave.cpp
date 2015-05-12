/*
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;
    node(int v=0):val(v), left(NULL), right(NULL){}
};

const int N = 10;
int a[N], n;

node* buildTree(){
    if(n == 0)
        return NULL;
    queue<node*> que;
    node* root =  new node(a[0]);
    que.push(root);
    node* tmp;
    int i = 0;
    while(i<n){
        tmp = que.front();
        que.pop();
        if(++i < n){
            tmp->left = new node(a[i]);
            que.push(tmp->left);
        }
        if(++i < n){
            tmp->right = new node(a[i]);
            que.push(tmp->right);
        }
    }
    while(!que.empty())
        que.pop();
    return root;
}

void preTravel1(node* root){
    if(root == NULL)
        return;
    cout<<root->val<<" ";
    preTravel1(root->left);
    preTravel1(root->right);
}

void preTravel2(node* root){
    if(root == NULL)
        return;
    stack<node*> st;
    st.push(root);
    node* tmp;
    while(!st.empty()){
        tmp = st.top();
        st.pop();
        cout<<tmp->val<<" ";
        if(tmp->right != NULL)
            st.push(tmp->right);
        if(tmp->left != NULL)
            st.push(tmp->left);
    }
    cout<<endl;
}

void interTravel1(node* root){
    if(root == NULL)
        return;
    interTravel1(root->left);
    cout<<root->val<<" ";
    interTravel1(root->right);
}

// 将左子节点全部入栈，对每个出栈的节点直接处理，并只需再考虑右子节点
void interTravel2(node* root){
    if(root == NULL)
        return;
    stack<node*> st;
    st.push(root);
    while(root->left != NULL){
        st.push(root->left);
        root = root->left;
    }
    node *tmp;
    while(!st.empty()){
        tmp = st.top();
        st.pop();
        cout<<tmp->val<<" ";
        if(tmp->right != NULL){
            st.push(tmp->right);
            tmp = tmp->right;
        }
        while(tmp->left != NULL){
            st.push(tmp->left);
            tmp = tmp->left;
        }
    }
    cout<<endl;
}

void interTravel3(node* root){
    if(root == NULL)
        return;
    stack<node*> st;
    st.push(root);
    node* tmp = root->left;
    while(tmp!=NULL || !st.empty()){
        while(tmp != NULL){     // tmp指向当前即将访问的节点
            st.push(tmp);
            tmp = tmp->left;
        }
        tmp = st.top();
        st.pop();
        cout<<tmp->val<<" ";
        tmp = tmp->right;   // 这里可能出现tmp非空，但此时栈st已经空了，所以需要在外围while循环中添加tmp!=NULL的判断
    }
    cout<<endl;
}

void postTravel1(node* root){
    if(root == NULL)
        return;
    postTravel1(root->left);
    postTravel1(root->right);
    cout<<root->val<<" ";
}

// 同样先将左子节点全部入栈，这样可需考虑右子节点，然后执行相应操作
// 这里需要一个指针，记录节点的右子节点是否已经访问
// 注意到节点的右子节点是该节点访问的上一个节点，即如果有右子节点，访问该节点之前的最后一次访问的节点便是其右子节点
void postTravel2(node* root){
    if(root == NULL)
        return;
    stack<node*> st;
    st.push(root);
    while(root->left != NULL){
        st.push(root->left);
        root = root->left;
    }
    node *tmp, *last=NULL;
    while(!st.empty()){
        tmp = st.top();
        if(tmp->right==NULL || tmp->right==last){
            cout<<tmp->val<<" ";
            last = tmp;
            st.pop();
        }
        else{
            tmp = tmp->right;
            st.push(tmp);
            while(tmp->left != NULL){
                st.push(tmp->left);
                tmp = tmp->left;
            }
        }
    }
    cout<<endl;
}

void postTravel3(node* root){
    if(root == NULL)
        return;
    stack<node*> st;
    st.push(root);
    node *tmp=root->left, *last=NULL;
    while(tmp!=NULL || !st.empty()){
        while(tmp!=NULL){
            st.push(tmp);
            tmp = tmp->left;
        }
        tmp = st.top();
        if(tmp->right==NULL || tmp->right==last){
            cout<<tmp->val<<" ";
            last = tmp;
            st.pop();
            tmp = NULL;
        }
        else{
            tmp = tmp->right;
            st.push(tmp);
            tmp = tmp->left;
        }
    }
    cout<<endl;
}

void postTravel4(node* root){
    if(root == NULL)
        return;
    stack<node*> st;
    node *tmp=root, *last=NULL;
    while(tmp!=NULL || !st.empty()){
        while(tmp != NULL){
            st.push(tmp);
            tmp = tmp->left;
        }
        tmp = st.top();
        if(tmp->right==NULL || tmp->right==last){
            cout<<tmp->val<<" ";
            st.pop();
            last = tmp;
            tmp = NULL;
        }
        else
            tmp = tmp->right;
    }
    cout<<endl;
}

int main(){
    n = 5;
    for(int i=0; i<n; i++)
        cin>>a[i];
    node* root = buildTree();

    cout<<"PreTravel"<<endl;
    preTravel1(root);
    cout<<endl;
    preTravel2(root);

    cout<<"InterTravel"<<endl;
    interTravel1(root);
    cout<<endl;
    interTravel2(root);
    interTravel3(root);

    cout<<"PostTravel"<<endl;
    postTravel1(root);
    cout<<endl;
    postTravel2(root);
    postTravel3(root);
    postTravel4(root);
	return 0;
}
*/
