/*
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> anagrams(vector<string> &strs) {
        // write your code here
        int n = strs.size();
        string tmp;
        map<string, vector<int>> mp;
        for(int i = 0; i < n; i++){
            tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(i);
        }
        map<string, vector<int>>::iterator it;
        vector<string> ans;
        for(it = mp.begin(); it != mp.end(); it++){
            n = it->second.size();
            if(n > 1){
                for(int i = 0; i < n; i++)
                    ans.push_back(strs[it->second[i]]);
            }
        }
        return ans;
}

int longestCommonSubstring(const string &A, const string &B) {
        // write your code here
        int n1 = A.size(), n2 = B.size();
        n1++, n2++;
        int **a = new int*[n1];
        for(int i = 0; i < n1; i++)
            a[i] = new int[n2];
        for(int i = 0; i < n1; i++)
            for(int j = 0; j < n2; j++)
                a[i][j] = 0;
        int tmp = 0;
        for(int i = 1; i < n1; i++)
            for(int j = 1; j < n2; j++){
                if(A[i-1] == B[j-1])
                    a[i][j] = a[i-1][j-1] + 1;
                else{
                    tmp = a[i-1][j-1];
                    if(tmp < a[i][j-1])
                        tmp = a[i][j-1];
                    if(tmp < a[i-1][j])
                        tmp = a[i-1][j];
                    a[i][j] = tmp;
                }
            }
        tmp = a[n1-1][n2-1];
        for(int i = 0; i < n1; i++)
            delete [] a[i];
        delete [] a;
        return tmp;
}

int removeElement(vector<int> &A, int elem) {
        // write your code here
        int i = -1, j = A.size();
        while(i < j){
            while(i < j && A[++i] != elem);
            while(i < j && A[--j] == elem);
            if(i < j){
                A[i] = A[j];
                A[j] = elem;  // 这一步可以不需要
            }
        }
        A.erase(A.begin()+i, A.end());
        return i;
}

int main(){
    vector<string> strs{"lint","intl","inlt","code"};
    vector<string> ans = anagrams(strs);
    for(int i=0 ; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;

    vector<int> a{0,4,4,0,0,2,4,4};
    cout<<removeElement(a, 4)<<endl;
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/
