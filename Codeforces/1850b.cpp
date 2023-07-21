#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	int ans = -1, ind;

	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a <= 10 && b > ans) {
			ans = b; ind = i+1;
		}
	}

	cout << ind << endl;

}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}

