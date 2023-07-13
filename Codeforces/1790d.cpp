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

    long long  prev = -1, temp_max = 0, total = 0, mn = INT_MAX, st = 0;
    for (auto it: mp) {
        if (prev == -1) {
            prev = it.first;
            temp_max = it.second;
            total += it.second;
            mn = min(mn, it.second);
            st++;
            continue;
        }
       // cout << "  " << it.first << " " << prev << endl;
        if (it.first == prev+1) {
            temp_max = max(temp_max, it.second);
            st++;
            mn = min(mn, it.second);
            total += it.second;
        }
        else {
            ans += mn;

            long long baki = total - mn*st;
            ans += baki;
            //cout << it.first << " " << mn << " " << baki << endl;

            st = 0; mn = INT_MAX;

            temp_max = 0;
        }

        prev = it.first;
    }

    ans += mn;
    long long baki = total - mn*st;
    ans += baki;

    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) {
        solve();
    }
}



