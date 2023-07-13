#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &it: a) cin >> it;
        for (auto &it: b) cin >> it;

        int neq = 0;
        for (int i = 0;i < n; i++) {
            if (a[i] != b[i])
                neq++;
        }

        int one1 = 0, one2 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0)
                one1++;
            if (b[i] == 0)
                one2++;
        }

        int ans;
        ans = min(abs(one1-one2)+1, neq);

        cout << ans << endl;

    }
}
