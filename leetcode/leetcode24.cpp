/*
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

ListNode *swapPairs(ListNode *head) {
    ListNode *root = new ListNode(0);
    root->next = head;
    ListNode *pre=root, *cur=head, *nxt;
    while(cur != NULL){
        nxt = cur->next;
        if(nxt == NULL)
            break;
        pre->next = nxt;
        cur->next = nxt->next;
        nxt->next = cur;
        pre = cur;
        cur = cur->next;
    }
    return root->next;
}

int main(){
    ListNode* l1 = new ListNode(1);
    ListNode* tmp = l1;
    for(int i=2; i<7; i++){
        tmp->next = new ListNode(i);
        tmp = tmp->next;
    }
    tmp = l1;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

    tmp = swapPairs(l1);
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    return 0;
}
*/
