/*
#include <cstdio>
#include <cstring>

struct node{
    node* children[26];
    node(){
        memset(children, 0, sizeof(children));
    }
};

int ct;   // 树中节点数

void add(node* root, char* s){
    node* tmp = root;
    int i;
    while(*s != '\0'){
        i = *s - 'a';
        if((tmp->children)[i] == NULL){
            (tmp->children)[i]  = new node;
            ct++;
        }
        tmp = (tmp->children)[i];
        s++;
    }
}

int main(){
    node* root;
    char tmp[52];
    int n, mx=0, tp;
    while(scanf("%d", &n) != EOF){
        root = new node;
        mx = 0;
        ct = 0;
        for(int i=0; i<n; i++){
            scanf("%s", tmp);
            add(root, tmp);
            tp = strlen(tmp);
            if(tp > mx)
                mx = tp;
        }
        printf("%d\n", 2*ct+n-mx);
    }
	return 0;
}
*/
