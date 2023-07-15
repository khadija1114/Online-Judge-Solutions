#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for (auto &it: v) cin >> it;

        for (int i = n-1; i > 0; i--) {
            if (v[i] > 0 && v[i-1] > 0) {
                int toSubtract = v[i]-2;
                v[i] -= toSubtract * 2;
                v[i-1] -= toSubtract;
            }
        }

        int ans = 0;
        for (auto it: v)
            ans += abs(it);

        cout << ans << endl;

    }
}


