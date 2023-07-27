#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k; cin >> n >> k;
	vector<pair<int, int>> v(n); for (auto &it: v) cin >> it.first;
	for (int i = 0; i < n; i++) v[i].second = i+1;
	sort(v.begin(), v.end());

	int ans, a, b, xr = -1;
	for (int i = 1; i < n; i++) {
		int x = v[i-1].first, y = v[i].first, temp = 0;
	//	cout << x << " " << y << " ";

		for (int j = 0; j < k; j++) {
			if ((x&1) == (y&1)) {
				if (x&1) ;
				else temp += (1 << j);
			} else {
				;
			}

			x /= 2, y/= 2;
		}
	//	cout << temp << endl;

		int here = (temp ^ v[i-1].first) & (temp ^ v[i].first);
		if (here > xr) {
			xr = here;
			ans = temp;
			a = v[i-1].second;
			b = v[i].second;
		}
	}

	if (a > b) swap(a, b);
	cout << a << " " << b << " " << ans << endl;

}

int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}
