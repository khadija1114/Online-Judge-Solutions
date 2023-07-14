#include<bits/stdc++.h>
using namespace std;

const int maxN = 1000005;
int fact[maxN];
const int mod = 1000000007;

int bigmod(int a, int p)
{
	if (p == 0) return 1;

	int x = bigmod(a, p/2);
	x = (1LL * x * x) % mod;

	if (p&1) x = (1LL * x * a) % mod;

	return x;
}

void solve()
{
	int n; cin >> n;

	if (n&1) {
		cout << 0 << endl;
		return ;
	}

	n /= 2;

	int lob = 1;
	for (int i  = n+2; i <= 2*n; i++){
		lob = (1LL*lob*i) % mod;
	}

	int hor = 1;
	for (int i  = 2; i <= n; i++){
		hor = (1LL*hor*i) % mod;
	}

	hor = bigmod(hor, mod-2);
	int ans = (1LL * lob * hor) % mod;

	cout << ans << endl;
}

int main()
{
	int t = 1; //scanf("%d", &t);
	while (t--) solve();
}




