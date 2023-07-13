#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, k, r, c;
    cin >> n >> k >> r >> c;

    vector<string> v(n);
    string s = "";
    for (int i = 0; i < n; i++) s += ".";

    for (int i = 0; i < n; i++)
        v[i] = s;

    v[r-1][c-1] = 'X';

        for (int i = r-1, j = c-1; i >= 0; i--, j++) {
            j = j%n;
            for (int l = j; l < n; l += k) {
                v[i][l] = 'X';
            }
            for (int l = j; l >= 0; l -= k){
                v[i][l] = 'X';
            }
        }

         for (int i = r, j = c-2; i < n; i++, j--) {
            if (j == -1) j = n-1;
            for (int l = j; l < n; l += k) {
                v[i][l] = 'X';
            }
            for (int l = j; l >= 0; l -= k){
                v[i][l] = 'X';
            }
        }


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

