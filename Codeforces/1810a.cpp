#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n; cin >> n;
    vector<int> v(n); for (auto &it: v) cin >> it;

    for (int i = 0; i < n; i++) {
        if (v[i] <= i+1) return 1;
    }

    return 0;
}

int main()
{
    int t; cin >> t;
    while (t--) {
        if (solve()) puts("YES");
        else puts("NO");
    }
}
