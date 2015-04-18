/*
#include <iostream>

using namespace std;

template <typename T>
int binary_search(T* a, int n, T k)
{
    if(n<=0)
        return -1;
    int l = 0, r = n, m;
    while(l <= r)
    {
        m = (l + n) / 2;
        if(a[m] == k)
            return m;
        else if(a[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int a[] = {1, 1, 2, 3, 4, 5};
    cout<<binary_search(a, 6, 2)<<endl;
    cout<<binary_search(a, 6, 1)<<endl;
    cout<<binary_search(a, 6, 0)<<endl;
    cout<<binary_search(a, 6, 5)<<endl;
    cout<<binary_search(a, 6, 6)<<endl;
    return 0;
}
*/
