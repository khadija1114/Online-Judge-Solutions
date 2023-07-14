#include<bits/stdc++.h>
#define pb push_back
using namespace std;

const int N = 1e5+5;
vector<int> adj[N], par[N];
bool vis[N];

void bfs(int n)
{
    int par[n+1], v;
    queue<int> q;
    vis[1] = true;
    q.push(1);

    while (!q.empty()){
        v = q.front();
        q.pop();
        if (v == n) break;
        for (auto u : adj[v]){
            if (!vis[u]){
                vis[u] = true;
                q.push(u);
                par[u] = v;
            }
        }
    }

    if (!vis[n]){
        cout << "IMPOSSIBLE" << "\n";
        return ;
    }

    vector<int> ans;
    ans.pb(n);
    v = n;

    while (v != 1){
        v = par[v];
        ans.pb(v);
    }
    reverse(ans.begin() , ans.end());

    cout << ans.size() << "\n";
    for (auto it : ans) cout << it << " ";
    cout << "\n";

    return ;

}

int main()
{
    int n, m, i, a, b;
    cin >> n >> m;
    for (i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    bfs(n);
}

