#include<bits/stdc++.h>
using namespace std;

bool possible (vector<int> &v)
{
   int n = v.size();
   vector <bool> dp(n);

   for (int i = 0; i < n; i++) {
        if (v[i] <= i) {
            if (i - v[i] == 0)
                dp[i] = 1;
            if (i > v[i] && dp[i-v[i]-1])
                 dp[i] = 1;
            if (i && dp[i-1] && i+v[i] < n)
                 dp[i+v[i]] = 1;
        }
        else {
            if (i && dp[i-1] && i+v[i] < n)
                dp[i+v[i]] = 1;
            if (i == 0 && i+v[i] < n)
                dp[i+v[i]] = 1;
        }
   }

//   for (int i = 0; i < n; i++)
//    cout << i << " ";
//   cout << endl;
//    for (auto it: dp)
//        cout << it << " ";
   return dp[n-1];
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it: v) cin >> it;

        if (possible(v))
            puts("YES");
        else
            puts("NO");
    }
}



