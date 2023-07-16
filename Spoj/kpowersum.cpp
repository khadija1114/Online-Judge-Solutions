#include<bits/stdc++.h>
using namespace std;

const int maxN = 10000001;
const int mod = 1000000007;
vector<int> prime, lp(maxN);

void linearSieve()
{
    int primesz = 0;
    for (int i = 2; i <= maxN; i++) {
        if (lp[i] == 0) {
            lp[i] = i;
            prime.push_back(i);
            primesz++;
        }
        for (int j = 0; i * prime[j] <= maxN; ++j) {
            lp[i * prime[j]] = prime[j];
            if (prime[j] == lp[i]) {
                break;
            }
        }
    }
}


int bigmod(int a, int p)
{
    int res = 1;
    while (p > 0) {
        if (p & 1)
            res = (1LL*res*a) % mod;
        a = (1LL*a*a) % mod;
        p >>= 1;
    }
    return res;
}


long long calculateSOD(long long n, int k)
{
    int ans = 1;
    int denumerator = 1;

    for (int i = 0; i < prime.size() && prime[i] <= n/prime[i]; i++) {
        if (n%prime[i] == 0) {

            int temp = bigmod (prime[i], k); // prime power

            int e = 0;
            while (n%prime[i] == 0) {
                n /= prime[i];
                e++;
            }

            int numerator = (bigmod(temp, e+1) - 1) % mod;
            denumerator = (1LL * denumerator * (temp-1)) % mod; // inverse bigmod

            ans = (1LL * ans * numerator) % mod;
        }
    }

    if (n > 1) {
            int temp = bigmod (n%mod, k); // prime power

            int numerator = ((1LL * temp * temp) % mod - 1) % mod;
            denumerator = (1LL * denumerator * (temp-1)) % mod; // inverse bigmod

            ans = (1LL * ans * numerator) % mod;
    }

    ans = (1LL * ans * bigmod(denumerator, mod-2)) % mod;
    return ans;
}


int main()
{
    linearSieve();

    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
        long long n, k;
        scanf("%lld %d", &n, &k);

        int SOD = calculateSOD(n, k);
        printf("Case %d: %d\n", ++cs, SOD);
    }
}
