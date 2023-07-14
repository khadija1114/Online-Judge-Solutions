#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , sum;
    cin >> n >> sum;
    vector <int> coins(n);
    for (auto &it: coins) cin >> it;

    vector<int> dp(sum+1, INT_MAX/2);
    dp[0] = 0;

    for (int i = 1; i <= sum; i++) {
        for (auto coin: coins)
            if (i-coin >= 0)
                dp[i] = min(dp[i-coin]+1, dp[i]);
    }

    cout << (dp[sum] == INT_MAX/2 ? -1 : dp[sum] ) << endl;
}
