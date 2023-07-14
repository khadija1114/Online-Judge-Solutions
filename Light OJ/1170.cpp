#include<bits/stdc++.h>
using namespace std;

const long long maxN = 10000000005;
const int maxn = 2501;
const int mod = 100000007;
vector <long long> perfectPower;
vector<int> fact(maxn+1);

void calculatePerfectPower()
{
    for (long long i = 2; i < maxN/i; i++) {
        for (long long j = i*i; j < maxN; j *= i)
            perfectPower.push_back(j);
    }

    sort(perfectPower.begin(), perfectPower.end());
    perfectPower.resize(distance(perfectPower.begin(),unique(perfectPower.begin(),perfectPower.end())));

}

void calculateFactorial()
{
    fact[0] = 0;
    fact[1] = 1;
    for (int i = 2; i < maxn; i++) {
        fact[i] = (1LL * fact[i-1]*i) % mod;
    }
}

int bigmod(int a, int p)
{
    if (p == 0) return 1;

    int x = bigmod(a, p/2);
    x = (1LL * x * x) % mod;
    if (p&1)
        x = (1LL * a * x) % mod;

    return x;
}

int solve()
{
    long long a, b;
    int n;
    scanf("%lld %lld", &a, &b);

    n = (upper_bound(perfectPower.begin(), perfectPower.end(), b) - perfectPower.begin()) - (lower_bound(perfectPower.begin(), perfectPower.end(), a)-perfectPower.begin());
    int lob = fact[2*n];
    int hor = (1LL * fact[n+1] * fact[n]) % mod;
    hor = bigmod(hor, mod-2);

  //  cout << n << endl;

    return (1LL * lob * hor) % mod;
}

int main()
{
    calculatePerfectPower();
    calculateFactorial();

    int t, cs = 0;
    scanf("%d", &t);
    while (t--) {
        printf("Case %d: %d\n", ++cs, solve());
    }
}
