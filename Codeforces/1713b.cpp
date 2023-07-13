#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    cin >> n;

    vector <int> v(n), mx1(n), mx2(n);
    for (auto &it: v)
        cin >> it;

    mx1[0] = v[0];
    mx2[n-1] = v[n-1];

    for (int i = 1; i < n; i++) {
        mx1[i] = max(mx1[i-1], v[i]);
    }

    for (int i = n-2; i >= 0; i--)
        mx2[i] = max(mx2[i+1], v[i]);

    for (int i = 1; i < n-1; i++) {
        if (v[i] < mx1[i] && v[i] < mx2[i])
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;

    }
}

