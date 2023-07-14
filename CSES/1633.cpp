#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int main()
{
    int n;
    cin >> n;

    int dp[n+1] = {};
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int coin = 1; coin <= 6; coin++)
            if (i-coin >= 0)
                (dp[i] += dp[i-coin]) %= mod;
    }

    cout << dp[n] << endl;
}
