#include <cstdio>

char a[2002];

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    getchar();
    for(int i=0; i<n; i++)
    {
        scanf("%c", a+i);
        getchar();
    }

    int l = 0, r = n - 1, tl, tr;
    while(l <= r)
    {
        tl = l;
        tr = r;
        while(tl <= tr && a[tl] == a[tr])
        {
            tl++;
            tr--;
        }
        if(tl > tr || a[tl] < a[tr])
        {
            putchar(a[l]);
            l++;
        }
        else
        {
            putchar(a[r]);
            r--;
        }
        c++;
        if(c % 80 == 0)
            putchar('\n');
    }
    return 0;
}
