#include<bits/stdc++.h>
using namespace std;

int possible (vector<int> &v)
{
   int n;
   cin >> n;
   vector <int> l(n), r(n), c(n);
   vector<int> v[n+1];

   for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i] >> c[i];

        v[c[i]].push_back(l[i], r[i]);
   }

   for (int i = 0; i <= n; i++)
    sort(v[i].begin(), v[i].end());

   int ans = INT_MAX;

   for (int i = 0; i < n; i++) {
        for
   }
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}




