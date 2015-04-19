/*
#include <iostream>
#include <utility>
#include <vector>
#include <queue>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

typedef pair<int, ListNode*> pnode;

struct cmp{
    bool operator()(pnode p1, pnode p2){
        return (p1.second)->val > (p2.second)->val;
    }
};

ListNode *mergeKLists(vector<ListNode *> &lists) {
    priority_queue<pnode, vector<pnode>, cmp> pq;
    ListNode * ans = NULL, *tp;

    for(int i=0; i<lists.size(); i++)
        if(lists[i] != NULL)
            pq.push(pnode(i, lists[i]));

    pnode tmp;
    while(!pq.empty()){
        tmp = pq.top();
        pq.pop();
        if(ans == NULL){
                ans = tmp.second;
                tp = ans;
        }
        else{
                tp->next = tmp.second;
                tp = tp->next;
        }

        lists[tmp.first] = lists[tmp.first]->next;
        if(lists[tmp.first] != NULL)
            pq.push(pnode(tmp.first, lists[tmp.first] ));
    }
    return ans;
 }

int main(){
    vector<ListNode*> lists(3);
    ListNode* tmp;
    for(int i=0; i<lists.size(); i++){
        lists[i] = new ListNode(1);
        tmp = lists[i] ;
        for(int i=2; i<6; i++){
            tmp->next = new ListNode(i);
            tmp = tmp->next;
        }
    }

    for(int i=0; i<lists.size(); i++){
        tmp = lists[i] ;
         while(tmp != NULL){
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
    }

    tmp = mergeKLists(lists);
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    return 0;
}
*/
