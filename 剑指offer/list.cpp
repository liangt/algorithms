/*
#include <iostream>
using namespace std;

// 解决list问题的一大神器 --- 快慢指针
struct node{
    int val;
    node* next;
    node(int val=0):val(val), next(NULL){}
};

// 返回倒数第k个节点
node* rkthElement(node* head, int k){
    if(k <= 0)
        return NULL:
    node* tmp = head;
    while(k--){
        if(tmp == NULL)
            return NULL;
        tmp = tmp->next;
    }
    while(tmp != NULL){
        head = head->next;
        tmp = tmp->next;
    }
    return head;
}

// 判环
bool hasCycle(node *head) {
    node* tmp = head;
    while(tmp != NULL){
        for(int i=0; i<2; i++){
            tmp = tmp->next;
            if(tmp == NULL)
                return false;
        }
        head = head->next;
        if(tmp == head)
            return true;
    }
    return false;
}

// 判环，若存在输出构成环的第一个节点，否则输出NULL
node *detectCycle(node *head) {
    node* fast = head;
    node* low = head;
    while(fast != NULL){
        for(int i=0; i<2; i++){
            fast = fast->next;
            if(fast == NULL)
                return NULL;
        }
        low = low->next;
        if(fast == low){
            while(low != head){
                low = low->next;
                head = head->next;
            }
            return low;
        }
    }
    return NULL;
}

// 两个链表相交的第一个节点
node* getIntersectionNode(node *headA, node *headB){
    int na=0, nb=0;
    node *a=headA, *b=headB;
    while(a != NULL){
        na++;
        a = a->next;
    }
    while(b != NULL){
        nb++;
        b = b->next;
    }
    if(na < nb){
        nb -= na;
        for(na=0; na<nb; na++)
            headB = headB->next;
        while(headA != NULL && headB != NULL){
                if(headA == headB)
                    return headA;
                headA = headA->next;
                headB = headB->next;
        }
    }
    else{
        na -= nb;
        for(nb=0; nb<na; nb++)
            headA = headA->next;
        while(headA != NULL && headB != NULL){
                if(headA == headB)
                    return headA;
                headA = headA->next;
                headB = headB->next;
            }
    }
    return NULL;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    node* head = new node;
    node* tmp = head;
    for(int i=0; i<10; i++){
        tmp->next = new node(a[i]);
        tmp = tmp->next;
    }
    tmp = head->next;
    while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    rekthElement(head, 10);
    tmp = head->next;
     while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    rekthElement(head, 10);
    tmp = head->next;
     while(tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
	return 0;
}
*/
