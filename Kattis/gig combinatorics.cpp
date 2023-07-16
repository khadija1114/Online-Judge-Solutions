#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n), one(n), pre(n);
    for (auto &it: v) cin >> it;

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (v[i] == 1)
                one[i]++;
            continue;
        }

        pre[i] = pre[i-1];
        one[i] = one[i-1];
        if (v[i] == 2) {
            pre[i] = (2 * pre[i] + one[i]) % mod;
        }
        else if (v[i] == 1) {
            one[i]++;
        }
        else {
            ans  = (ans + pre[i]) % mod;
        }
    }

    cout << ans << endl;

}
