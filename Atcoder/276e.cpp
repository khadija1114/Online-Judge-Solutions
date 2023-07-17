#include<bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
bool ans = false;

bool valid(int tx, int ty, int n, int m, vector<string> &adj)
{
    if (tx < 0 || ty < 0 || tx >= n || ty >= m || adj[tx][ty] == '#')
        return false;
    return true;
}

void dfs(int x, int y, int n, int m, int clr, vector<string> &adj, vector<vector<int>> &vis)
{
    vis[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int tx = x+dx[i], ty = y+dy[i];
        if (valid(tx, ty, n, m, adj)) {
            if (ans)
                return ;
            if (!vis[tx][ty]) {
                dfs(tx, ty, n, m, clr+1, adj, vis);
            }
            else if (clr > 1 && adj[tx][ty] == 'S')
            {
              //  cout << x << " " << y << " " << tx << " " << ty << endl;
                ans = true;
                return ;
            }
        }
    }
}

int solve()
{
    int n,m;
    cin >> n >> m;
    vector<string> adj;
    int path[n][m] = {};
    vector<vector<int>> vis( n , vector<int> (m, 0));
    int clrx[n][m];

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        adj.push_back(s);
    }


  //  cout << 1 ;

    int s = -1, x, y;
    for (int i = 0; i < n && s < 0; i++)
    for (int j = 0; j < m; j++) {
        if (adj[i][j] == 'S') {
            x = i;
            y = j;
            s = 0;
            break;
        }
    }

    //cout << x << y;


    dfs(x, y, n, m, 0, adj, vis);

    return ans;
}

int main()
{
    if (solve())
        puts("Yes");
    else
        puts("No");

   // main();
}


