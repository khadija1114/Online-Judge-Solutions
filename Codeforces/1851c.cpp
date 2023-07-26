#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k; cin >> n >> k;
	vector<int> v(n); for (auto &it: v) cin >> it;

	int i = 0, j = n-1;
	int x = k;

	if (v[0] == v[n-1]) {
		for (i = 0; i < n; i++) {
			if (v[i] == v[0]) k--;
		}

		if (k <= 0) {
			puts("YES");
			return ;
		} else {
			puts("NO");
			return ;
		}
	}

	for (i = 0; i < n; i++) {
		if (v[i] == v[0]) {
			x--;
		}

		if (x == 0) break;
	}

	//cout << i << " " << x << endl;

	x = k;
	for (j = n-1; j > i; j--) {
		if (v[j] == v[n-1]) {
			x--;
			if (!x) {
				puts("YES");
				return;
			}
		}
	}

	puts("NO");
}

int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}

