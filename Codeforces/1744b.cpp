#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, q;
    cin >> n >> q;
    long long odd = 0, even = 0, sum = 0;

    vector<long long> o, e;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a&1) o.push_back(a);
        else e.push_back(a);
        sum += a;
    }
    for (auto it: o) odd+=it;
    for (auto it: e) even+=it;

    while (q--) {
        int j, x;
        cin >> j >> x;
        if (j == 0) {
            if (o.size() > 0 && o[0]%2 == 0) {
                o[0] += x;
                sum += x*o.size();
            }
            if (e.size() > 0 && e[0]%2 == 0) {
                e[0] += x;
                sum += x*e.size();
            }
            cout << sum << endl;
        }
        else {
            if (o.size() > 0 && o[0]%2 == 1) {
                o[0] += x;
                sum += x*o.size();
            }
            if (e.size() > 0 && e[0]%2 == 1) {
                e[0] += x;
                sum += x*e.size();
            }
            cout << sum << endl;
        }
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();

    }
}

