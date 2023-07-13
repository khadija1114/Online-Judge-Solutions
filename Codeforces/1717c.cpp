#include<bits/stdc++.h>
using namespace std;


bool solve()
{
    int n, k, r, c;
    cin >> n;
    vector <int> a(n), b(n), dis(n);

    for (auto &it: a) cin >> it;
    for (auto &it: b) cin >> it;

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i])
            return false;
    }

    bool eql = true;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            eql = false;
    }
    if(eql) return true;

   // cout << 1 << endl;

    for (int i = 0; i < n-1; i++) {
        if (a[i] < b[i] && b[i] > b[i+1]+1)
          return false;
    }
    if (a[n-1] < b[n-1] && b[n-1] > b[0]+1)
        return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        if (solve())
            puts("YES");
        else
            puts("NO");
}


