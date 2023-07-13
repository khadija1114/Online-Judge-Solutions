#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector <int> cnt(110);

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            cnt[a]++;
        }
        long long ans = 0;
        for (int i = 0; i < 105; i++) {
            int p = cnt[i];
            ans += min(p, c);
        }

        cout << ans << "\n";
    }
}
