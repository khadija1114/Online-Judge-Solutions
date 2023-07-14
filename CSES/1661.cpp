/// number of subarrays with sum k
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i;
    cin >> n >> x;
    int ar[n];
    long long cursum = 0, ans = 0;
    map<long long, int> mp;

    for (auto &it: ar) cin >> it;

    for (i = 0 ; i < n; i++){

        cursum += ar[i];

        if (cursum == x) ans++;

        ans += mp[cursum-x];

        mp[cursum]++;

    }

    cout << ans << "\n";
}
