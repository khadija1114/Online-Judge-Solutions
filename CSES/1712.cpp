#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll m = 1e9+7;

ll bigmod(ll a, ll b, ll mod)
{
    if (b == 0) return 1;

    ll x = bigmod(a, b/2, mod);
    x = (x * x) % mod;
    if (b&1) x = (x * a) % mod;

    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        ll a , b, c;
        cin >> a >> b >> c;
        ll x = bigmod(b, c, m-1);
        cout << bigmod(a, x, m) << "\n";
    }
}
