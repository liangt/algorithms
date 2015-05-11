/*
#include <cstdio>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    priority_queue<int, vector<int>, greater<int> > pq;
    int in;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &in);
        pq.push(in);
    }

    long long res = 0;
    int t;
    while(pq.size() > 1)
    {
        t = 0;
        t += pq.top();
        pq.pop();
        t += pq.top();
        pq.pop();
        res += t;
        pq.push(t);
    }
    printf("%lld\n", res);
    return 0;
}
*/
