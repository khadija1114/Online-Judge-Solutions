#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n); for (auto &it: v) cin >> it;

        int ans = 0, p = v[0]%2;
        for (int i = 1; i < n; i++) {
            if (v[i]%2 == p)  ans++;
            else {
                p ^= 1;
              //  cout << "   " << i << endl;
            }

           // cout << p << " " << i << " " << ans << endl;
        }

        cout << ans << endl;

    }
}
