#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n); // zero(n);
        int one = 0, zero = 0;

        for (auto &it : v) {
            cin >> it;
            if (it) one++;
            else zero++;
        }



        if (one == 0)
            puts("NO");
        else {
            if (n >= k || zero == 0)
                puts("YES");
            else
            puts("NO");
        }
    }
}
