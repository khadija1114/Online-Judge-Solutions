#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; long long m; cin >> n >> m;

    vector<long long> dp(n+1); // dp[i] = how many pairs have gcd i

    for (int i = n; i > 0; i--) {
        long long mul_i = n/i;
        dp[i] = mul_i*(mul_i-1)/2;
        for (int j = i+i; j <= n; j += i)
            dp[i] -= dp[j];
    }

    long long ans = 0;

    for (int i = n; i > 1; i--) {
        long long mul = min(dp[i]/(i-1), m/(i-1));
        m -= mul*(i-1);
        ans += mul*i;

       // cout << dp[i] << " " << mul*(i-1) << " " << ans << endl;
    }

    if (m) puts("-1");
    else cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) solve();
}
