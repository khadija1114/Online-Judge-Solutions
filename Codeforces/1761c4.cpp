#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    bool ar[n][n];
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++){
            ar[i][j] = s[j]-'0';
        }
        ar[i][i] = 1;
    }


    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ar[i][j] |= (ar[i][k] && ar[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
            vector <int> v;
        for (int j = 0; j < n; j++) {
            if (ar[j][i])
            v.push_back(j);
        }
        cout << v.size();
        for (auto it: v)
            cout << " " << it+1;
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
