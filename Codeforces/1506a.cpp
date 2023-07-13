#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long a, b, c, r, x, y, ans = 0, n, m;

    cin >> n >> m >> x;

    a = ceil(1.0*x/n);
    b = n - a*n + x;
   // cout << a << "  "<< b << endl;
    ans = (b-1)*m + a;
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();

}
