#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        int mx = 0;
        for (auto &it: v) {
            cin >> it.second;
            mx = max(mx, it.second);
        }

        for (auto &it: v){
            cin >> it.first;

        }


        sort(v.begin(), v.end());
        int sum1 = k, sum2 = 0;

        for (int i = 0; i < n && k; i++) {
            int h = v[i].second;
            int p = v[i].first;

         //   cout << h << " " << p << endl;

            while (h > sum1) {
                k -= p;
                if (k <= 0){
                    k = 0;
                    break;
                }
                sum1 += k;
            }
        }

       // cout << sum1 << " " << mx << endl;

        if (sum1 >= mx)
            puts("YES");
        else
            puts("NO");

    }
}
