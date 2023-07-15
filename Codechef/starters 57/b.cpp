#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        int gcd = 0, cnt = 0;

        for (auto &it: v) {
            cin >> it;
            gcd = __gcd(gcd, it);
        }

        for (int i = 0; i < n; ) {
            int temp = 0;
            while (temp != gcd && i < n ) {
                temp = __gcd(temp, v[i]);
                i++;
            }
            if (temp == gcd) {
                cnt++;
            }
        }

        if (cnt >= k)
            puts("YES");
        else
            puts("NO");

    }
}


