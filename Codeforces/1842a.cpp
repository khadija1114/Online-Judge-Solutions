#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m; cin >> n >> m;
	vector<int> a(n); for (auto &it: a) cin >> it;
	vector<int> b(m); for (auto &it: b) cin >> it;

	long long x = 0, y = 0;
	for (auto it: a) x += it;
	for (auto it: b) y += it;

	if (x > y) {
		puts("Tsondu");
	} else if (x < y) {
		puts("Tenzing");
	}
	else puts("Draw");
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}

