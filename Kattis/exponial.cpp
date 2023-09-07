#include<bits/stdc++.h>
using namespace std;

int calculatePhi(int n) {
    int phi = n;
    for (int i = 2; i <= n/i; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            phi -= phi / i;
        }
    }
    if (n > 1)
        phi -= phi / n;
    return phi;
}


int bigMod (int a, int p, int mod)
{
    if (p == 0) return 1;

    int x = bigMod (a, p/2, mod);
    x = (1LL*x*x) % mod;

    if (p&1)
        x = (1LL*a*x) % mod;

    return x;
}


int exponial(int n, int mod)
{
    if (mod == 1 || n == 0)
        return 0;
    if (n == 1) return 1;
    if (n == 2) return 2 % mod;
    if (n == 3) return 9 % mod;
    if (n == 4) return bigMod(4, 9, mod);

    int phi_m = calculatePhi(mod);
    int power = phi_m + exponial (n-1, phi_m);

    return  bigMod(n, power, mod);

}

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", exponial (n, m));

}
