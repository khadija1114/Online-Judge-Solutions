#include<bits/stdc++.h>
using namespace std;
const int maxN = 100005;
vector<int> adj[maxN];


void bfs(int n, int &black, int &white)
{
    queue<int> q;  q.push(1);  q.push(n);
    bool vis[n+2] = {}; vis[1] = 1; vis[n] = 1;
    bool clr[n+1]; clr[1] = 1; clr[n] = 0;

    while (!q.empty()) {
        int p = q.front(); q.pop();

        if (clr[p]) black++;
        else white++;

        for (auto it: adj[p])
            if (!vis[it]) {
                clr[it] = clr[p];
                vis[it] = true;
                q.push(it);
            }

    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int black = 0, white = 0;
    bfs(n, black, white);

   // cout << white << " " << black << endl;

   if (black > white)puts("Fennec");
   else puts("Snuke");
}
