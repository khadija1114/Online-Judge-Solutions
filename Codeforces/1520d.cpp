#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long  n, ans = 0, i;
    map<int, long long> mp;
    cin >> n;

    int ar[n];
    for (auto &it : ar) cin >> it;

    for (i = 0; i < n; i++){
        mp[ar[i]-i]++;
    }

    for (auto [x, y] : mp){
        ans += (y-1)*y / 2;
    }

    cout << ans << "\n";
}


int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}



