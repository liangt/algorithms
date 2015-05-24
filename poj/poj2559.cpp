/*
#include <cstdio>
#include <stack>
#include <utility>
using namespace std;

typedef pair<int,int> node;

int main(){
    int n, h;
    long long th, tp, ans;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;
        stack<node> st;
        ans = 0;
        while(n--){
            scanf("%d", &h);
            th = 0;
            while(!st.empty() && st.top().first >= h){
                th += st.top().second;
                tp = st.top().first * th;
                if(tp > ans)
                    ans = tp;
                st.pop();
            }
            st.push(node(h, th+1));
        }
        th = 0;
        while(!st.empty()){
            th += st.top().second;
            tp = st.top().first * th;
            if(tp > ans)
                ans = tp;
            st.pop();
        }
        printf("%lld\n", ans);
    }
	return 0;
}
*/
