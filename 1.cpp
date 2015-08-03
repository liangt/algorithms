/*
#include <iostream>
using namespace std;

int p[10001], q[10001];

int main(){
    int a, b;
    cin>>a>>b;
    for(int i=1; i<=a; i++)
        if(a % i == 0)
            p[i] = 1;
    for(int i=1; i<=b; i++)
        if(b % i == 0)
            q[i] = 1;
    for(int i=1; i<=a; i++)
        if(p[i])
            for(int j=1; j<=b; j++)
                if(q[j])
                    cout<<i<<" "<<j<<endl;
	return 0;
}
*/
