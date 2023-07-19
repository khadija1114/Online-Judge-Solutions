#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n); long long sum = 0; for (auto &it: v) {cin >> it; sum+=it;}

	sort(v.begin(), v.end());

	for (auto it: v) {
		cout << sum << " ";
		sum -= it;
	}

	cout << endl;
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}
