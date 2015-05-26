/*
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 10005;
char str[N];
int ans[N];

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%s", str);
        n = strlen(str);
        for(int i=0; i<n; i++)
            ans[i] = N;
        for(int i=0; i<n; i++)
            *(lower_bound(ans, ans+n, str[i])) = str[i];
        printf("%d\n", lower_bound(ans, ans+n, N) - ans);
    }
	return 0;
}
*/
