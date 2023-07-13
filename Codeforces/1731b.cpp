#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

long long bigpow (long long a, int p)
{
    if (p == 0) return 1;

    long long x = bigpow(a, p/2);
    x = (x*x)%mod;

    if (p&1) x = (x*a)%mod;

    return x;
}


int main()
{
   int t;
   cin >> t;
   while (t--){
    unsigned long long n;
    cin >> n;
    unsigned long long ans = 0;
    unsigned long long m = n-1;

    ans = ((m * (m+1)) % mod * (2*m+1)) % mod;
    ans = (ans * bigpow(3, mod-2)) % mod;
   // cout << ans << endl;
    ans = (ans + (m*(m+1)/2)%mod)%mod;
   // cout << ans << endl;
    ans = ((n*n)%mod + ans) % mod;

    ans = (ans * 2022) % mod;

    cout << ans << endl;
   }
}


