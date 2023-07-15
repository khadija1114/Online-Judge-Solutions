#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);

    vector<int> adj[n+1];
    for (int i = 0; i < n-1; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue <int> q;
    q.push(1);
    bool vis[n+1] = {};
    vis[1] = true;
    int i = 1, ans = c;

    while (!q.empty()) {
        int u = q.front();  q.pop();

        for (auto it: adj[u]) {
            if (i >= c) {
                cout << 0 << endl;
                return 0;
            }
            if (!vis[it]) {
                q.push(it);
                vis[it] = true;
                ans = (1LL * ans * (c-i)) % mod;
                i++;
            }
        }

        i = 2;
    }

    cout << ans << endl;
}
