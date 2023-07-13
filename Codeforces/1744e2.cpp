#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> diva, divb;
    for (int i = 1; i <= a/i; i++) {
        if (a%i == 0) {
            diva.push_back(i);
            if (i < a/i) {
                diva.push_back(a/i);
            }
        }
    }
    for (int i = 1; i <= b/i; i++) {
        if (b%i == 0) {
            divb.push_back(i);
            if (i < b/i) {
                divb.push_back(b/i);
            }
        }
    }
    long long ab = 1LL*a*b;

    for (auto da: diva) {
        for (auto db: divb) {
            long long dab = 1LL*da*db;

            int x = c/dab * dab;
            int y = d / (ab/dab) * (ab/dab);

            if (x > a && y > b) {
                cout << x << " " << y << "\n";
                return ;
            }
        }
    }

    cout << "-1 -1\n";
    return ;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
