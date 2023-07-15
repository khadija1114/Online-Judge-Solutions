#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5+10;
const int mod = 998244353;
long long pw[maxN];

void solve()
{
    int n; cin >> n;
    vector<int> v(n); for (auto &it: v) cin >> it;
    vector<bool> inv(n);

    int not_inv = 0, prev_max = 0, prev_max_ind = -1, i = 0;
    for (auto it: v) {
        if (it > prev_max) {
            prev_max = it;
            prev_max_ind = i;
        }
        else {
            inv[prev_max_ind] = 1;
            inv[i] = 1;
        }

        i++;
    }

    int prev_min = n+1, prev_min_ind = -1;

    for (int j = n-1; j >= 0; j--) {
        if (v[j] < prev_min) {
            prev_min = v[j];
            prev_min_ind = j;
        }
        else {
            inv[prev_min_ind] = 1;
            inv[j] = 1;
        }
       // cout << 111 << endl;
    }

   // for (auto it: inv) cout << it << " ";    cout << endl;

    for (auto it: inv) if (!it) not_inv++;

    long long ans = pw[not_inv];
    if (not_inv == n) ans--;
    cout << ans << endl;

}

int main()
{
    pw[0] = 1;
    for (int i = 1; i < maxN; i++) pw[i] = (pw[i-1]*2)%mod;

    int t = 1; cin >> t;
    while (t--)
        solve();
}
