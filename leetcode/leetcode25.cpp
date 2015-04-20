/*
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* root = new ListNode(0);
    root->next = head;
    ListNode *pre=root;
    vector<ListNode*> nxts(k);
    nxts[0] = head;
    while(nxts[0]  != NULL){
            for(int i=1; i<k; i++){
                nxts[i] = nxts[i-1]->next;
                if(nxts[i] == NULL)
                    return root->next;
            }
            nxts[0]->next = nxts[k-1]->next;
            pre->next = nxts[k-1];
            for(int i=1; i<k; i++)
                nxts[i]->next = nxts[i-1];
            pre = nxts[0];
            nxts[0] = pre->next;
    }
    return root->next;
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

    tmp = reverseKGroup(l1, 3);
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    return 0;
}
*/
