#include<bits/stdc++.h>
using namespace std;
const int maxN = 505;
map<int, int> adj;
bool vis[505][505];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
map<int, int> hasnode; int node = 0, nodecount = 0;
int n, m;
int ar[505][505];

bool valid(int x, int y)
{
	if (x < 0 || y < 0) return 0;
	if (x >= n || y >= m) return 0;
//	if (vis[x][y]) return 0;

	return 1;
}

bool out;

void dfs(int x, int y)
{
	vis[x][y] = true;
	nodecount++;

	for (int i = 0; i < 4; i++) {
		int tx = dx[i]+x;
		int ty = dy[i]+y;

		if (!valid(tx, ty)) continue;

		if (ar[x][y] == ar[tx][ty]) {
			if (!vis[tx][ty]) dfs(tx, ty);
		}
		else if (ar[x][y] > ar[tx][ty]) {
			out = 1;
		}
	}
}


int main()
{

	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> ar[i][j];
	}

	long long ans = 0;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!vis[i][j]) {
					nodecount = 0; out = 0;

					dfs(i, j);

					if (!out) ans+= nodecount;

				//	cout << ar[i][j] << " " << nodecount << " " <<  out << endl;
			}
		}
	}

	cout <<ans << endl;

//	for (auto it: hasnode) {
//		cout << it.first << " " << it.second << endl;
//	}
}

