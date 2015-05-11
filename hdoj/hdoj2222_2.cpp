/*
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

struct node{
    int ct; //统计出现的次数
    node* fail;
    node* children[26];
    node(){
        ct = 0;
        fail = NULL;
        memset(children, 0, sizeof(children));
    }
};

void add(node* root, char* s){
    int i;
    while(*s != '\0'){
        i = *s - 'a';
        if(root->children[i] == NULL)
            root->children[i] = new node;
        root = root->children[i];
        s++;
    }
    root->ct++;   // 这里++而不是设为1,是因为某个单词可能前后出现多次，这里将它们视为不同单词对待
}

void fail(node* root){
    queue<node*> que;
    for(int i=0; i<26; i++){
        if(root->children[i] != NULL){
            root->children[i]->fail = root;
            que.push(root->children[i]);
        }
    }
    node *tmp, *tp;
    while(!que.empty()){
        tp = que.front();
        que.pop();
        for(int i=0; i<26; i++)
            if(tp->children[i] != NULL){
                tmp = tp->fail;
                while(tmp!=NULL && tmp->children[i]==NULL)
                    tmp = tmp->fail;
                if(tmp == NULL)
                    tp->children[i]->fail = root;
                else
                    tp->children[i]->fail = tmp->children[i];
                que.push(tp->children[i]);
            }
    }
}

int query(node* root, char* s){
    int i, ans=0;
    node *tmp = root, *tp;
    while(*s != '\0'){
        i = *s - 'a';
        while(tmp!=NULL && tmp->children[i]==NULL)
            tmp = tmp->fail;
        if(tmp==NULL)
            tmp = root;
        else
            tmp = tmp->children[i];
        if(tmp->ct > 0){ // 终止节点
            tp = tmp;
            while(tp!=NULL && tp->ct>0){
                ans += tp->ct;
                tp->ct = -1;   // 置为-1是为了避免对某一节点重复计算
                tp = tp->fail;
            }
        }
        s++;
    }
    return ans;
}

int main(){
    char s[1000002];
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        node* root = new node;
        for(int i=0; i<n; i++){
            cin>>s;
            add(root, s);
        }
        fail(root);
        cin>>s;
        cout<<query(root, s)<<endl;
    }
	return 0;
}
*/
