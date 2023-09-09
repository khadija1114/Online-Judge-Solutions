#include<bits/stdc++.h>
using namespace std;
int cs = 0;

void solve()
{
	int n; cin >> n;
	vector<int> a(n), b(n);
	for (auto &it: a) cin >> it;
	for (auto &it: b) cin >> it;

	long long ans = 0;
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());

	for (int i = 0; i < n; i++) {
		ans += 1LL * a[i]*b[i];
	}

	cout << "Case #" << ++cs << ": ";
	cout << ans << endl;
}

int main()
{
	int t=1; cin>>t;
	while (t--) solve();
}


