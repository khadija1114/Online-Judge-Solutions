#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long mx = 0;
        cin >> n;
        vector<long long> v(n);
        for (auto &it: v) {
            cin >> it;
            mx = max(mx, it);
        }

        if (n > 3 || n == 1) {
            cout << mx*n << endl;
            continue;
        }

        if (n == 2) {
            cout << max(v[0]+v[1], 2*abs(v[1]-v[0])) << endl;
            continue;
        }

        if (n == 3) {
            long long ans = 0;
            ans = max(ans, v[0]+v[1]+v[2]);
            ans = max(ans, v[0]*3);
            ans = max(ans, v[2]*3);
            ans = max(ans, abs(v[1]-v[0])*3);
            ans = max(ans, abs(v[1]-v[2])*3);

            cout << ans << endl;
        }
    }
}
