/*
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

struct node{
    int val;   // 单词索引,-1表示不是字典中单词
    node* fail;
    node* children[26];
    node(){
        val = -1;
        fail = NULL;
        memset(children, 0, sizeof(children));
    }
};

// 构建tire树
node*  build(string pats[], int sz){
    node* root = new node;
    node*  tmp;
    int idx, n;
    for(int i=0; i<sz; i++){
        tmp = root;
        n = pats[i].size();
        for(int j=0; j<n; j++){
            idx = pats[i][j] - 'a';
            if(root->children[idx] == NULL)
                root->children[idx] = new node;
            tmp = root->children[idx] ;
        }
        tmp->val = i;
    }
    return root;
}

void fail(node* root){
    queue<node*> que;
    for(int i=0; i<26; i++)
        if(root->children[i] != NULL){
            root->children[i]->fail = root;
            que.push(root->children[i]);
        }
    node *tmp, *tp;
    while(!que.empty()){
        tp = que.front();
        que.pop();
        for(int i=0; i<26; i++)
            if(tp->children[i] != NULL){
                tmp = tp->fail;
                while(tmp != NULL && tmp->children[i] == NULL)
                    tmp = tmp->fail;

                // 如果初始处理时，将root的空子节点都设为root,那么就不会出现tmp=NULL的情形，并且恰好将它与else统一了
                // 因为tmp=NULL时，说明前一步达到了root，并且 tmp->children[i]=NULL，如果按着上面所说的预处理，那么当到达root时，
                // 由于tmp->children[i]=root!=NULL而终止了循环，此时tp->children[i]->fail=tmp->children[i]=root;
                if(tmp == NULL)
                    tp->children[i]->fail = root;
                else
                    tp->children[i]->fail = tmp->children[i];
                que.push(tp->children[i]);
            }
    }
}

int query(node* root, string s){
    int n= s.size(), j;
    node *tmp=root, *tp;
    int ans = 0;   // 记录模式出现的总次数，也可以用一个数组单独记录各个模式出现的次数
    for(int i=0; i<n; i++){
        j = s[i] - 'a';
        while(tmp!=root && tmp->children[j]==NULL)
            tmp = tmp->fail;
        tmp  = tmp->children[j];
        if(tmp == NULL)
            tmp = root;

        // 当tmp是终止状态，记录所有可能的终止状态(因为它的fail指针所指状态也可能是终止状态)
        tp = tmp;
        while(tp!=NULL && tp->val>-1){
            ans++;
            tmp = tmp->fail;
        }
    }
    return ans;
}

int main(){
    string pats[] = {"announce", "annual", "annually"};
    string s = "annual_announce";
    node* root = build(pats, 3);
    fail(root);
    cout<<query(root, s);
	return 0;
}
*/
