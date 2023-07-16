#include<bits/stdc++.h>
using namespace std;
const int maxN = 200005;

vector <int> adj[maxN];
bool vis[maxN];
long long ans = 1e18+2;
int w[maxN], present[maxN];

void dfs(int node, long long need)
{
    vis[node] = 1;

    long long neededToOpenDame = w[node] - present[node];
    long long neededToLowerDame = need-w[node];

    ans = min(ans, max(0LL, neededToLowerDame)+neededToOpenDame);

    need = neededToOpenDame + max(0LL, (need-w[node]));

   // cout << node << " " << need << " " << max(0LL, neededToLowerDame)+neededToOpenDame <<endl;

    for (auto it: adj[node]) {
        if (!vis[it]) {
            dfs(it, need);
        }
    }

    return ;
}

int main()
{
    int n, weight;
    cin >> n >> weight;

    for (int i = 1; i <= n; i++) {
        int d, c, u;
        cin >> d >> c >> u;
        adj[i].push_back(d);
        adj[d].push_back(i);
        w[i] = c;
        present[i] = u;
    }
    w[0] = weight;

    dfs(0, weight);

    cout << max(0LL, ans) << endl;

    //main();
}

