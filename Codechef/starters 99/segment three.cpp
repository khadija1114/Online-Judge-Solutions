#include<bits/stdc++.h>
using namespace std;

long long count_for (vector<int> v, int a, int b, int c)
{
	int lost = -1;

	long long ans = 0;

	for (int i = 0; i < v.size(); i++) {
		if (i%3 == 0) {
			while (v[i] != a) {
				v[i]++; v[i] %= 3;
				ans++;
			}
		} else if (i%3 == 1) {
			while (v[i] != b) {
				v[i]++; v[i] %= 3;
				ans++;
			}
		} else {
			while (v[i] != c) {
				v[i]++; v[i] %= 3;
				ans++;
			}
		}
	}

	return ans;
}

void solve()
{
	int n; cin >> n;
	vector<int> v(n);  for (auto &it: v) {cin >> it; it %= 3;}

	int lost = -1, ar[3] = {};

	long long zero = 0, one = 0, two = 0;
	for (auto it: v) {
		if (it == 0) zero++;
		else if (it == 1) one ++;
		else two++;
	}

	long long ans = 2*one + two;
	//cout << ans << endl;
	ans = min(ans, 2*two+zero);
	//cout << ans << endl;
	ans = min(ans, zero*2 + one);
	//cout << ans << endl;

	ans = min(ans, count_for(v, 0, 1, 2));
	//cout << ans << endl;
	ans = min(ans, count_for(v, 0, 2, 1));
	//cout << ans << endl;
	ans = min(ans, count_for(v, 1, 0, 2));
	//cout << ans << endl;
	ans = min(ans, count_for(v, 1, 2, 0));
	//cout << ans << endl;
	ans = min(ans, count_for(v, 2, 0, 1));
	//cout << ans << endl;
	ans = min(ans, count_for(v, 2, 1, 0));
	//cout << ans << endl;


	cout << ans << endl;


}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}

