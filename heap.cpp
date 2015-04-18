/*

#include <iostream>
#include <cstdlib>
using namespace std;

const int sz = 10;
int n;
int a[sz];

void down(int i)
{
    int m, j;
    while(i < n / 2)
    {
        j = 2 * i + 1;
        if(j + 1 < n && a[j] < a[j+1])
            j++;
        m = a[j];
        if(a[i] < m)
        {
            a[j]= a[i];
            a[i] = m;
        }
        i = j;
    }
}

void up(int i)
{
    int j, m;
    while(i > 0)
    {
        j = (i - 1) / 2;
        if( a[i] >a[j])
        {
            m = a[i];
            a[i] = a[j];
            a[j] = m;
        }
        i = j;
    }
}

void make_heap()
{
    for(int i=n/2 -1; i>=0; i--)
        down(i);
}

void insert(int k)
{
    if(n < sz)
    {
        a[n] = k;
        up(n);
        n++;
    }
}

int deletemax()
{
    int m =-1;
    if(n > 0)
    {
        m = a[0];
        a[0] = a[n-1];
        a[n-1] = m;
        n--;
        down(0);
    }
    return m;
}

void sortHeap()
{
    for(int i=0; i<sz; i++)
        deletemax();
}

int main()
{
    cout << "Begin ......  " << endl;
     n = 0;
     for(int i=0; i<sz; i++)
        insert(rand() % 100);
    cout<<n<<endl;
    for(int i=0; i<sz; i++)
        cout<<a[i]<<" ";
    cout<<endl;


    for(int i=0; i< sz; i++)
    {
        cout<<deletemax()<<endl;
        for(int i=0; i<sz; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    sortHeap();
    for(int i=0; i<sz; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout << "End ......  " << endl;
    return 0;
}

*/
