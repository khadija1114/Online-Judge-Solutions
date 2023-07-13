#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it: v) cin >> it;

    vector<pair<int, int>> dif;
    dif.push_back({0,0});

    for (int i = 1; i < n; i++)
        dif.push_back({v[i-1]-v[i], i});

    sort(dif.begin(), dif.end());

    int add = n;

    for (auto it: dif) {
        if (it.first <= 0)
            cout << 1 << " ";
        else
            cout << it.second+1 << " ";
    }

    cout << endl;



}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
