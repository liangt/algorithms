/*
#include <iostream>
using namespace std;

// PAT上面将radix设为int也能过
long long calNumFromStr(char* s, long long radix){
    long long ans = 0;
    int tp;
    while(*s != '\0'){
        if(*s <= '9')
            tp = *s - '0';
        else
            tp = *s - 87;
        ans = ans * radix + tp;
        if(ans < 0)
            return -1;   // 溢出
        s++;
    }
    return ans;
}

void findRadix(char* n1, char* n2, int radix){
    long long num1 = calNumFromStr(n1, radix);
    int mx = 0, tp, n=0;
    char* tmp = n2;
    while(*tmp != '\0'){
        if(*tmp <= '9')
            tp = *tmp - '0';
        else
            tp = *tmp - 87;
        if(tp > mx)
            mx = tp;
        tmp++;
        n++;
    }
    if(n == 1){// 只有一位，也只有这种情况，才会有多个解
        if(num1 == mx)
            cout<<mx+1<<endl;
        else
            cout<<"Impossible"<<endl;
        return;
    }
    long long num2, rlow, rhigh, rmid;
    rlow = mx + 1;
    rhigh = num1 + 1;
    while(rlow <= rhigh){
        rmid = (rlow + rhigh) / 2;
        num2 =  calNumFromStr(n2, rmid);
        if(num2==-1 || num2 > num1)
            rhigh = rmid - 1;
        else if(num2 < num1)
            rlow = rmid + 1;
        else{
            cout<<rmid<<endl;
            return;
        }
    }
    cout<<"Impossible"<<endl;
}

int main(){
    char n1[11], n2[11];
    int tag, radix;
    cin>>n1>>n2>>tag>>radix;
    if(tag == 1)
        findRadix(n1, n2, radix);
    else
        findRadix(n2, n1, radix);
	return 0;
}
*/
