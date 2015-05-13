#include <iostream>
#include <string>
using namespace std;

struct node{
    char key;
    node* left;
    node* right;
};

int search_optor(string ep, int s, int e){
    int isInBracket=0,  isAddOrMinus=0, idx=-1;
    for(int i=s; i<e; i++){
        if(ep[i] == '(')
            isInBracket = 1;
        else if(ep[i] == ')')
            isInBracket = 0;
        else if((ep[i]=='+' || ep[i]=='-') && isInBracket==0){
            idx = i;
            isAddOrMinus = 1;
        }
        else if((ep[i]=='*' || ep[i]=='/') && isInBracket==0 && isAddOrMinus==0)
            idx = i;
    }
    return idx;
}

node* build(string ep, int s, int e){
    node* root = new node;
    if(s == e){
        root->key = ep[s];
        root->left = NULL;
        root->right = NULL;
    }
    else{
        if(ep[s]=='(' && ep[e]==')')
            s++, e--;
        int idx = search_optor(ep, s, e);
        root->key = ep[idx];
        root->left = build(ep, s, idx-1);
        root->right = build(ep, idx+1, e);
    }
    return root;
}

void freeNode(node* root){
    if(root == NULL)
        return;
    freeNode(root->left);
    freeNode(root->right);
    delete root;
}

string postSearch(node* root){
    string ans = "";
    if(root == NULL)
        return ans;
    ans += postSearch(root->left);
    ans += postSearch(root->right);
    ans += root->key;
    return ans;
}

string internalSearch(node* root){
    string ans = "";
    if(root == NULL)
        return ans;
    ans += internalSearch(root->left);
    ans += root->key;
    ans += internalSearch(root->right);
    return ans;
}

string prefixSearch(node* root){
    string ans = "";
    if(root == NULL)
        return ans;
    ans += root->key;
    ans += prefixSearch(root->left);
    ans += prefixSearch(root->right);
    return ans;
}

int main(){
    string in;
    node* root;
    while(getline(cin, in)){
        root = build(in, 0, in.size()-1);
        cout<<"Post: "<<postSearch(root)<<endl;
        cout<<"Internal: "<<internalSearch(root)<<endl;
        cout<<"Prefix: "<<prefixSearch(root)<<endl;
        freeNode(root);
    }
    return 0;
}
