#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
map<ll, ll> f;

ll Fibonacci(ll a)
{
    if (a==0) return 0;
    if (f[a]) return f[a];

    if (a&1){
        ll k = (a+1) / 2;
        f[k] = Fibonacci(k);
        f[k-1] = Fibonacci (k-1);

        return ((f[k] * f[k]) % mod + (f[k-1] * f[k-1]) % mod) % mod;
    }
    else
    {
        ll k = a/2;
        f[k] = Fibonacci(k);
        f[k+1] = Fibonacci (k+1);
        f[k-1] = Fibonacci (k-1);

        return (f[k] * ((f[k+1]+f[k-1]) % mod)) % mod;

    }
}

int main()
{
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;

    ll n;
    cin >> n;

    cout << Fibonacci(n) << "\n";

}
