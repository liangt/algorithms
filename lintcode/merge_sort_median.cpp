/*
#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int> A, vector<int> B) {
    int m = A.size(), n = B.size();
    if (m > n) return findMedianSortedArrays(B, A);
    int imin = 0, imax = m, half = (m + n + 1) / 2, i, j, num1, num2;
    while (imin <= imax) {
        i = (imin + imax) / 2;
        j = half - i;
        if (j > 0 && i < m && B[j - 1] > A[i])
            imin = i + 1;
        else if (i > 0 && j < n && A[i - 1] > B[j])
            imax = i - 1;
        else {
            if (!i)
                num1 = B[j - 1];
            else if (!j)
                num1 = A[i - 1];
            else
                num1 = max(A[i - 1], B[j - 1]);
            break;
        }
    }
    cout<<num1<<endl;
    if ((m + n) % 2)
        return num1;
    if (i == m)
        num2 = B[j];
    else if (j == n)
        num2 = A[i];
    else
        num2 = min(A[i], B[j]);
    return (num1 + num2) / 2.0;
}

int main(){
    vector<int> A{1, 4, 5, 6};
    vector<int> B{2, 3};
    cout<<findMedianSortedArrays(A, B)<<endl;
    return 0;
}
*/
