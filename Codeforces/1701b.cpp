#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << 2 << endl;

        bool vis[n+1] = {};
        int ans[n], i;
        ans[0] = 1;
        i = 1;
        int cnt = 1, val = 3;
        vis[1] = true;

        while (i < n) {
            cnt*=2;
            if (cnt > n) {
                cnt = val;
                while (vis[cnt]) cnt++;
                val = cnt;
            }
            ans[i++] = cnt;
            vis[cnt] = 1;
        }

        for (auto it: ans)cout << it << " ";
        cout << endl;
    }
}
