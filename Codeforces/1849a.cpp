#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int b, c, h; cin >> b >> c >> h;
	c += h;

	int mn = min(b-1, c);

	b = mn+mn+1;

	cout << b << endl;

}

int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}

