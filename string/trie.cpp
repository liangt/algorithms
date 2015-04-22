#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

struct node{
    char c;
    int val;   // 单词所对应的值，这里指字典中单词的下标，-1表示不是字典中的单词
    node* children[26];
    node(char c='\0', int val=-1):c(c), val(val){
        memset(children, 0, sizeof(children));
    }
};

node* build(string a[], int n){
    node* root = new node;
    node* tmp;
    int tp;
    for(int i=0; i<n; i++){
            tmp = root;
            for(int j=0; j<a[i].size(); j++){
                tp = a[i][j]-'a';
                if((tmp->children)[tp] == NULL)
                    (tmp->children)[tp] = new node(a[i][j]);
                tmp =  (tmp->children)[tp];
            }
            tmp->val = i;
    }
    return root;
}

void add(node* root, string a, int val){
    node* tmp = root;
    int j;
    for(int i=0; i<a.size(); i++){
        j = a[i] - 'a';
        if((tmp->children)[j] == NULL)
            (tmp->children)[j] = new node(a[i]);
        tmp =  (tmp->children)[j];
    }
    tmp->val = val;
}

int get(node* root, string a){
    node* tmp = root;
    int j;
    for(int i=0; i<a.size(); i++){
        j = a[i] - 'a';
        if((tmp->children)[j] == NULL)
            return -1;
        tmp =  (tmp->children)[j];
    }
    return tmp->val;
}

void keysWithPrefixHelp(node* root, string pre,  vector<string>& ans){
    if(root == NULL)
        return;
    string tmp  = pre + root->c;
    if(root->val > -1)
        ans.push_back(tmp);
    for(int i=0; i<26; i++)
        keysWithPrefixHelp((root->children)[i], tmp, ans);
}

vector<string> keysWithPrefix(node* root, string pre){
    vector<string> ans;
    node* tmp = root;
    int j;
    for(int i=0; i<pre.size(); i++){
        j = pre[i] - 'a';
        if((tmp->children)[j] == NULL)
            return ans;
        tmp =  (tmp->children)[j];
    }
    if(tmp == NULL)
        return ans;
    if(tmp->val > -1)
        ans.push_back(pre);
    for(int i=0; i<26; i++)
        keysWithPrefixHelp((tmp->children)[i], pre, ans);
}

vector<string> getAllKeys(node* root){
    return keysWithPrefix(root, "");
}

void keysThatMatchHelp(node* root, string pat, vector<string>& ans){
    node* tmp = root;
    for(int i=0; i<pat.size(); i++){
    }
}

vector<string> keysThatMatch(node* root, string pat){
    vector<string> ans;
    keysThatMatchHelp(root, pat, ans);
    return ans;
}

void travel(node* root){
    if(root == NULL)
        return;
    if(root->val > -1)
        cout<<root->val<<endl;
    for(int i=0; i<26; i++)
        travel((root->children)[i]);
}

int main(){
    srand(time(0));
    const int N = 10;
    const int L = 6;
    int l;
    string a[N];
    string b(L, 'a');
    for(int i=0; i<N; i++){
        for(int j=0; j<L; j++)
            b[j] = 'a' + rand() % 26;
        l = rand() % 6 + 1;
        a[i] = b.substr(0, l);
        cout<<a[i]<<" ";
    }
    cout<<endl;

    node* root = build(a, N);
    travel(root);
    string tmp;
    cin>>tmp;
    cout<<get(root, tmp)<<endl;
    cin>>tmp;
    vector<string> keys = keysWithPrefix(root, tmp);
    for(int i=0; i<keys.size(); i++)
        cout<<keys[i]<<" ";
    cout<<endl;

    vector<string> allkeys = getAllKeys(root);
    for(int i=0; i<allkeys.size(); i++)
        cout<<allkeys[i]<<" ";
    cout<<endl;

	return 0;
}
