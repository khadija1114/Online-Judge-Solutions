/// sod from 1 to n
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll inv2, mod = 1e9+7;

ll bigmod(ll a , ll b)
{
    if (b == 0) return 1;

    ll x = bigmod(a, b/2);

    x = (x*x) % mod;
    if (b&1) x = (x*a) % mod;

    return x;
}

ll sum (ll n)
{
    return ((((n % mod) * ((n+1)%mod)) % mod ) * inv2) % mod;
}

ll solve(ll n)
{
    ll ans = 0, l = 1;
    inv2 = bigmod(2, mod-2);
    while (l <= n){
        ll k = n/l;
        ll r = n/k;

        ans += (((sum(r) - sum(l-1) + mod) % mod) * k ) % mod;
        ans = (ans + mod) % mod;

      //  cout << l << " " << r << " " << k << " " << ans << endl;

        l = r+1;
    }

    return ans;

}

int main()
{
    ll n;
    cin >> n;
    cout << solve(n) << "\n";
}
