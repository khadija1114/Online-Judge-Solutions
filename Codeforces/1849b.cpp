#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first) return a.second < b.second;

	return a.first > b.first;
}

void solve()
{
	int n, k; cin >> n >> k;
	vector<pair<int, int>> v(n); for (auto &it: v) cin >> it.first;
	vector<pair<int, int>> a;

	for (int i = 0; i < n; i++) {
		v[i].first %= k;
		v[i].second = i+1;
	}

	sort(v.begin(), v.end());

	for (auto it: v) {
		if (it.first == 0)cout << it.second << " ";
		else a.push_back(it);
	}

	sort(a.begin(), a.end(), cmp);

	for (auto it: a) {cout << it.second << " ";

	}

}

int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}

