/*
#include <iostream>
#include <vector>
using namespace std;

bool isMatch(const char *s, const char *p) {
    if(*p == '\0')
        return *s == '\0';
    if(*(p+1) != '*'){
        if(*s!='\0' && (*p==*s || *p=='.'))
            return isMatch(++s, ++p);
        return false;
    }
    else{
        // 对于a*中a的个数不断枚举
        while(*s!='\0' && (*p==*s || *p=='.')){
            if(isMatch(s, p+2))
                return true;
            s++;
        }
        return isMatch(s, p+2);   // *p与*s不等时，跳过*p和*
    }
}

int main(){
    char str[10], pa[10];
    while(cin>>str>>pa)
        cout<<isMatch(str, pa)<<endl;
    return 0;
}
*/
