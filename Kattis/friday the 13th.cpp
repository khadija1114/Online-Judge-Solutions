#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int m, d; cin >> d >> m;
	vector<int> v(m); for (auto &it: v) cin >> it;

	int sum = 6, ans = 0;

	int i = 0;
	while (i < m) {
		sum += 7;
		if (sum > v[i]) {
			sum -= v[i];
			i++;
		}

		if (sum == 13) ans++;
	}

	cout << ans << endl;
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}
