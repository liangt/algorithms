/*
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

ListNode *removeNthFromEnd(ListNode *head, int n) {
    int i=0;
    ListNode * cur=head, *pre=head;
    while(i<n){
        cur = cur->next;
        i++;
    }
    if(cur == NULL){
        cur = pre->next;
        delete pre;
        return cur;
    }
    while(cur->next != NULL){
        cur = cur->next;
        pre = pre->next;
    }
    cur = pre->next;
    pre->next = cur->next;
    delete cur;
    return head;
}

int main(){
    ListNode* head = new ListNode(1);
    ListNode* tmp = head;
    for(int i=2; i<6; i++){
        tmp->next = new ListNode(i);
        tmp = tmp->next;
    }
    tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

    tmp = removeNthFromEnd(head, 5);
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    return 0;
}
*/
