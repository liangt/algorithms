/*
#include <cstdio>

long long n, m;
long long cal(long long i, long long j){
    i += 1;
    j += 1;
    return i * i + 100000 * i + j * j - 100000 * j + i * j;
}

// 时间复杂度 O(nlogn)
bool cmp(long long k){
    long long ans = 0;
    int l,r,mid;
    // 从表达式可知，对于i是递增的，故对每一列进行二分
    for(int j=0; j<n; j++){
       l=-1, r=n;
       while(l+1 < r){
            mid = (l + r) / 2;
            if(cal(mid, j) >= k)
                r = mid;
            else
                l = mid;
        }
        ans += r;   // 统计所有比k小的元素的个数
    }
    return ans >= m;
}

int main(){
    int t;
    long long l,r,mid;
    scanf("%d", &t);
    while(t--){
        scanf("%lld%lld", &n, &m);
        l = -100001 * n;
        r = 3*n * n + 100001 * n;
        while(l+1<r){
            mid = (l +r) / 2;
            if(cmp(mid))
                r = mid;
            else
                l = mid;
        }
        printf("%lld\n", l);  // r表示小于等于r的元素的个数大于等于m的最小的数，所以l便是第m小的数
    }
	return 0;
}
*/
