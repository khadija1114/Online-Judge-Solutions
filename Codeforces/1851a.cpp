#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m, k, h; cin >> n >> m >> k >> h;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a; int b = a;
		a = abs(a-h);
		if (a && a % k == 0 && a/k < m) ans++;// cout << b << endl;
	}

	cout << ans << endl;
}

int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}
