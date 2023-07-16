#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef vector<int> vi;

vi Z (string s)
{
    int n = s.size(), x = 0, y = 0, k;
    vi z(n);
    reverse(s.begin(), s.end());

    for (k = 1; k < n; k++){
        z[k] = max (0, min (z[k-x], y-k+1));

        while (k+z[k] < n && s[z[k]] == s[k+z[k]])
            x = k, y = k+z[k] , z[k]++;
    }

    return z;
}

int main()
{
    ios
    int t, n, i, q;
    string s;
    cin >> t;
    cin.ignore();

    while (t--){
        cin >> s >> n;
        int sz = s.size();

        vi z = Z(s);
        z[0] = sz;

        reverse(z.begin(), z.end());

        while (n--){
            cin >> q;
            cout << z[q-1] << "\n";
        }
    }
}
