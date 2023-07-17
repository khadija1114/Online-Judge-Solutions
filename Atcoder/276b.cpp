#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    set <int> adj[n+1];
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].insert(b);
        adj[b].insert(a);
    }

    for (int i = 1; i <=n; i++) {
        cout << adj[i].size() << " ";
        for (auto it: adj[i])
            cout << it << " ";
        cout << endl;
    }
}
