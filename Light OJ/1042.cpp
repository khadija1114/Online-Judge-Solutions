#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 0;
    scanf("%d ", &t);
    while (t--){
        long long n, ans, i;
        scanf("%lld", &n);

        for (i = 1; i <= n; i *= 2){
            if (n & i){
                ans = n + i;
                break;
            }
        }

        int mid = __builtin_popcountll(n) - __builtin_popcountll(ans);
        for (i = 0; i < mid; i++){
            ans += (1 << i);
        }

         printf("Case %d: %lld\n", ++cs, ans);
    }
}
