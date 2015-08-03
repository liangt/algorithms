/*
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

// KMP
const int N = 10;
int bound_array[N+1];

void build_bound(string pat){
    int nxt = 0;
    for(int i=1; i<pat.size(); i++){
        while(nxt && pat[i] != pat[nxt])
            nxt = bound_array[nxt];
        if(pat[nxt] == pat[i])
            nxt++;
        bound_array[i+1] = nxt;
    }
}

bool match(string s, string pat){
    int nxt = 0;
    for(int i=0; i<s.size(); i++){
        while(nxt && s[i] != pat[nxt])
            nxt = bound_array[nxt];
        if(s[i] == pat[nxt])
            nxt++;
        if(nxt == pat.size())
            return true;
    }
    return false;
}

// AC
struct node{
    int tag;
    node* fail;
    node* children[26];
    node():tag(0), fail(NULL){
        memset(children, NULL, sizeof(children));
    }
};

node* build(string s[], int n){
    node* root = new node;
    node* tmp = root;
    int t;
    for(int i=0; i<n; i++){
        for(int j=0; j<s[i].size(); j++){
            t = s[i][j] - 'a';
            if(tmp->children[t] == NULL)
                tmp->children[t] = new node;
            tmp = tmp->children[t];
        }
        tmp->tag = 1;
    }
    return root;
}

void fail(node* root){
    queue<string> q;
    for(int i=0; i<26; i++){
        if(root->children[i] != NULL){
            root->children[i]->fail = root;
            q.push(root->children[i]);
        }
    }
    node *tmp, *tp;
    while(!q.empty()){
        tp = q.front();
        q.pop();
        for(int i=0; i<26; i++){
            if(tp->children[i] != NULL){
                tmp = tp->fail;
                while(tmp != NULL && tmp->children[i] == NULL)
                    tmp = tmp->fail;
                if(tmp == NULL)
                    tp->children[i]->fail = root;
                else
                    tp->children[i]->fail = tp->children[i]->fail;
                q.push(tp->children[i]);
            }
        }
    }
}

int match(string s, node* root){
    int t, ans=0;
    node* tmp = root, *tp;
    for(int i=0; i<n; i++){
        t = s[i] - 'a';
        while(tmp!=NULL && tmp->children[i]==NULL)
            tmp = tmp->fail;
        if(tmp == NULL)
            tmp = root;
        else
            tmp = tmp->children[i];
        tp = tmp;
        while(tp!=NULL && tp->tag){
            ans++;
            tp->tag = 0;
            tp = tp->fail;
        }
    }
}

string s[10000];

int main(){
    int t, n;
    string in;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>s[i];
        build(s, n);
        fail();
        cin>>in;
        cout<<
    }
    string in, s;
    cin>>in;
    build_bound(in);
    for(int i=0; i<=in.size(); i++)
        cout<<bound_array[i]<<" ";
    cout<<endl;
    while(cin>>s)
        if(match(s, in))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    return 0;
}
*/
