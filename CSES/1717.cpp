#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

int main ()
{
    int i, n;

    cin >> n;
    ll d[n+1];
    d[0] = 1;
    d[1] = 0;

    for (i = 2; i <= n; i++)
        d[i] = (((d[i-1] + d[i-2]) % mod) * (i-1) ) % mod;

    cout << d[n] << "\n";
}
