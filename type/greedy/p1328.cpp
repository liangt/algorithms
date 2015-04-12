#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

pair<double, double> a[1001];

int main()
{
    int n, d, c;
    c = 0;
    while(1)
    {
        scanf("%d %d", &n, &d);
        if(n == 0 && d == 0)
            break;
        c++;
        bool has_solution = true;
        for(int i=0; i<n; i++)
        {
            scanf("%lf %lf", &a[i].first, &a[i].second);
            if(a[i].second > d)
                has_solution = false;
        }
        if(!has_solution)
        {
            printf("Case %d: -1\n", c);
           continue;
        }

        double lx, rx, tp;
        for(int i=0; i<n; i++)
        {
            tp = sqrt(d * d - a[i].second  * a[i].second);
            lx = a[i].first - tp;
            rx = a[i].first + tp;
            a[i].first = lx;
            a[i].second = rx;
        }
        sort(a, a + n);
        int ct = 1;
        tp = a[0].second;
        for(int i=1; i<n; i++)
            if(a[i].first > tp)
            {
                ct++;
                tp = a[i].second;
            }
            else if(tp > a[i].second)
                tp = a[i].second;
        printf("Case %d: %d\n", c, ct);
    }
    return 0;
}
