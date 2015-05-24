/*
#include<cstdio>

struct Node
{
	int val;
	int pos;
	int ct;
};

const int N = 100;
int hgt[N];
Node st[N];

int main()
{
	int n, v, top, h, t, ans;
	scanf("%d", &n);
	top = -1;
	ans = 0;
	for(int i=0; i<n; i++)
	{
		scanf("%d", &v);
		h = 0;
		while(top > -1 && st[top].val >= v)
		{
			t = st[top].ct + h;
			hgt[st[top].pos] = t;
			if(ans < t)
				ans = t;
			h += st[top].ct;
			top--;
		}
		top++;
		st[top].val = v;
		st[top].pos = i;
		st[top].ct = 1 + h;
	}
	h = 0;
	while(top > -1)
	{
		t = st[top].ct + h;
		hgt[st[top].pos] = t;
		if(t > ans)
			ans = t;
		h += st[top].ct;
		top--;
	}
	for(int i=0; i<n; i++)
		printf("%d ", hgt[i]);
	printf("\n%d\n", ans);
	while(1);
	return 0;
}
*/

/* p-2559
#include <cstdio>

const int N = 100005;  
  
struct Elem  
{  
    int height;  
    int count;  
};  
  
Elem stack[N];  
int top;  
  
int main()  
{  
    int height, n;  
    long long ans, tot, tmp;  
    while (scanf("%d", &n) != EOF && n)  
    {  
        top = 0;  
        ans = 0;  
        for (int i = 0; i < n; ++i)  
        {  
            scanf("%d", &height);  
            tmp = 0;  
            while (top > 0 && stack[top - 1].height >= height)  
            {  
                tot = stack[top - 1].height * (stack[top - 1].count + tmp);  
                if (tot > ans) ans = tot;  
                tmp += stack[top - 1].count;  
                --top;  
            }  
            stack[top].height = height;  
            stack[top].count = 1 + tmp;  
            ++top;  
        }  
        tmp = 0;  
        while (top > 0)  
        {  
            tot = stack[top - 1].height * (stack[top - 1].count + tmp);  
            if (tot > ans) ans = tot;  
            tmp += stack[top - 1].count;  
            --top;  
        }  
        printf("%lld\n", ans);  
    }  
    return 0;  
}  
*/