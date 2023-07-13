#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int ans = 0, mn1, mx1, mn2, mx2;
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &it: v) cin >> it;

    mn1 = v[0]-x;
    mx1 = v[0]+x;

    for (int i = 1; i < n; i++) {
       mn2 = max(mn1, v[i]-x);
        mx2 = min(mx1, v[i]+x);

        if (mx2 < mn2) {
            ans++;
            mn1 = v[i]-x;
            mx1 = v[i]+x;
        }
        else {
            mn1 = mn2; mx1 = mx2;
        }

        //cout << i << " " << mn1 << " " << mx1 << endl;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}

