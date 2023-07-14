#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
int mod = 1e9+7;

long long bigMod(long long a, long long p) {
    if (p == 0) return 1;

    long long base = bigMod(a, p/2);
    base = (base * base) % mod;
    if (p&1) base = (a * base) % mod;

    return base;
}

int main()
{
    int n;
    cin >> n;

    long long noDiv = 1, sumDiv = 1, proDiv = 1, tempDiv = 1;
    long long x, k;

    for (int i = 0; i < n; i++) {
        cin >> x >> k;

        noDiv =  (noDiv * (k+1)) % mod;

        sumDiv = ((sumDiv * (bigMod(x, k+1)-1)) % mod * bigMod(x-1, mod-2)) % mod;

        proDiv = (bigMod(proDiv, k+1) * bigMod (bigMod (x, k*(k+1)/2), tempDiv))%mod;
        tempDiv = (tempDiv * (k+1)) % (mod-1);

    }

    cout << noDiv << " " << sumDiv <<  " " << proDiv << endl;
}

