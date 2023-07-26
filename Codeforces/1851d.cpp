#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<long long> pre(n-1); for (auto &it: pre) cin >> it;
	vector<long long> v;
	v.push_back(pre[0]);

	map<long long, int> mp;
	mp[pre[0]]++;

	for (int i = 1; i < pre.size(); i++) {
		v.push_back(pre[i]-pre[i-1]);
		mp[pre[i]-pre[i-1]]++;
	}

	vector<long long> lost;

	sort(v.begin(), v.end());

	for (int i = 1; i <= n; i++) {
		if (!mp[i]) lost.push_back(i);
	}

	if (lost.size() == 1) {
		puts("YES");
		return ;
	}

	if (lost.size() > 2) {
		puts("NO");
		return ;
	}

	long long sum = lost[0]+lost[1];
	if (sum > n) {
		if (mp[sum]) {
			puts("YES");
			return ;
		}
		else {
			puts("NO");
			return ;
		}
	} else {
		if (mp[sum] == 2) {
			puts("YES");
			return ;
		} else {
			puts("NO");
			return ;
		}
	}

}

int main()
{
	int t=1; cin >> t;
	while (t--) solve();
}


