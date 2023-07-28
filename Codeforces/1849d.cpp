#include<bits/stdc++.h>
using namespace std;
const int maxN = 200005;
bool vis[maxN];
vector<int> v;

void dfs2(int x,int n)
{
	vis[x] = true;

	for (int i = x+1; i < n; i++) {
		if (vis[i]) break;
		if (v[i] == 0) {
			vis[i] = 1;
			break;
		} else {
			vis[i] = 1;
		}
	}

	for (int i = x-1; i >= 0; i--) {
		if (vis[i]) break;
		if (v[i] == 0) {
			vis[i] = 1;
			break;
		} else {
			vis[i] = 1;
		}
	}
}


void solve()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++) {int a; cin >> a; v.push_back(a);}

	queue<int> q;
	for (int i = 0; i < n; i++) {
		if (v[i] == 2) q.push(i);
	}

	int ans = 0;

	while (!q.empty()) {
		int x = q.front(); q.pop();
		if (!vis[x]) {
			ans++;
			dfs2(x, n);
		//	cout << x << endl;
		}
	}

	int last0 = -1;
	for (int i = 0; i < n; ) {
		if (vis[i]) {i++; continue;}
		if (v[i] == 1) {
			if (v[i-1] == 0 && !vis[i-1]) {
				vis[i-1] = true; ans++;
				while (i < n && v[i] == 1 && !vis[i]) {
					vis[i] = true;
					i++;
				}
			} else {
				ans++;
				while (i < n && v[i] == 1 && !vis[i]) {
					vis[i] = true;
					i++;
				}
				if (v[i] == 0) {
					vis[i] = true;
					i++;
				}
			}
		}
		else i++;
	}

	for (int i = 0; i < n; i++) if (!vis[i]) ans++;

	cout <<ans << endl;

}

int main()
{
	int t=1; //cin >> t;
	while (t--) solve();
}


