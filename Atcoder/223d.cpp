#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
vector<int> adj[N];
int vis[N];
bool cycle;

void dfs(int u){
    for (auto it: adj[u]){
        if (vis[it] == 0){
            vis[it] = 2;
            dfs(it);
        }
        else if (vis[it] == 2){
            cycle = true;
        }
    }

    vis[u] = 1;
    return ;
}

int main()
{
    int i, n, v, u, m, j;
    cin >> n >> m;
    int ind[n+2] = {};
    bool vis[n+2] = {};

    set <pair <int, int>> st;

    for (i = 0; i < m; i++){
        cin >> u >> v;
        st.insert({u, v});
    }

    for (auto it: st){
        u = it.first;
        v = it.second;

        ind[v]++;
        adj[u].push_back(v);
    }

    set<pair<int, int>> pq;

    for (i = 1; i <= n && !cycle; i++){
        pq.insert({ind[i], i});
        if (!ind[i])  {
            vis[i] = 2;
            dfs(i);
        }
    }

    if (pq.begin()->first != 0) cycle = true;
    if (cycle){
        cout << -1 << endl;
    }
    else{
        for (auto it: pq){
            cout << it.first << " " << it.second << " ";
        }
        cout << endl;
    }

}
