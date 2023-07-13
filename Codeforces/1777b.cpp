#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

long long bigmod(long long a, long long b)
{
    if (b == 0) return 1;
    long long x = bigmod(a, b/2);

    x = (x*x) % mod;
    if (b&1) x = (a*x) % mod;

    return x;
}

int main()
{
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long ans = 0, sum = 0;

        sum = n*(n-1);
        sum %= mod;
        //cout << sum << endl;

        long long power = 1;
        for (long long i = 2; i <= n; i++) {
            power = (power * i) % mod;
        }

      //  cout << power << endl;

        ans = (power * sum) % mod;

        cout << ans << endl;

    }
}

