#include<bits/stdc++.h>
using namespace std;
const int maxN = 65;
long long dp[maxN][maxN];
string s;

void Clear(int n)
{
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            dp[i][j] = -1;
}

long long calculatePossiblePalindrome(int l, int r)
{
    if (l > r)
        return 0;
    if (l == r)
        return dp[l][r] = 1;

    if (dp[l][r] != -1)
        return dp[l][r];
    if (s[l] == s[r])
        return dp[l][r] = 1 + calculatePossiblePalindrome(l, r-1) + calculatePossiblePalindrome(l+1, r);

    return dp[l][r] = calculatePossiblePalindrome(l, r-1) + calculatePossiblePalindrome(l+1, r) - calculatePossiblePalindrome(l+1, r-1);

}


long long solve()
{
    cin >> s;
    Clear(s.size());

    return calculatePossiblePalindrome(0, s.size()-1);
}

int main()
{
    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
        printf("Case %d: %lld\n", ++cs, solve());
//        for (int i = 0; i < s.size(); i++)
//            for (int j = i; j < s.size(); j++)
//            cout << i << j << " " << dp[i][j] << endl;
    }
}
