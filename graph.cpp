#include <iostream>

using namespace std;

struct node
{
    int no;
    node* next;
};

const int N = 7;
node* graph[N];

int main()
{
    for(int i=0; i<N; i++)
        graph[i] = new node;

    int m;
    cin>>m;
    int s, e;
    node* temp;
    for(int i=0; i<m; i++)
    {
        cin>>s>>e;
        temp = graph[s-1];
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = new node;
        temp->next->no = e;

        temp = graph[e-1];
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = new node;
        temp->next->no = s;
    }

    for(int i=0; i<N; i++)
    {
        temp = graph[i]->next;
        cout<<i+1;
        while(temp != NULL)
        {
            cout<<" "<<temp->no;
            temp = temp->next;
        }
        cout<<endl;
    }
    return 0;
}
