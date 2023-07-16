#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int Z(string s)
{
    int n = s.size(), k = 0, x = 0, y = 0, mx = 0;
    vi z(n);

    for (k = 1; k < n; k++){
        z[k] = max (0, min(z[k-x], y-k+1));

        while (k+z[k] < n && s[z[k]] == s[k+z[k]])
            x = k, y = k+z[k], z[k]++;
    }

    for (k = n/2; k < n; k++){
        if (z[k]+k == n) mx = max(mx, z[k]);
    }

    return mx;
}


int main()
{
    string s, rs;
    while (cin >> rs){
        s = rs;
        reverse (rs.begin(), rs.end());

        int k = Z( rs+'#'+s ), sz = s.size();
        k = sz-k-1;

        cout << s;
        for ( ; k >= 0; k--)
            cout << s[k];

        cout << "\n";
    }
}
