/*
#include<iostream>
using namespace std;

const  int INF =  99999999;
int p[20] = {0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};

long long  mx, n;
long long num;
void solve(long long m,int f,int t,int pr){
    if(t>mx||(t==mx&&m<num)){
        num=m;
        mx=t;
    }
    int j=0,l=1,nt;
    long long i=m;
    while(j<pr){
        j++;
        l++;
        if(n/i<p[f])
            break;
        nt=t*l;
        i=i*p[f];
        if(i<=n)
            solve(i,f+1,nt,j);
    }
}

int main(){
    int t;
    mx=-1;
    num=-1;
    cin>>n;
    solve(1,1,1,30);
    cout<<num<<endl;
	return 0;
}
*/
