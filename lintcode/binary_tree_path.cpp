/*
#include <iostream>
#include <vector>
using namespace std;

struct node{
    int val;
    node *left;
    node *right;
    node(int val): val(val), left(NULL), right(NULL){}
};
vector<vector<int>> ans;

void find_path(vector<int> &path, node *root, int k, int s){
    if(root == NULL)
        return;
    s += root->val;
    path.push_back(root->val);
    if(s == k)
        ans.push_back(path);
    find_path(path, root->left, k, s);
    find_path(path, root->right, k, s);
    path.pop_back();
}

int main(){
    return 0;
}
*/
