#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n+1);
    for (auto &it: a) cin >> it;

    b[0] = a[0];
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            b[n] = a[n-1];
        else {
            int now = a[i-1];
            now *= a[i];
            now /= __gcd(a[i], a[i-1]);
            b[i] = now;
        }

        cout << i << " " << b[i] << endl;

        if (__gcd(b[i], b[i-1]) != a[i-1])
            return false;
    }

    for (auto it: b) cout << it << " " ;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        if (solve())
            puts("YES");
        else
            puts("NO");

    }
}

