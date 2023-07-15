#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        int mx = -1;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            mp[a]++;
            mx = max(mx, mp[a]);
        }

        if (mx > ceil (1.0*n/2))
            puts("No");
        else
            puts("Yes");


    }
}

