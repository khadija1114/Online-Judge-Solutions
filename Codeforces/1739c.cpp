#include<bits/stdc++.h>
using namespace std;

long long a1[200], b1[200], ft[100];
const int mod = 998244353;

void factor()
{
    ft[0] =1;
    for (int i = 1; i < 70; i++) {
        ft[i] = (ft[i-1] * i) % mod;
    }
}

long long bigmod(long long a, int p)
{
    if (p == 0) return 1;

    long long x = bigmod(a, p/2);
    x = (x*x) % mod;

    if (p&1)
        x = (a*x)%mod;

    return x;
}


void precal()
{
    a1[2] = 1;
    b1[2] = 0;

   // cout << 2 << " " << 1 << " " << 0 << endl;

    for (int i = 4; i < 62; i+=2) {
        long long fact = ft[i-1];
        //cout << fact << endl;

        a1[i] = fact;
        a1[i] = (a1[i] * bigmod(ft[i/2], mod-2)) % mod;
        a1[i] = (a1[i] * bigmod(ft[i/2 - 1], mod-2)) % mod;

       // cout << a1[i] << endl;

        a1[i] = (a1[i]+b1[i-2])% mod;

        fact = ft[i];

        long long inv = ft[i/2];
        inv = (inv*inv) % mod;

        inv = bigmod(inv, mod-2);

        b1[i] = ((fact*inv)%mod - 1 - a1[i] + mod) % mod;

     //   cout << i << " " << a1[i] << " " << b1[i] << endl;

    }
}

int main()
{
    factor();
    precal();

    int t, cs = 0;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d", &n);

        cout << a1[n] << " " << b1[n] << " 1" << "\n";

    }
}

