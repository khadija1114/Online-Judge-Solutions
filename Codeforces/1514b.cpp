#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

void solve()
{
	int n, k; cin >> n >> k;

	int ans = 1;
	while (k--) {
		ans = (1LL * ans * n) % mod;
	}

	cout << ans << endl;

}

int main()
{
	int t = 1; scanf("%d", &t);
	while (t--) solve();
}





