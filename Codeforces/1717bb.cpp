#include<bits/stdc++.h>
using namespace std;


void dfs(vector <string> &v, int r, int c, int k, int n)
{
    v[r][c] = 'X';
   // cout << r << " " << c << endl;

    if (r + k < n && v[r+k][c] == '.')
        dfs(v, r+k, c, k, n);
    if ( r - k >= 0 && v[r-k][c] == '.')
        dfs(v, r-k, c, k, n);
    if (c + k < n && v[r][c+k] == '.')
        dfs(v, r, c+k, k, n);
    if ( c - k >= 0 && v[r][c-k] == '.')
        dfs(v, r, c-k, k, n);
    if (r+1 < n && c+1 < n && v[r+1][c+1] =='.')
        dfs(v, r+1, c+1, k, n);
    if (r-1 >= 0 && c-1 >= 0 && v[r-1][c-1] =='.')
        dfs(v, r-1, c-1, k, n);

}

void solve()
{
    int n, k, r, c;
    cin >> n >> k >> r >> c;

    vector<string> v(n);
    string s = "";
    for (int i = 0; i < n; i++) s += ".";

    for (int i = 0; i < n; i++)
        v[i] = s;


    dfs (v, r-1, c-1, k, n);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        cout << v[i][j];

        }
        cout << endl;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}

