#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n, m, a, b, c, d; cin >> n >> m >> a >> b >> c >> d;
    int ans = min(n, m);

    if ((a == 1 && b == 1) || (a == 1 && b == m) || (a == n && b == 1) || (a == n && b == m)) {
        ans = min(ans, 2);
    }

    swap(a, c); swap(b, d);
    if ((a == 1 && b == 1) || (a == 1 && b == m) || (a == n && b == 1) || (a == n && b == m)) {
        ans = min(ans, 2);
    }

    if (min({a, b, c, d}) == 1 || a == n || b == m || c == n || d == m)
        ans = min(ans, 3);


    return ans;
}

int main()
{
    int t; cin >> t;
    while (t--) cout << solve() << endl;
}
