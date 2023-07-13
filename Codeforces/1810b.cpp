#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    if (n%2 == 0) {
        cout << -1 << endl;
        return ;
    }

    vector<int> ans;

    while (n != 1) {
        int x = n+1; x/=2;
        int y = n-1; y/=2;

        if (x&1) {
            ans.push_back(1);
            n = x;
        } else if(y&1) {
            ans.push_back(2);
            n = y;
        } else {
            cout << -1 << endl;
            return ;
        }

    }

    cout << ans.size() << endl;
    reverse(ans.begin(), ans.end());
    for (auto it: ans) cout << it << " ";
    cout << endl;

}

int main()
{
    int t; cin >> t;
    while (t--) {
        solve();
    }
}

