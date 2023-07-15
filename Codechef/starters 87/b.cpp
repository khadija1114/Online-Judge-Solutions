#include<bits/stdc++.h>
using namespace std;
const int maxN = 1000000;
const int mod = 998244353;

void solve()
{
    long long x, y; cin >> x;

    if (x == 1){
        puts("-1");
        return ;
    }

    x--;

    long long a = sqrt(x), b = x/a, c = x%a; c++;
    while (!b || a > maxN || b > maxN || c > maxN) {
        a++;
        b = x/a;
        c = x%a; c++;
      // cout << a << " " << b << " " << c << endl;
    }

    if (!a) {
        puts("-1");
        return ;
    }
    cout << a << " " << b << " " << c << endl;



}

int main()
{
    int t; cin >> t;
    while (t--)
        solve();
}

