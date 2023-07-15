#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector <int> v(n), store;
        for (auto &it: v)
            cin >> it;
        int ans;


        for (int i = 0; i < n; i++) {
            if (i+1 != v[i])
                store.push_back(abs(v[i]-i-1));
        }
        ans = store[0];

        for (auto it: store)
            ans = __gcd(ans, it);

        cout << ans << endl;
    }

}

