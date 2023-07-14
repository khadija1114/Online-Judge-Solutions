#include<bits/stdc++.h>
using namespace std;
const int maxN = 100005;
vector<int> adj[maxN], in(maxN);

void solve()
{
	int n, m;  cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		in[v]++;
	}

	vector<int> ans;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (!in[i]) q.push(i);
	}

	while (!q.empty()) {
		int x = q.front(); q.pop();
		ans.push_back(x);

		for (auto it: adj[x]) {
			in[it]--;
			if (!in[it]) {
				q.push(it);
			}
		}
	}

	if (ans.size() < n) cout << "IMPOSSIBLE" << endl;
	else {
		for (auto it: ans) cout << it << " ";
		cout << endl;
	}

}

int main()
{
	int t=1; //cin >> t;
	while (t--) solve();
}




