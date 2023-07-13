#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int ar[n][n], l = 1, r = n*n;
    for (int i = 0; i < 2*n-1; i++) {
        if (i&1) {
            int x, y; if (i < n) x = i, y = 0; else x = n-1, y = i%n + 1;
            for ( ; x >= 0 && y < n; x--, y++) {
                ar[x][y] = r--;
            }
        } else {
            int x, y; if (i < n) x = i, y = 0; else x = n-1, y = i%n + 1;
            for ( ; y < n && x >= 0; y++, x--) {
                ar[x][y] = l++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int t;cin >> t;
    while (t--) {
       solve();
    }
}

