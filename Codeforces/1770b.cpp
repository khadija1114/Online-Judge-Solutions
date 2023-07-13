#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;

    int i, j, y;
    for (i = 1, j = n, y = 0; y < n/k ; y++){
        for (int x = 1; x < k; x++)
            v.push_back(j--);
        v.push_back(i++);
    }

    while (i <= j) {
        v.push_back(i++);
    }

    for (auto it: v) cout << it << " ";
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    solve();
}

