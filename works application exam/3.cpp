/*
#include <iostream>
using namespace std;

void test(string s, int k, int tag){
    if(k == 0){
        cout<<s<<endl;
        return;
    }
    int t;
    char tp;
    if(tag == 1){
        t = 1;
        for(int i=0; i<=9; i++){
            tp = '0' + i;
            test(s+tp, k-1, t);
            t = -t;
        }
    }
    else{
        t = 1;
        for(int i=9; i>=0; i--){
            tp = '0' + i;
            test(s+tp, k-1, t);
            t = -t;
        }
    }
}

int main(){
    int n, m;
    cin>>n;
    m = 1;
    for(int i=0; i<n; i++)
        m *= 10;
    cout<<m-1<<endl;
    test("", n, 1);
	return 0;
}
*/
