#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int i, j, n, a;
    cin >> n;
    map<int, int> mp;

    for (i = 0; i < n; i++){
        cin >> a;
        mp[a]++;
    }

    priority_queue<int> pq;

    for (auto [x, y]: mp){
        pq.push(y);
    }

    int ans = n;
    while (pq.size() >= 2){
        int x, y;
        x = pq.top();   pq.pop();
        y = pq.top();   pq.pop();

        ans -= 2;
        x--, y--;

        if (x) pq.push(x);
        if (y) pq.push(y);
    }

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
