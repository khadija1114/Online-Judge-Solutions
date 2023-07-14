#include<bits/stdc++.h>
#define pb push_back
using namespace std;

typedef vector<int> vi;
const int N = 1e5+5;
vi adj[N];
bool vis[N];

void dfs(int v)
{

    vis[v] = true;
    for (auto u: adj[v]){
        if (!vis[u])
            dfs(u);
    }

    return ;
}

int main()
{
    int n, m, i, j, a, b;
    cin >> n >> m;
    for (i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    vi ans;

    for (i = 1; i <= n; i++){
        if (!vis[i]){
            ans.pb(i);
            dfs(i);
        }
    }

    cout << ans.size()-1 << "\n";
    for (i = 1; i < ans.size(); i++)
        cout << ans[i-1] << " " << ans[i] << "\n";


}
