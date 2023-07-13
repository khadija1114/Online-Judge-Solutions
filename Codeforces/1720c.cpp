#include<bits/stdc++.h>
using namespace std;
int x[] = {0, 1, 0, -1, -1, 1, 1, -1};
int y[] = {1, 0, -1, 0, -1, 1, -1, 1};

bool valid(int i, int j, int n, int m) {
    if (i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}

int solve()
{
    int n, m;
    cin >> n >> m;
    int one = 0;
    bool consecutive0 = 0;

    string ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        for (int j = 0; j < m; j++) {
            one += (ar[i][j] - '0');
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < 8; k++) {
                int tx = i+x[k], ty = j+y[k];
                if (valid(tx, ty, n, m))
                    if (ar[i][j] == '0' && ar[tx][ty] == '0')
                        consecutive0 = true;
            }
        }
    }

    if (consecutive0)
        return one;

    if (one == 0)
        return 0;

    if (one < n*m)
        return one-1;
    else
        return one-2;

}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}


