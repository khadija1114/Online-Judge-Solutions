#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;  cin >> n >> m;
	int one = 0, zero = 0;

	while (n) {
		if (n&1) one++;
		else zero++;
		n/=2;
	}

	while (m) {
		if (m&1) one--;
		else zero--;
		m/=2;
	}

	if (one == 0 && zero == 0) cout << "good";
	else cout << "bad";
	cout << endl;

}

int main()
{
	int t=1; //cin>>t;
	while (t--) solve();
}

