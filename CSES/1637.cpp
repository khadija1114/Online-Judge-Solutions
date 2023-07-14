#include<bits/stdc++.h>
using namespace std;

int countMin(int n, vector<int> &dp)
{
    if (n == 0) return 0;
    if (n < 0) return INT_MAX/2;
    if (dp[n] < INT_MAX/2) return dp[n];
    //cout << n << endl;

    int m = n;
    while (m) {
        int digit = m%10;
        m/=10;
        if (!digit) continue;
        dp[n] = min(dp[n], countMin(n-digit, dp)+1);
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n+1, INT_MAX/2);
    cout << countMin(n, dp) << endl;
}
