#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int ar[n][n];

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++)
            cin >> ar[i][j];
    }

    int first, felement;
    int a = 0, b = 0;
    a = ar[0][0]; b = ar[1][0];

    if (ar[2][0] == a)
        felement = a;
    else
        felement = b;

    cout << felement << " ";

    for (int i = 0; i < n; i++) {
        if (ar[i][0] != felement)
        {
            first = i;
            for (int j = 0; j < n-1; j++)
                cout << ar[i][j] << " ";
            cout << endl;
            break;
        }
    }

}

int main()
{
    int t; cin >> t;
    while (t--) {
        solve();
    }
}


