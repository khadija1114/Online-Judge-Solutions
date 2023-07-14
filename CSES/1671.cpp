#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
using namespace std;
typedef long long ll;
typedef vector<int> vi;

const int N = 1e5+2;
vector< pair<int, ll> > adj[N];
ll dis[N], inf = 1e18;
bool vis[N];

void bfs(int n)
{
    priority_queue<pair<ll, int>> pq;
    pq.push({0, 1});
    for (int i = 0; i <= n; i++) dis[i] = inf;
    dis[1] = 0;
    while (!pq.empty()){
        int v = pq.top().ss;
        pq.pop();
  //      cout << v << " " << dis[v] << " " << endl;
        if (vis[v])
            continue;
        vis[v] = true;
        for (auto it: adj[v]){
            int u = it.ff;
            ll w = it.ss;
            if (dis[u] > dis[v]+w){
                dis[u] = dis[v]+w;
                pq.push({-dis[u], u});
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << dis[i] << " ";
    cout << "\n";
}

int main()
{
    int n, m, a, b, i;
    ll c;

    cin >> n >> m;
    for (i = 0; i < m; i++){
        cin >> a >> b >> c;
        adj[a].pb({b, c});
 //       adj[b].pb({a, c});
    }

    bfs (n);
}
/*
8 5 1
9 10 2
7 9 8
9 8 8
10 9 9
7 8 10
8 9 2
7 10 10
4 5 8
5 6 1
4 2 1
5 3 6
10 7 3
3 5 2
5 4 7
1 2 9
2 3 2
6 7 5
3 4 10
3 2 10
*/

