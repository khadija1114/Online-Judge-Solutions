#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int main()
{
    int n , sum;
    cin >> n >> sum;
    vector <int> coins(n);
    for (auto &it: coins) cin >> it;

    int dp[sum+1] = {};
    dp[0] = 1;

    for (int i = 1; i <= sum; i++) {
        for (auto coin: coins)
            if (i-coin >= 0)
                (dp[i] += dp[i-coin]) %= mod;
    }

    cout << dp[sum] << endl;
}

