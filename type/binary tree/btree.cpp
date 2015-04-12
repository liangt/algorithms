#include <iostream>
#include <queue>
using namespace std;

const int N = 30;
int post[N];
int pre[N];
int in[N];
int level[N];
int idx;

//  后序遍历 + 中序遍历 ==> 先序遍历
void post_in_pre(int s1, int e1, int s2, int e2)
{
    int i;
    pre[idx++] = post[e1];
    for(i=s2; i<=e2; i++)
        if(in[i] == post[e1])
            break;
    if(i > s2)
        post_in_pre(s1, s1+i-1-s2, s2, i-1);

    if(i < e2)
        post_in_pre(i-e2+e1, e1-1, i+1, e2);
}

//  先序遍历 + 中序遍历 ==> 后序遍历
void pre_in_post(int s1, int e1, int s2, int e2)
{
    int i;
    for(i=s2; i<=e2; i++)
        if(in[i] == pre[s1])
            break;
    if(i > s2)
        pre_in_post(s1+1, s1-s2+i, s2, i-1);

    if(i < e2)
        pre_in_post(i+1-e2+e1, e1, i+1, e2);

    post[idx++] = pre[s1];
}

struct node
{
    int s1, e1, s2, e2;
};

//  后序遍历 + 中序遍历 ==> 层次遍历
void post_in_level(int n)
{
    queue<node> q;
    node tmp = {0, n-1, 0, n-1};
    node tp;
    q.push(tmp);
    int i;
    while(q.size())
    {
        tmp = q.front();
        q.pop();
        level[idx++] = post[tmp.e1];
        for(i=tmp.s2; i<=tmp.e2; i++)
            if(in[i] == post[tmp.e1])
                break;
        if(i > tmp.s2)
        {
            tp = {tmp.s1, tmp.s1+i-1-tmp.s2, tmp.s2, i-1};
            q.push(tp);
        }

        if(i < tmp.e2)
        {
          tp = {i-tmp.e2+tmp.e1, tmp.e1-1, i+1, tmp.e2};
          q.push(tp);
        }
    }
}

//  先序遍历 + 中序遍历 ==> 层次遍历
void pre_in_level(int n)
{
    queue<node> q;
    node tmp = {0, n-1, 0, n-1};
    node tp;
    q.push(tmp);
    int i;
    while(q.size())
    {
        tmp = q.front();
        q.pop();
        level[idx++] = pre[tmp.s1];
        for(i=tmp.s2; i<=tmp.e2; i++)
            if(in[i] == pre[tmp.s1])
                break;
        if(i > tmp.s2)
        {
            tp = {tmp.s1+1, tmp.s1+i-tmp.s2, tmp.s2, i-1};
            q.push(tp);
        }

        if(i < tmp.e2)
        {
          tp = {i-tmp.e2+tmp.e1+1, tmp.e1, i+1, tmp.e2};
          q.push(tp);
        }
    }
}

int main()
{
    /* 测试样例
    7
    2 3 1 5 7 6 4
    1 2 3 4 5 6 7
    */
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>post[i];
    for(int i=0; i<n; i++)
        cin>>in[i];

    idx = 0;
    post_in_pre(0, n-1, 0, n-1);

    for(int i=0; i<n; i++)
        cout<<pre[i]<<" ";
    cout<<endl;

    idx = 0;
    pre_in_post(0, n-1, 0, n-1);

    for(int i=0; i<n; i++)
        cout<<post[i]<<" ";
    cout<<endl;

    idx = 0;
    post_in_level(n);

    for(int i=0; i<n; i++)
        cout<<level[i]<<" ";
    cout<<endl;

    idx = 0;
    pre_in_level(n);

    for(int i=0; i<n; i++)
        cout<<level[i]<<" ";
    cout<<endl;
}
