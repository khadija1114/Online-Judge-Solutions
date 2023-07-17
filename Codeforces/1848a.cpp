#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m, k; cin >> n >> m >> k;
	int x, y, tx[k], ty[k]; cin >> x >> y;
	for (int i = 0; i < k; i++) {cin >> tx[i] >> ty[i];}

	for (int i = 0; i < k; i++) {
		if (((tx[i]+ty[i])&1) == ((x+y)&1)) {
			puts("NO");
			return ;
		}
	}

	puts("YES");
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}
