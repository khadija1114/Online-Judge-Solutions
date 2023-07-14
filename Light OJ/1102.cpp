#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
const int maxN = 2000002;
int fact[maxN];

void calculateFactorial()
{
    fact[0] = 1;
    for (int i = 1; i < maxN; i++) {
        fact[i] = (1LL * fact[i-1] * i) % mod;
    }
}

int bigPow (int a, int p)
{
    if (p == 0) return 1;

    int x = bigPow(a, p/2);
    x = (1LL * x * x) % mod;
    if (p&1) x = (1LL * a * x) % mod;

    return x;
}


int main()
{
    calculateFactorial();
    int t, cs = 0;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int lob = fact[n+k-1];
        int hor = (1LL * fact[n] * fact[k-1]) % mod;

        int ans = (1LL * lob * bigPow(hor , mod-2)) % mod;

        printf("Case %d: %d\n", ++cs, ans);
    }

}
