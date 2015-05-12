/*
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct node{
    int val;   // 针对不同应用，可以有不同含义，如标记字典中的单词，统计单词出现的频率，记录单词的下标等，这里以统计字典中的单词为例
    node* fail;   // 表示当前节点发生匹配失败时，下次匹配的节点
    node* children[26];
    node(){
        val = 0;
        fail = NULL;
        memset(children, 0, sizeof(children));
    }
};

// 往tire树中添加节点
void  add(node* root, char* s){
    int i;
    while(*s != '\0'){
        i = *s - 'a';
        if(root->children[i] == NULL)
            root->children[i] = new node;
        root = root->children[i];
        s++;
    }
    root->val++;
}

// 构建fail指针
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

// 匹配过程
int query(node* root, char* s){
    node *tmp=root, *tp;
    int i, ans=0;   // 记录模式出现的总次数，也可以用一个数组单独记录各个模式出现的次数
    while(*s != '\0'){
        i = *s - 'a';
        while(tmp!=NULL && tmp->children[i]==NULL)
            tmp = tmp->fail;
        if(tmp == NULL)
            tmp = root;
        else
            tmp = tmp->children[i];

        // 当tmp是终止状态，记录所有可能的终止状态(因为它的fail指针所指状态也可能是终止状态)
        tp = tmp;
        while(tp!=NULL && tp->val>0){
            ans += tp->val;
            tp->val = 0;   // 避免重复计数
            tp = tp->fail;
        }
        s++;
    }
    return ans;
}

int main(){
    char* pats[] = {"announce", "annual", "annually"};
    char* s = "annual_announce";
    node* root= new node;
    for(int i=0; i<3; i++)
        add(root, pats[i]);
    fail(root);
    cout<<query(root, s)<<endl;
	return 0;
}
*/
