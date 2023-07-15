#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int bigmod (int a, int p)
{
    if (p == 0) return 1;

    int x = bigmod(a, p/2);
    x = (1LL * x * x) % mod;

    if (p&1)
        x = (1LL * a * x) % mod;

    return x;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        cout << bigmod(2, n-k+1) << endl;
    }
}

