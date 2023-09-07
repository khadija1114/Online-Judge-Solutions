#include<bits/stdc++.h>
using namespace std;

void solve()
{
	map<string, int> mp;
	vector<long long> v;

	int n; cin >> n;  //cin.ignore();

	if (n == 0) {
			cout << 0 << endl;
	return ;}

	for (int i = 0; i < n; i ++) {
		string s, t; cin >> s >> t;
		mp[t]++;
	}

	for (auto it: mp) v.push_back(it.second);

	long long ans = v[0], prev = v[0];

	for (long long i = 1; i < v.size(); i++) {
	//	cout << prev << " ";
		ans = v[i]*(prev+1)+prev;
		prev = ans;
	}

	cout << ans << endl;

}


int main()
{
	int t; cin >> t;
	while (t--) solve();
}
