#include<bits/stdc++.h>
using namespace std;

int tailing_zero(int a)
{
	if (!a) return 31;
	int cnt = 0;
	while (!(a&1)) { a/=2; cnt++;}

	return cnt;
}

bool solve()
{
	int n; cin >> n;
	vector<int> a(n), b(n);
	for (auto &it: a) cin >> it;
	for (auto &it: b) cin >> it;

	int mode = -1;
	for (int i = 0; i < n; i++) {

		if (a[i] == b[i] && !a[i]) continue;

		int tz_a = tailing_zero(a[i]);
		int tz_b = tailing_zero(b[i]);

		if (mode == -1) {
			if (tz_a > tz_b) mode = 0;
			else if (tz_a < tz_b) mode = 1;
			else mode = 2;
		} else {
			if (tz_a > tz_b && mode != 0) return 0;
			else if (tz_a < tz_b && mode != 1) return 0;
			else if (tz_a == tz_b && mode != 2 )return 0;
		}
	}

	return 1;
}

int main()
{
	int t; cin >> t;
	while (t--)
		if (solve()) puts("YES");
		else puts("NO");
}
