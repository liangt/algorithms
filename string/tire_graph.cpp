#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

// Tire graph
// 给tire树添加失败指针，与AC自动机不同的是它不再使用单独的失败指针，而是直接记录在children中
// 也就是每个节点的所有children均不为空，均指向下一个继续匹配的节点
// 这样可以避免AC自动机中不必要的回溯，换句话说就是给AC自动机添加了确定性(本质上是一个DFA)
// 优点当然是提高了匹配的速度
// 缺点是增加了内存
struct node{
    int val;
    node* suffix;
    node* children[26];
    node(){
        val = 0;
        suffix = NULL;
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
    root->val = 1;
}

void suffix(node* root){
    root->suffix = root;
    queue<node*> que;
    for(int i=0; i<26; i++){
        if(root->children[i] != NULL){
            root->children[i]->suffix = root;
            que.push(root->children[i]);
        }
        else
            root->children[i] = root;
    }
    node *tp, *tmp;
    while(!que.empty()){
        tp = que.front();
        que.pop();
        for(int i=0; i<26; i++){
            tmp = tp->suffix->children[i];
            if(tp->children[i] == NULL)
                tp->children[i] = tmp;
            else{
                tp->children[i]->suffix = tmp;
                if(tmp->val == 1)
                    tp->children[i]->val = 1;
                if(tp->children[i]->val == 0)    // val为1表示终止节点，故对于终止节点无需再入栈
                    que.push(tp->children[i]);
            }
        }
    }
}

bool query(node* root, char* s){
    while(*s != '\0'){
        root = root->children[*s - 'a'];
        if(root->val == 1)
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
    suffix(root);
    scanf("%s", s);
    if(query(root, s))
        printf("YES\n");
    else
        printf("NO\n");
	return 0;
}
