/*
#include <iostream>
using namespace std;

struct node{
    int val;
    node* next;
    node(int val=0):val(val), next(NULL){}
};

// reverse list elements
void reverseList(node* head){
    if(head==NULL || head->next==NULL)
        return;
    node *cur=head->next, *tmp;
    head->next = NULL;
    while(cur != NULL){
        tmp = cur->next;
        cur->next = head;
        head = cur;
        cur = tmp;
    }
}

node* reverseBetween(node* head, int m, int n) {
    if(head==NULL || head->next==NULL || m==n)
        return head;
    node *pre, *tmp1, *tmp2, *tmp3;
    if(m == 1){
        pre = NULL;
        tmp1 = head;
    }
    else{
         pre = head;
         for(int i=2; i<m; i++)
            pre = pre->next;
         tmp1 = pre->next;
    }
     tmp2 = tmp1->next;
    for(int i=m; i<n; i++){
        tmp3 = tmp2->next;
        tmp2->next = tmp1;
        tmp1 = tmp2;
        tmp2 = tmp3;
    }
    if(pre == NULL){
        head->next = tmp2;
        return tmp1;
    }
    pre->next->next = tmp2;
    pre->next = tmp1;
    return head;
}

// l0->l1->l2->l3->...  ==> l0->ln->l1->ln-1->l2->...
// 思路:
//    (1) 将链表分成两部分
//    (2) 将后面的链表逆序
//    (3) 合并两个链表
node* oddAndEvenReverseList(node* head){
    if(head == NULL || head->next == NULL)
        return head;
    node* second = head->next;
    node *tmp1=head, *tmp2=second;
    while(tmp2 != NULL){
        tmp1->next = tmp2->next;
        tmp1 = tmp1->next;
        if(tmp1 != NULL)
            tmp2->next = tmp1->next;
        else
            tmp2->next = NULL;
        tmp2 = tmp2->next;
    }
    tmp1 = second->next;
    second->next = NULL;
    while(tmp1 != NULL){
        tmp2 = tmp1->next;
        tmp1->next = second;
        second = tmp1;
        tmp1 = tmp2;
    }
    tmp1 = head;
    while(tmp1!=NULL && second!=NULL){
        tmp2 = second->next;
        second->next = tmp1->next;
        tmp1->next = second;
        tmp1 = second->next;
        second = tmp2;
    }
    return head;
}

// l0->l1->l2->...   ===>   l0->ln->l2->ln-1->l3->...
// 思路:
//    (1) 将链表分成两部分
//    (2) 将后面的链表逆序
//    (3) 合并两个链表
void reorderList(node* head) {
    if(head==NULL|| head->next==NULL)
        return;
    int n = 0, m;
    node *tmp1=head, *tmp2;
    while(tmp1 != NULL){
        n++;
        tmp1 = tmp1->next;
    }
    m = (n + 1) / 2;
    n = 1;
    tmp1 = head;
    while(n < m){
        n++;
        tmp1 = tmp1->next;
    }
    node *second = tmp1->next;
    tmp1->next = NULL;
    tmp1 = second->next;
    second->next = NULL;
    while(tmp1 != NULL){
        tmp2 = tmp1->next;
        tmp1->next = second;
        second = tmp1;
        tmp1 = tmp2;
    }
    while(head!=NULL && second!=NULL){
        tmp1 = second->next;
        second->next = head->next;
        head->next = second;
        head = second->next;
        second = tmp1;
    }
 }

node* rotateRight(node* head, int k) {
    if(head == NULL)
        return NULL;
    int n= 0;
    node *tmp=head, *tail, *pre=head;
    while(tmp != NULL){
        n++;
        tail = tmp;
        tmp = tmp->next;
    }
    k = k % n;
    if(k == 0)
        return head;
    k = n - k;
    for(int i=1; i<k; i++)
        pre = pre->next;
    tmp = pre->next;
    tail->next = head;
    pre->next = NULL;
    return tmp;
}

int main(){
    node* head = new node(1);
    node* tmp = head;
    for(int i=2; i<6; i++){
        tmp->next = new node(i);
        tmp = tmp->next;
    }
    tmp = rotateRight(head, 2);
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
	return 0;
}
*/
