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
        int gcd = 0, mx = 0;
        for (auto &it: v) {
            cin >> it;
            gcd = __gcd(it, gcd);
            mx = max(mx, it);
        }

        if (gcd == 1) {
            cout << mx << endl;
        }
        else {
            cout << mx/gcd << endl;
        }

    }
}

