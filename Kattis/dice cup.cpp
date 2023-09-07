#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n, m; cin >> n >> m;
	map<long long, int> mp;
	for (long long i = 1; i <= n; i++)
		for (long long j = 1; j <= m; j++)
		mp[i+j]++;

	long long mx = 0;
	for (auto it: mp) if (it.second > mx) mx = it.second;

	for (auto it: mp) {
		if (it.second == mx)
			cout << it.first << endl;
	}
}
