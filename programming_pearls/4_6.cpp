/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n1, n2, n, tmp, tp;
    cin>>n1>>n2;
    cout<<"White: "<<n1<<", Black: "<<n2<<endl;
    n = n1 + n2;
    while(n != 1){
        tmp = rand() % n;
        n--;
        if(tmp < n1){
            cout<<"White, ";
            n1--;
            tp = rand() % n;
            if(tp < n1){
                cout<<"White"<<endl;
                n1--;
                n2++;
            }
            else
                cout<<"Black"<<endl;
        }
        else{
            cout<<"Black, ";
            tp = rand() % n;
            if(tp < n1){
                cout<<"White"<<endl;
                n1--;
            }
            else{
                cout<<"Black"<<endl;
                n2--;
            }
        }
    }
    cout<<n1<<" "<<n2<<endl;
    if(n1)
        cout<<"Left: White"<<endl;
    else
        cout<<"Left: Black"<<endl;
    return 0;
}
*/
