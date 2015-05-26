/*
#include <cstdio>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int, int> rect;
const int N = 1000;
rect rt[N];
int ans[N];

int main(){
    int t, n, a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            scanf("%d%d", &a, &b);
            if(a > b){
                rt[i].first = b;
                rt[i].second = a;
            }
            else{
                rt[i].first = a;
                rt[i].second = b;
            }
            ans[i] = 1;
        }
        sort(rt, rt+n);
        for(int i=1; i<n; i++)
            for(int j=0; j<i; j++)
                if(rt[j].first<rt[i].first && rt[j].second<rt[i].second && ans[i]<ans[j]+1)
                    ans[i] = ans[j] + 1;
        a = 1;
        for(int i=0; i<n; i++){
            if(ans[i] > a)
                a = ans[i];
        }
        printf("%d\n", a);
    }
	return 0;
}
*/
