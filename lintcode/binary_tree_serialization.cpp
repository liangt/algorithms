/*
#include <iostream>
#include <queue>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left, *right;
    TreeNode(int v):val(v), left(NULL), right(NULL){}
};

string int2str(int v){
    if(v == 0)
        return "0";
    string ans = "";
    char tmp;
    while(v){
        tmp = '0' + v % 10;
        v /= 10;
        ans = tmp + ans;
    }
    return ans;
}

void help(TreeNode *root, string &ans){
        if(root == NULL)
            return;
        queue<TreeNode*> que;
        que.push(root);
        TreeNode *tmp;
        while(!que.empty()){
            tmp = que.front();
            que.pop();
            if(tmp == NULL){
                ans += "#,";
                continue;
            }
            ans += int2str(tmp->val) + ",";
            que.push(tmp->left);
            que.push(tmp->right);
        }
    }

string serialize(TreeNode *root) {
        // write your code here
        string ans;
        help(root, ans);
        return ans;
    }

TreeNode *deserialize(string data) {
        // write your code here
        if(data == "")
            return NULL;
        int v = 0, n = data.size(), i = 0;
        while(i < n){
            if(data[i] == ',')
                break;
            v = v * 10 + (data[i] - '0');
            i++;
        }
        i++;
        TreeNode *root = new TreeNode(v);
        queue<TreeNode*> que;
        que.push(root);
        TreeNode *tmp;
        while(!que.empty()){
            tmp = que.front();
            que.pop();
            if(data[i] == '#')
                i++;
            else{
                v = 0;
                while(i < n){
                    if(data[i] == ',')
                        break;
                    v = v * 10 + (data[i] - '0');
                    i++;
                }
                tmp->left = new TreeNode(v);
                que.push(tmp->left);
            }
            i++;
            if(data[i] == '#')
                i++;
            else{
                v = 0;
                while(i < n){
                    if(data[i] == ',')
                        break;
                    v = v * 10 + (data[i] - '0');
                    i++;
                }
                tmp->right = new TreeNode(v);
                que.push(tmp->right);
            }
            i++;
        }
        return root;
    }

int main(){
    TreeNode *root = new TreeNode(1);
    //root->left = new TreeNode(9);
    root->right = new TreeNode(2);
    //root->right->left = new TreeNode(15);
    //root->right->right = new TreeNode(7);
    string ans = serialize(root);
    cout<<ans<<endl;
    TreeNode *tmp = deserialize(ans);
    ans = serialize(tmp);
    cout<<ans<<endl;
    return 0;
}
*/
