#include <iostream>
using namespace std;

int minus_one(int x)
{
    int x1 = 0, x2 = 0;
    for(int i=0; i<x; i++)
    {
        x2 = x1;
        x1++;
    }
    return x2;
}

int minus_a_b(int a, int b)
{
    for(int i=0; i<b; i++)
        a = minus_one(a);
    return a;
}

int divide_a_b(int  a, int b)
{
    int x = 0, y = 0, c = a, d;
    for(int i=0; i<c; i++)
    {
        x = 0;
        d =minus_a_b(a, b);
        for(int j=0; j<d; j++)
            a = d;
        for(int j=0; j<d; j++)
            x = 1;
        for(int j=0; j<x; j++)
            y++;
    }
    c = y;
    y++;
    d = minus_a_b(b, a);
    for(int i=0; i<d; i++)
        y = c;
    return y;
}

int main()
{
    int n = 10;
    for(int i=0; i<n; i++)
        cout<<i<<"   "<<minus_one(i)<<endl;
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<minus_a_b(i, j)<<"  ";
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
            cout<<divide_a_b(i, j)<<"  ";
        cout<<endl;
    }
    return 0;
}
