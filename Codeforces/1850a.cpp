#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, c; cin >> a >> b >> c;
	int ans = max({a+b, a+c, b+c});

	if (ans >= 10) puts("YES");
	else puts("NO");
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}
