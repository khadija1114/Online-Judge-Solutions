#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    long long ans = 0; int mn = INT_MAX, mx = 0;
    for (auto &it: a) cin >> it, mn = min(mn, it);
    for (auto &it: b) cin >> it, mx = max(mx, it);

    sort(a.begin(), a.end());
    a[0] = b[m-1];
    vector<int> v;

    for (int i = 1; i < n; i++)
        v.push_back(a[i]);
    for (int i = 0; i < m-1; i++)
        v.push_back(b[i]);
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n-1; i++)
        ans += v[i];

    ans += a[0];


    cout << ans << endl;
}


int main()
{
    int t; cin >> t;
    while (t--)
    solve();
}
