#include<bits/stdc++.h>
using namespace std;
int cs = 1;

void solve()
{
	long long n, cs; cin >> cs >> n;
	int bsz = 0;
	long long m = n, b = 1; while (m) { b *= 2 ; m/= 2; bsz++; }
	bsz--; b/=2;

	//cout << b <<endl;
	int route = n - b;

	string s = "";
	for (int i = 0; i < bsz; i++) s += '0';

	int i = s.size()-1;
	while (route) {
		if (route&1) s[i] = '1';
		i--; route /= 2;
	}

	//cout << s << endl;

	long long a = 1; b = 1;

	for (auto it: s) {
		if (it == '0') {
			b = a+b;
		} else {
			a = a+b;
		}

		//cout << it << " " << a << " " << b << endl;
	}

	cout << cs++ << " " << a << "/" << b << endl;
}

int main()
{
	int t; cin >> t;
	while (t--) solve();
}

