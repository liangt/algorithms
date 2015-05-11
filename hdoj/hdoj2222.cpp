/*
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

struct node{
    int ct;
    node* fail;
    node*children[26];
    node(){
        ct = 0;
        fail = NULL;
        memset(children, 0, sizeof(children));
    }
};

void add(node* root, char* s){
    node* tmp = root;
    int i;
    while(*s != '\0'){
        i = *s  - 'a';
        if(tmp->children[i] == NULL)
            tmp->children[i] = new node;
        tmp = tmp->children[i];
        s++;
    }
    tmp->ct++;   // 这里++，是因为模式串可能前后出现多次，把每一次出现当成不同的串看待
}

void fail(node* root){
    queue<node*> que;
    node *tp, *tmp;
    for(int i=0; i<26; i++)
        if(root->children[i] != NULL){
            root->children[i]->fail = root;
            que.push(root->children[i]);
        }
    while(!que.empty()){
        tp = que.front();
        que.pop();
        for(int i=0; i<26; i++)
            if(tp->children[i] != NULL){
                tmp = tp->fail;
                while(tmp!=NULL && tmp->children[i]==NULL)
                    tmp = tmp->children[i];
                if(tmp == NULL)
                    tp->children[i]->fail = root;
                else
                    tp->children[i]->fail = tmp->children[i];
                que.push(tp->children[i]);
            }
    }
}

void clearTire(node* root){
    if(root == NULL)
        return;
    for(int i=0; i<26; i++)
        clearTire(root->children[i]);
    root->fail = NULL;
    delete root;
    root = NULL;
}

int query(node* root, char* s){
    int ans=0, i;
    node *tmp=root, *tp;
    while(*s != '\0'){
        i = *s - 'a';
        while(tmp!=NULL && tmp->children[i]==NULL)
            tmp = tmp->fail;
        if(tmp == NULL)
            tmp = root;
        else
            tmp = tmp->children[i];
        tp = tmp;
        while(tp!=NULL && tp->ct!=0){
            ans += tp->ct;
            tp->ct = 0;
            tp = tp->fail;
        }
        s++;
    }
    return ans;
}

int main(){
    int t, n;
    char tmp[1000002];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        node* root = new node;
        while(n--){
            scanf("%s", tmp);
            add(root, tmp);
        }
        fail(root);
        scanf("%s", tmp);
        printf("%d\n", query(root, tmp));
        clearTire(root);
    }
	return 0;
}
*/
