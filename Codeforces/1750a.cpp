#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    long long one = 0, zero = 0, ans = 0, x = 0, y = 0;

    if (s[0] == '1') one = 1;
    else zero = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == '0')
            zero++;
        else {
            ans = max(zero*zero, ans);
            zero = 0;
        }
    }
    ans = max(zero*zero, ans);

    for (int i = 1; i < n; i++) {
        if (s[i] == '1')
            one++;
        else {
            ans = max(one*one, ans);
            one = 0;
        }
    }
    ans = max(one*one, ans);

    for (auto it: s) {
        if (it == '1') x++;
        else y++;
    }

    ans = max(ans, x*y);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}


