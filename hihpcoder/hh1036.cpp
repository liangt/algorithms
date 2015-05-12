/*
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

struct node{
    int val;
    node* fail;
    node* children[26];
    node(){
        val = 0;
        fail = NULL;
        memset(children, 0, sizeof(children));
    }
};

void  add(node* root, char* s){
    int i;
    while(*s != '\0'){
        i = *s - 'a';
        if(root->children[i] == NULL)
            root->children[i] = new node;
        root = root->children[i];
        s++;
    }
    root->val = 1;
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
                if(tmp == NULL)
                    tp->children[i]->fail = root;
                else
                    tp->children[i]->fail = tmp->children[i];
                que.push(tp->children[i]);
            }
    }
}

bool query(node* root, char* s){
    node *tmp=root;
    int i;
    while(*s != '\0'){
        i = *s - 'a';
        while(tmp!=NULL && tmp->children[i]==NULL)
            tmp = tmp->fail;
        if(tmp == NULL)
            tmp = root;
        else
            tmp = tmp->children[i];
        if(tmp->val > 0)
            return true;
        s++;
    }
    return false;
}

int main(){
    int n;
    char s[1000002];
    node* root= new node;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", s);
        add(root, s);
    }
    fail(root);
    scanf("%s", s);
    if(query(root, s))
        printf("YES\n");
    else
        printf("NO\n");
	return 0;
}
*/
