#include<bits/stdc++.h>
using namespace std;
const int maxN = 200005;
map<long long, long long> min_cost; map<int, bool> vis;
vector<int> dependent[maxN];
vector<long long> cost;

void clear_(int n)
{
	min_cost.clear();
	vis.clear();
	cost.clear();

	for (int i = 0; i <= n; i++) dependent[i].clear();
}

void dfs(int a)
{
	vis[a] = true;
	long long here_cost = 0;

	for (auto it: dependent[a]) {
			if (vis[it]) here_cost += min_cost[it];
			else {
				dfs(it);
				here_cost += min_cost[it];
			}
	}

	min_cost[a] = min(min_cost[a], here_cost);
}

void solve()
{
	int n, k; cin >> n >> k;

	clear_(n);

	for (int i = 0; i < n; i++) {
		long long a; cin >> a;
		cost.push_back(a);
		min_cost[i] = a;
	}


	for (int i = 0; i < k; i++) {
		int a; cin >> a; a--;
		min_cost[a] = 0;
		vis[a] = true;
	}
	//cout << "here " << endl;

	for (int i = 0; i < n; i++) {
		int m; cin >> m;

		for (int j = 0; j < m; j++) {
			int a; cin >> a; a--;

			if (!vis[i]) dependent[i].push_back(a);
		}
		if (m == 0) {
			vis[i] = 1;
		}
	}

	// try kore dekhi
	for (int i = 0; i < n; i++) {
		if (!vis[i]) {
		//	cout << i << " " << min_cost[i] <<" ";
			dfs(i);
		//	cout << min_cost[i] << endl;

		}
	}

	for (int i = 0; i < n; i++) {
		cout << min_cost[i] << " ";
	} cout << endl;

}

int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}



