#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k; cin >> n >> k;
	vector<int> v(n); for (auto &it: v) cin >> it;
	sort(v.begin(), v.end());

	int ans = 1, temp = 1;
	for (int i = 1; i < n; i++) {
		if (v[i] - v[i-1] <= k) {
			temp++;
		} else {
			ans = max(ans, temp);
			temp = 1;
		}
	}
	ans = max(ans, temp);

	cout << n-ans << endl;
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}



