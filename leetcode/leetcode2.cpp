/*
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        int carry=0, tp;
        tp = l1->val + l2->val;
        if(tp > 9){
            tp -= 10;
            carry = 1;
        }
        ListNode* ans = new ListNode(tp);
        ListNode* tmp = ans;
        l1 = l1->next;
        l2 = l2->next;
        while(l1 != NULL && l2 != NULL){
            tp = l1->val + l2->val + carry;
            if(tp > 9){
                carry = 1;
                tp -= 10;
            }
            else
                carry = 0;
            tmp->next = new ListNode(tp);
            tmp = tmp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != NULL){
            tp = l1->val + carry;
            if(tp > 9){
                tp -= 10;
                carry = 1;
            }
            else
                carry = 0;
            tmp->next = new ListNode(tp);
            tmp = tmp->next;
            l1 = l1->next;
        }
         while(l2!= NULL){
            tp = l2->val + carry;
            if(tp > 9){
                tp -= 10;
                carry = 1;
            }
            else
                carry = 0;
            tmp->next = new ListNode(tp);
            tmp = tmp->next;
            l2 = l2->next;
        }
        if(carry)
            tmp->next = new ListNode(1);
        return ans;
    }

int main(){
    int a[] = {2, 4, 3}, b[] = {5, 6, 4};
    ListNode* l1 = new ListNode(2);
    ListNode* l2 = new ListNode(5);
    ListNode* tp1 = l1, *tp2 = l2;
    for(int i=1; i<3; i++){
        tp1->next = new ListNode(a[i]);
        tp2->next = new ListNode(b[i]);
        tp1 = tp1->next;
        tp2 = tp2->next;
    }
    tp1 = addTwoNumbers(l1, l2);
    while(tp1 != NULL){
        cout<<tp1->val<<" --> ";
        tp1 = tp1->next;
    }
    return 0;
}
*/
