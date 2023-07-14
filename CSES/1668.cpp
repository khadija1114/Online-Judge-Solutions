#include<bits/stdc++.h>
#define pb push_back
using namespace std;

const int N = 1e5+2;
vector<int> adj[N], dis(N);
bool vis[N], flag ;

void dfs(int v)
{
    if (flag) return ;
    vis[v] = true;
    for (auto u: adj[v]){
        if (!vis[u]){
            dis[u] = dis[v] % 2 + 1;
            dfs(u);
        }
        else if (dis[u] == dis[v]){
            flag = 1;
            return;
        }
    }

    return ;
}

int main()
{
    int i, j, n, m, a, b;
    vector<int> ans;
    cin >> n >> m;

    for (i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    for (i = 1; i <=n; i++){
        if (!vis[i])
            dis[i] = 1, dfs(i);
    }

    if (flag)
        cout << "IMPOSSIBLE";
    else
        for (i = 1; i <= n; i++) cout << dis[i] << " " ;

    cout << endl;



}

