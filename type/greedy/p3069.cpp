#include <cstdio>
#include <algorithm>

int a[1001];

int main()
{
    int r, n, c, t, tp;
    while(1)
    {
        scanf("%d %d", &r, &n);
        if(r == -1 && n == -1)
            break;
        for(int i=0; i<n; i++)
            scanf("%d", a+i);
        std::sort(a, a+n);
        c = 0;
        t = 0;
        while(t < n)
        {
            tp = t;
            while(tp < n && a[tp] <= a[t] + r)
                tp++;
            t = tp - 1;
            c++;
            while(tp < n && a[tp] <= a[t] + r)
                tp++;
            t = tp;
        }
        printf("%d\n", c);
    }
    return 0;
}
