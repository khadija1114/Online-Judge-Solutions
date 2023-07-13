#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int nn = n;
        vector<int> v(m);
        for (auto &it: v) cin >> it;

        sort(v.rbegin(), v.rend());

        int net = 0;
        for (auto it: v) {
            int temp = n/k;

            if (it > temp)
                net += temp;
            else
                net += it;

            it -= temp;

            if (it > 0) {
                if (n%k) {
                    n--;
                    net++;
                }
            }
        }

        if (net >= nn)
            puts("YES");
        else
            puts("NO");
    }
}
