#include <cstdio>
#include <algorithm>
using namespace std;

pair<int, int> a[25001];

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    for(int i=0; i<n; i++)
        scanf("%d %d", &a[i].first, &a[i].second);
    sort(a, a + n);
    int idx = 0, ct = 0, p = 0, tp;
    while(idx < n && p < t)
    {
        tp = p;
        while(idx < n && a[idx].first <= tp + 1)
        {
            if(p < a[idx].second)
                p = a[idx].second;
            idx++;
        }
        if(p ==tp)
            break;
        ct++;
    }
    if(p >= t)
        printf("%d\n", ct);
    else
        puts("-1\n");
    return 0;
}
