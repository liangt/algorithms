/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct node{
    int val;
    node* next;
    node(int val=0):val(val), next(NULL){}
};

// 不是stable的
node* partition1(node* head, int x) {
    node *st = head;
    while(st != NULL && st->val<=x)
        st = st->next;
    node *ed = NULL;
    if(st != NULL)
        ed = st->next;
    int tmp;
    while(ed != NULL){
        if(ed->val <= x){
            tmp = st->val;
            st->val = ed->val;
            ed->val = tmp;
            st = st->next;
        }
        ed = ed->next;
    }
    return head;
}

// stable
node* partition2(node* head, int x) {
    if(head==NULL || head->next==NULL)
        return head;
    node *s = new node(0);
    node *l = new node(0);
    node *st=s, *lt=l;
    while(head != NULL){
            if(head->val < x){
                st->next = head;
                st = st->next;
            }
            else{
                lt->next = head;
                lt = lt->next;
            }
            head = head->next;
    }
    lt->next = NULL;
    st->next = l->next;
    return s->next;
}

node* insertionSortList(node* head) {
    if(head == NULL || head->next==NULL)
        return head;
    node *hd = new node(0), *tmp, *tp, *next;
    while(head != NULL){
        tmp = hd;
        next = head->next;
        while(tmp->next != NULL){
            if(tmp->next->val > head->val){
                tp = tmp->next;
                tmp->next = head;
                tmp->next->next = tp;
                break;
            }
            tmp = tmp->next;
        }
        if(tmp->next == NULL){
            tmp->next = head;
            tmp->next->next = NULL;
        }
        head = next;
    }
    return hd->next;
}

int main(){
    node* head = new node(2);
    node* tmp = head;
    srand(time(0));
    for(int i=2; i<6; i++){
        tmp->next = new node(rand()%100);
        tmp = tmp->next;
    }
    tmp =head;
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    tmp = insertionSortList(head);
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
	return 0;
}
*/
