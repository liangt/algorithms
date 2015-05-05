/*
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

// 建立前缀树，时间复杂度为 O(nl)
//n为单词数，l为单词的平均长度
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

// 往树中添加节点
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

// 返回指定节点的值
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

// 返回指定前缀的keys
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

// 返回所有的keys
vector<string> getAllKeys(node* root){
    return keysWithPrefix(root, "");
}

// 匹配带*的字符, *表示可以是任何字符
vector<string> keysThatMatch(node* root, string pat, string sts[]){
    vector<string> ans;
    int n = pat.size();
    if(n == 0)
        return ans;
    node* tmp;
    vector<node*> pre;
    if(pat[0] == '*'){
        for(int i=0;i <26; i++){
            tmp = (root->children)[i];
            if(tmp != NULL)
                pre.push_back(tmp);
        }
    }
    else{
        tmp =(root->children)[pat[0]-'a'];
        if(tmp == NULL)
            return ans;
        pre.push_back(tmp);
    }
    vector<node*> nxt;
    for(int i=1; i<pat.size(); i++){
            for(int j=0; j<pre.size(); j++){
                if(pat[i] == '*'){
                    for(int t=0; t<26; t++){
                        tmp = (pre[j]->children)[t];
                        if(tmp != NULL)
                            nxt.push_back(tmp);
                    }
                }
                else{
                    tmp =  (pre[j]->children)[pat[i]-'a'];
                    if(tmp != NULL)
                        nxt.push_back(tmp);
                }
            }
            if(nxt.empty())
                break;
            pre = nxt;
            nxt.clear();
    }
    for(int i=0; i<pre.size(); i++)
        if(pre[i]->val > -1)
            ans.push_back(sts[pre[i]->val]);
    return ans;
}

// 删除指定节点
node* deleteNode(node* root, string a){
    if(root == NULL)
        return NULL;
    if(a.empty()){
        if(root->val > -1)
            root->val = -1;
        for(int i=0; i<26; i++)
            if((root->children)[i] != NULL)
                return root;
        delete root;
        return NULL;
    }
    node* tmp = (root->children)[a[0]-'a'];
    if(tmp == NULL)
        return root;
    (root->children)[a[0]-'a'] = deleteNode(tmp, a.substr(1, a.size()-1));
    for(int i=0; i<26; i++){
        if((root->children)[i]  != NULL)
            return root;
    }
    delete root;
    return NULL;
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

    // 建树
    node* root = build(a, N);

    // 遍历输出各键对应的值
    travel(root);

    // 返回特定键的值
    string tmp;
    cin>>tmp;
    cout<<get(root, tmp)<<endl;

    // 返回特定前缀的键
    cin>>tmp;
    vector<string> keys = keysWithPrefix(root, tmp);
    for(int i=0; i<keys.size(); i++)
        cout<<keys[i]<<" ";
    cout<<endl;

    // 返回所有键
    vector<string> allkeys = getAllKeys(root);
    for(int i=0; i<allkeys.size(); i++)
        cout<<allkeys[i]<<" ";
    cout<<endl;

    // 返回与特定带*字符串匹配的键
    cin>>tmp;
    vector<string> keysWithStar = keysThatMatch(root, tmp, a);
     for(int i=0; i<keysWithStar.size(); i++)
        cout<<keysWithStar[i]<<" ";
    cout<<endl;

    // 删除指定键
    cin>>tmp;
    root = deleteNode(root, tmp);
    cout<<get(root, tmp)<<endl;
	return 0;
}
*/
