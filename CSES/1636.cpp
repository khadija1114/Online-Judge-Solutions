#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int main()
{
    int n, sum;
    cin >> n >> sum;

    vector <int> coins(n), dp(sum+1);
    for (auto &it: coins) cin >> it;
    dp[0] = 1;

    for (auto coin: coins){
        for (int i = coin; i <= sum; i++)
            (dp[i] += dp[i-coin]) %= mod;
    }

    cout << dp[sum] << endl;

}
