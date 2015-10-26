/*
#include <iostream>
using namespace std;

struct node{
    int val;
    int s;
    node *left;
    node *right;
    node(int v): val(v), s(v), left(NULL), right(NULL){}
};

int max_path(node *root, int &ans){
    if(root == NULL)
        return 0;
    int l = max_path(root->left, ans);
    int r = max_path(root->right, ans);
    int s = root->val;
    if(l > 0)
        s += l;
    if(r > 0)
        s += r;
    if(s > ans)
        ans = s;
    s = 0;
    if(s < l)
        s = l;
    if(s < r)
        s = r;
    s += root->val;
    root->s = s;
    return s;
}

void travel(node *root){
    if(root == NULL)
        return;
    cout<<root->val<<" "<<root->s<<endl;
    travel(root->left);
    travel(root->right);
}

int main(){
    node *root = new node(1);
    root->left = new node(-1);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(2);
    root->right->left = new node(-3);
    root->right->right = new node(2);
    int ans = root->val;
    max_path(root, ans);
    cout<<ans<<endl;
    travel(root);
    return 0;
}
*/
