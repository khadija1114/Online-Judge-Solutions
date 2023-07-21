#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string ans = "";
	vector<string> v(8);
	for (auto &it: v) cin >> it;

	for (auto it: v) {
		for (auto itt: it) {
			if (itt >= 'a' && itt <= 'z') ans += itt;
		}
	}

	cout << ans << endl;
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}


