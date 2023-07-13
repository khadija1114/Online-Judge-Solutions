#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> x, y;

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            if (a)
                x.push_back(a);
            else
                y.push_back(b);
        }
        //x.push_back(0); y.push_back(0);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        long long ans = 0;
        if (!y.empty()) {
            if (y[0] < 0)
            ans += abs(y[0]);
            if (y[y.size()-1] > 0)
            ans += y[y.size()-1];
            //cout << y[0] << " " << y[y.size()-1] << endl;
        }
        if (!x.empty()) {
            if (x[0] < 0)
            ans += abs(x[0]);
        if (x[x.size()-1] > 0)
            ans += x[x.size()-1];
            //cout << x[0] << " " << x[x.size()-1] << endl;
        }


        ans *= 2;

        cout << ans << endl;

    }
}
