#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, ans, c, d; cin >> n >> c >> d;
   // vector<long long> v(n); for (auto &it: v) cin >> it;
    map<int, bool> mp; for (int i = 0; i < n; i++) { cin >> ans; mp[ans] = true;}
    if (mp[1]) ans = (n-1)*c;
    else ans = n*c+d;

    long long temp = ans, prev = 1;
    for (auto it:mp) {
        if (it.first == 1) continue;
        temp -= c;
        temp += d*(it.first-prev-1);

        ans = min(ans, temp);
        prev = it.first;
    }

    cout << ans << endl;

}

int main()
{
    int t; cin >> t;
    while (t--) {
        solve();
    }
}


