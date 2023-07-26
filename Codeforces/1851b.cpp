#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n); for (auto &it: v) cin >> it;
	vector<int> a = v;

	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++) {
		if ((a[i]&1) == (v[i]&1)) ;
		else {
			puts("NO");
			return;
		}
	}

	puts("YES");
}

int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}
