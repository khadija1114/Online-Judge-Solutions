#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;
	vector<int> l0(n, -1), r1(n, n);

	for (int i = 0; i < n; i++) {
		if (i) l0[i] = l0[i-1];
		if (s[i] == '0') l0[i] = i;
	}

	for (int i = n; i >= 0; i--) {
		if (i < n-1) r1[i] = r1[i+1];
		if (s[i] == '1') r1[i] = i;
	}

//	for (auto it: l0) cout << it << " " ; cout << endl;
//	for (auto it: r1) cout << it << " " ; cout << endl;

	set<pair<int, int>> st;

	while (k--) {
		int l, r; cin >> l >> r; l--, r--;

		l = r1[l], r = l0[r];
	//	cout << " " << l << " " << r << endl;
		if (l > r)  st.insert({-1, -1});
		else st.insert({l, r});
	}

	cout << st.size() << endl;
}


int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}


