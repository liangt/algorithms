/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

// O(n)
int max4(int *a, int n){
    int ans = a[0], tmp = 0;
    for(int i = 0; i < n; i++){
        if(tmp <= 0)
            tmp = a[i];
        else
            tmp += a[i];
        if(tmp > ans)
            ans = tmp;
    }
    return ans;
}

int main(){
    //ofstream fout("out.txt");
    srand(time(0));
    int a[1000], tmp, num = 100000;
    for(int n = 1; n < 1000; n++){
        tmp = 0;
        for(int i = 0; i < num; i++){
            for(int j = 0; j < n; j++)
                a[j] = rand() % 101 - 50;
            tmp += max4(a, n);
        }
        cout<<n<<" "<<tmp / (50.0 * num)<<endl;
    }
    return 0;
}
*/
