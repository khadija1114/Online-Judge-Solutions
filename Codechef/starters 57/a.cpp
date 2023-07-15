#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = 0;

        if (a) {
            ans++;
            a--;
        }
        if (b) {
            ans++;
            b--;
        }
        if (c) {
            ans++;
            c--;
        }
        vector <int> v = {a, b, c};
        sort(v.begin(), v.end());
        if (min({a, b, c}) == 0 ) {
            if (v[1] > 0)
            cout << ans+1 << endl;
            else
            cout << ans << endl;

            continue;
        }
        else if (min({a, b, c}) == 1 ) {
            if (v[2] > 1)
            cout << ans+2 << endl;
            else
            cout << ans+1 << endl;

            continue;
        }
        else {
            cout << ans+3 << endl;
            cout << endl;
        }
    }
}


