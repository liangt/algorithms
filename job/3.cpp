/*
#include <iostream>
using namespace std;

void ex_gcd(int a, int b,  int& x, int& y){
    if(b == 0){
        x = 1;
        y = 0;
        return;
    }
    int x1, y1;
    ex_gcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - a/b*y1;
}

int pow(int a, int n){
    if(n == 0)
        return 1;
    int ans = pow(a, n / 2);
    ans *= ans;
    if(n & 1)
        return a * ans;
    return ans;
}

int pow2(int a, int n){
    int ans = 1;
    while(n){
        if(n & 1)
            ans *= a;
        a *= a;
        n >>= 1;
    }
    return ans;
}

struct node{
    int val;
    node* next;
    node(int v):val(v), next(NULL){}
};

node* reverseList(node* head){
    node* pre = NULL, *tmp;
    while(head){
            tmp = head;
            head = head->next;
            tmp->next = pre;
            pre = tmp;
    }
    return pre;
}

node* copyList(node* head){
    node *tmp1 = head, *tmp2;
    while(tmp1){
        tmp2 = tmp1->next;
        tmp1->next = new node(tmp1->val);
        tmp1->next->next = tmp2;
        tmp1 = tmp2;
    }
    return head;
}

int main(){
    int a,b, x, y;
    cin>>a>>b;
    ex_gcd(a, b, x, y);
    cout<<x<<" "<<y<<" "<<a*x+b*y<<endl;
    cout<<pow(a, b)<<" "<<pow2(a, b)<<endl;

    node* head = new node(0);
    node* tmp = head;
    for(int i=1; i<4; i++){
        tmp->next = new node(i);
        tmp = tmp->next;
    }
    tmp = head;
    while(tmp){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    tmp = copyList(head);
    while(tmp){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    return 0;
}
*/
