#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long n, cons; cin >> n >> cons;
	long long a = 0, b = 0, c = 0;  // getting ax2 + bx + c = 0

	for (int i = 0; i < n; i++) {
		long long t; cin >> t;

		c += t*t;
		b += 4*t;
		a += 4;
	}

	c -= cons;

	//cout << a << " " << b << " " << c << endl << endl;

	//to avoid overflow
	b /= 2;

	long long x =  sqrt((b/a)*(b/a) - (c/a))- b/a;

	cout << x << endl;
}

int main()
{
	int t = 1; cin >> t;
	while (t--) solve();
}
