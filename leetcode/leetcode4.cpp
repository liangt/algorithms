/*
#include <iostream>
using namespace std;

double findHelp(int A[], int sa, int ea, int B[], int sb, int eb, int k){
    if(sa >= ea)
        return B[sb+k-1];
    if(sb >= eb)
        return A[sa+k-1];
    if(k == 1)
        return A[sa] > B[sb] ? B[sb] : A[sa];
    int mid, ad, bd;
    mid = (k + 1) >> 1;
    ad = sa + mid;
    if(ad > ea)      // 这里对A截取，所以需要A的长度小于等于的长度 （如果不进行截取，可能会数组越界）
        ad = ea ;
    bd = sb + k - ad + sa;
    if(A[ad-1] == B[bd-1])
        return A[ad-1];
    else if(A[ad-1] < B[bd-1])
        return findHelp(A, ad, ea, B, sb, bd, k-ad+sa);
    else
        return findHelp(A, sa, ad, B, bd, eb, ad-sa);
}

double findMedianSortedArrays(int A[], int m, int B[], int n) {
    int k = m + n;
    if(k & 1){
            if(m <= n)
                return findHelp(A, 0, m, B, 0, n, k/2+1);
            else
                return findHelp(B, 0, n, A, 0, m, k/2+1);
    }
    else{
        if(m <= n)
                return (findHelp(A, 0, m, B, 0, n, k/2) + findHelp(A, 0, m, B, 0, n, k/2+1))/2;
            else
                return (findHelp(B, 0, n, A, 0, m, k/2) + findHelp(B, 0, n, A, 0, m, k/2+1))/2;
    }
}

int main(){
    int a[] = {1, 2}, b[] = {2, 3, 4, 5, 6};
    cout<<findMedianSortedArrays(a, 0, b,1)<<endl;
    cout<<findMedianSortedArrays(a, 1, b,0)<<endl;
    cout<<findMedianSortedArrays(a, 1, b,1)<<endl;
    cout<<findMedianSortedArrays(a, 1, b,2)<<endl;
    cout<<findMedianSortedArrays(a, 1, b,3)<<endl;
    cout<<findMedianSortedArrays(a, 2, b,2)<<endl;
    cout<<findMedianSortedArrays(a, 2, b,3)<<endl;
    cout<<findMedianSortedArrays(a, 2, b,4)<<endl;
    cout<<findMedianSortedArrays(a, 1, b,5)<<endl;
    cout<<findMedianSortedArrays(b, 5, a,1)<<endl;
    return 0;
}
*/
