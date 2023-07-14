#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6+1, mod = 1e9+7;

ll bigmod(ll a, ll b)
{
    if (b==0) return 1;

    ll x = bigmod (a, b/2);
    x = (x*x) % mod;
    if (b&1)
        x = (x*a) % mod;

    return x;
}

ll inverse(ll a)
{
    return bigmod(a, mod-2);
}

int main()
{
    ll fact[2*N+2], n, k, ans;
    int i;

    fact[0] = 1;
    for (i = 1; i < 2*N; i++)
        fact[i] = (fact[i-1] * i) % mod;

    cin >> n >> k;

    ans = (fact[n+k-1] * inverse(fact[n-1]) ) % mod;
    ans = (ans * inverse(fact[k])) % mod;

    cout << ans << "\n";
}
