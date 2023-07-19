#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<pair<int, int>> v(2*n); int mx = 0;

	for (int i = 0; i < 2*n; i+=2) {
		cin >> v[i].first>>v[i+1].first;
		v[i].second = i/2; v[i+1].second = i/2;
		mx = max(mx, min(v[i].first, v[i+1].first));
	}

	sort(v.begin(), v.end());

	int ans = INT_MAX;
	for (int i = 1; i < 2*n; i++) {
		if (v[i].first < mx) continue;

		if (v[i].second != v[i-1].second) ans = min(ans, v[i].first-v[i-1].first);
		else if (i > 1) ans = min(ans, v[i].first-v[i-2].first);
	}

	cout << ans << endl;
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}

