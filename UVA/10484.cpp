#include<bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


long long n, d;
long long fact[105][105];
long long dfact[105];

void solve()
{
	for (auto &it: dfact) it = 0;
	for (int j = 2; j < 100; j++) {
		while (d % j == 0) {
			dfact[j]++;
			d /= j;
		}
	}

	if (d != 1) {
		if (d > 100) {
			cout << 0 << endl;
			return ;
		}
		dfact[d]++;
	}



	unsigned long long ans = 1;

//	for (int i = 0; i < n; i++) {
//		cout << i << " " << fact[n][i] << endl;
//	}

	for (int i = 2; i < 100; i++) {
		if (dfact[i] > fact[n][i]) {
			cout << 0 << endl;
			return ;
		}

	//	cout << n << " " << i << " " << fact[n][i] << " " << dfact[i] << endl;

		ans =  ans*(fact[n][i]-dfact[i]+1);
	}

	cout << ans << endl;

}

void pre_cal()
{
	for (int i = 2; i <= 100; i++) {
		int n = i;
		for (int j = 2; j <= n/j; j++) {
			while (n % j == 0) {
				fact[i][j]++;
				n /= j;
			}
		}

		if (n != 1) fact[i][n]++;
	}

	for (int i = 3; i <= 100; i++) {
		for (int j = 2; j <= 100; j++)
			fact[i][j] += fact[i-1][j];
	}
}

int main()
{
	ios;
	pre_cal();

	while (cin >> n >> d && (n > 0 || d > 0)) solve();
}
