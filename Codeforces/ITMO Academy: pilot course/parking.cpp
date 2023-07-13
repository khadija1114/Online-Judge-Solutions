#include<bits/stdc++.h>
using namespace std;
const int maxN = 300005;
int par[maxN];

int find_par(int p)
{
	if (par[p] == p) return p;
	return par[p] = find_par(par[p]);
}

void solve()
{
	int n; cin >> n;
	vector<int> v(n); for (auto &it: v) cin >> it;
	vector<int> park(n);

	for (int i = 1; i <= n; i++) par[i] = i;

	for (int i = 0; i < n; i++) {
		int p = v[i];
		p = find_par(p);

		par[p] = (p+1)%n; if (!par[p]) par[p] = n;
		park[i] = p;
	}

	for (auto it: park) cout << it << " ";
	cout << endl;
}

int main()
{
	int t = 1; //scanf("%d", &t);
	while (t--) solve();
}


