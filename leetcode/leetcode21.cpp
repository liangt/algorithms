/*
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    ListNode *ans, *l3;
    if(l1->val > l2->val){
        l3 = l2;
        l2 = l2->next;
    }
    else{
        l3 = l1;
        l1 = l1->next;
    }
    ans = l3;
    while(l1!=NULL && l2!=NULL){
        if(l1->val > l2->val){
            l3->next = l2;
            l2 = l2->next;
        }
        else{
            l3->next = l1;
            l1 = l1->next;
        }
        l3 = l3->next;
    }
    if(l1 == NULL)
        l3->next = l2;
    else
        l3->next = l1;
    return ans;
}

int main(){
    ListNode* l1 = new ListNode(1);
    ListNode* tmp = l1;
    for(int i=2; i<6; i++){
        tmp->next = new ListNode(i);
        tmp = tmp->next;
    }
    tmp = l1;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

    ListNode* l2 = new ListNode(1);
    tmp = l2;
    for(int i=2; i<6; i++){
        tmp->next = new ListNode(i);
        tmp = tmp->next;
    }
    tmp = l2;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

    tmp = mergeTwoLists(l1, l2);
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    return 0;
}
*/
