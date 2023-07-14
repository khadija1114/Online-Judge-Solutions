#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

const int N = 1e5+5;
long long inf = 1e18;
vector<pll> adj[N], radj[N];


vector<ll> dijkstra(int s, int n, vector<pll> grp[])
{
    priority_queue<pll> pq;
    pq.push({0, s});
    vector<ll> ans(n+1, inf);
    ans[s] = 0;

    bool vis[n+1] = {};

    while (!pq.empty()){
        int v = pq.top().ss;
        pq.pop();

        if (vis[v]) continue;

//        cout << s << " " << v << " " << ans[v] << endl;
        vis[v] = true;

        for (auto it: grp[v]){
            ll u , w;
            u = it.ff; w = it.ss;

            if (ans[u] > ans[v] + w){
                ans[u] = ans[v] + w;
                pq.push({-ans[u], u});
            }
        }
    }

    return ans;

}

int main()
{
    int n, m, i, j, a, b;
    ll ans = inf, temp, w;

    cin >> n >> m ;
    for (i = 0; i < m; i++){
        cin >> a >> b >> w;
        adj[a].pb({b, w});
        radj[b].pb({a, w});
    }

    vector <ll> dis = dijkstra(1, n, adj);
    vector<ll> rdis = dijkstra(n, n, radj);

    for ( i = 1; i <= n; i++){
        for (auto it: adj[i]){
            temp = dis[i] + it.ss/2 + rdis[it.ff];
//           cout << i << " " << dis[i] << " " << it.ff << " " << rdis[it.ff] << "\n";
            ans = min (ans, temp);
        }
    }

    cout << ans << "\n";

}
