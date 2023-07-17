#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k; cin >> n >> k;
	map<int, vector<int>> mp;

	int last[k+1] = {}; for (auto &it: last) it = -1;

	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];

		int dis = i - last[v[i]]-1;

		last[v[i]] = i;
		mp[v[i]].push_back(dis);
	}

	for (int i = 1; i <= k; i++ ) {
		int dis = n - last[i]-1;
		mp[i].push_back(dis);
	}

	for (auto &it: mp) sort(it.second.begin(), it.second.end());

	int mx = INT_MAX;

	for (auto &it: mp) {
		int sz = it.second.size();

		//cout << it.first << endl;
		//for (auto itt: it.second) cout << itt << " ";
		//cout << endl;

		int a = it.second[sz-1]; if (a == 0) {cout << 0 << endl; return ;}
		a--;
		int b = a/2;
		if(a&1) b++;
		a /= 2;

		it.second[sz-1] = a;
		it.second.push_back(b);
		sort(it.second.begin(), it.second.end());
		mx = min(mx, it.second[sz]);



	}

	cout << mx << endl;
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}
