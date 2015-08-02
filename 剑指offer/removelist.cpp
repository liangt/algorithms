/*
#include <iostream>
using namespace std;

struct node{
    int val;
    node* next;
    node(int val=0):val(val), next(NULL){}
};

// 删除倒数第k个节点
void rekthElement(node* head, int k){
    if(k <= 0)
        return;
    node* tmp = head;
    while(k--){
        if(tmp == NULL)
            return;
        tmp = tmp->next;
    }
    node* pre = NULL;
    while(tmp != NULL){
        pre = head;
        head = head->next;
        tmp = tmp->next;
    }
    if(pre != NULL){
        pre->next = head->next;
        delete head;
    }
}

node* removeElements(node* head, int val) {
    node *tmp;
    while(head!=NULL && head->val==val){
        tmp = head;
        head = head->next;
        delete tmp;
    }
    if(head == NULL)
        return NULL;
    node *pre = head;
    tmp = pre->next;
    while(tmp != NULL){
        if(tmp->val == val){
            pre->next = tmp->next;
            delete tmp;
            tmp = pre->next;
        }
        else{
            pre = tmp;
            tmp = tmp->next;
        }
    }
    return head;
}

node* deleteDuplicates(node* head) {
    if(head==NULL || head->next==NULL)
        return head;
    node *tmp1=head, *tmp2=head->next;
    while(tmp2 != NULL){
        if(tmp1->val != tmp2->val){
            tmp1->next = tmp2;
            tmp1 = tmp2;
        }
        tmp2 = tmp2->next;
    }
    tmp1->next = NULL;
    return head;
}

node* deleteDuplicates2(node* head) {
    node *tmp;
    while(head != NULL){
        tmp = head->next;
        if(tmp == NULL || tmp->val != head->val)
            break;
        else{
            while(tmp!=NULL && tmp->val==head->val)
                tmp = tmp->next;
            head = tmp;
        }
    }
    if(head==NULL)
        return head;
    node *cur=head->next, *h=head;
    while(cur != NULL){
        tmp = cur->next;
        if(tmp == NULL){
            h->next = cur;
            h = h->next;
            break;
        }
        if(tmp->val != cur->val){
            h->next = cur;
            h = h->next;
        }
        else{
            while(tmp!=NULL && tmp->val==cur->val)
                tmp = tmp->next;
        }
        cur = tmp;
    }
    h->next = NULL;
    return head;
}

int main(){
    int a[] = {1, 2, 4, 4, 5, 6};
    node* head = new node(1);
    node* tmp = head;
    for(int i=0; i<6; i++){
        tmp->next = new node(a[i]);
        tmp = tmp->next;
    }
    tmp = deleteDuplicates2(head);
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
	return 0;
}
*/
