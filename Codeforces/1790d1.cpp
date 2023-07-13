#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    map<int, long long> mp;
    long long ans = 0;
    int a;

    for (int i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
    }

    for (auto it: mp) {
        for (int i = 0; i < it.second; i++) {
            if (it.second) ans++;
            a = it.first;
            while (mp[a]) {
                mp[a]--; a++;
            }
        }

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




