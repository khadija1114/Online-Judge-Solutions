#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n; cin >> n;
    vector<long long> v(n), g; for(auto &it: v) cin >> it;

    //if (n == 2 && v[0] != v[1]) return true;

    int mx = 0, mn = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n;j++){
            long long gcd = __gcd(v[i], v[j]);
            mn = min(mn, gcd);
            mx = max(mx, gcd);
            g.push_back(gcd);
        }
    }

    if (mx > n) return true;

    for (int i = 1; i <= mx; i++) {
        bool o = true;
        for (int j = 0; j < n && o; j++) {
            for (int k = j+1; k < n && o; k++) {
                long long gcd = __gcd(v[j]+i, v[k]+i);
                if (gcd > 1)
                    one = false;
            }
        }

        if (o) return true;
    }
}

bool solve(int n)
{
    int n; cin >> n;
    vector<long long> v(n); for(auto &it: v) cin >> it;

    int odd = 0, even = 0;
    for (auto it: v)
        if (it&1) odd++;
        else even++;

    if (odd > 1 && even > 1)
        return false;

    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++) if (v[i] == v[i-1]) return false;

    return true;
}

int main()
{
    int t; cin >> t;
    while (t--)
        if (solve()) puts("YES");
        else puts("NO");
}


