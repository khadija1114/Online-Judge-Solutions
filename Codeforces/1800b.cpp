#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int ar[26] = {}, br[26] = {};
    for (auto it: s) {
        if (it <= 'Z' && it >= 'A') ar[it-'A']++;
        else br[it-'a']++;
    }

    int ans = 0;
    for (int i = 0; i < 26; i++) {
        int mn = min(ar[i], br[i]);

        ans += mn;
        ar[i] -= mn; br[i] -= mn;

        mn = max(ar[i]/2, br[i]/2);

        mn = min(mn, k);
        ans += mn;
        k -= mn;
    }

    return ans;
}

int main()
{
    int t; cin >> t;
    while (t--)
        cout << solve() << endl;
}

