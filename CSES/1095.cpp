#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e9+7;

ll bigmod(ll a, ll b)
{
    if (b == 0) return 1;

    ll x = bigmod(a, b/2);
    x = (x * x) % mod;
    if (b&1) x = (x * a) % mod;

    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        ll a , b;
        cin >> a >> b;
        cout << bigmod(a, b) << "\n";
    }
}
