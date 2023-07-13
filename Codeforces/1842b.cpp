#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, x; cin >> n >> x;
	vector<int> a(n); for (auto &it: a) cin >> it;
	vector<int> b(n); for (auto &it: b) cin >> it;
	vector<int> c(n); for (auto &it: c) cin >> it;

	int temp = 0;

	for (auto it: a) {
		if (int(x|it) == x) temp |= it;
		else break;
	}

	for (auto it: b) {
		if (int(x|it) == x) temp |= it;
		else break;
	}

	for (auto it: c) {
		if (int(x|it) == x) temp |= it;
		else break;
	}

	if (temp == x) puts("Yes");
	else puts("No");

}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}

