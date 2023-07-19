#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n), is(n+10);  int ans = 0, temp = 0;
	for (auto &it: v) {
		cin >> it;
		if (is[it]) {
			temp--;
			is[it]--;
		} else {
			is[it]++;
			temp++;
			ans = max(ans, temp);
		}
	}

	cout << ans<< endl;
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}
