#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef vector<int> vi;

vi Z (vi s)
{
    int n = s.size(), k , x = 0, y = 0;
    vi z(n);

    for (k = 1; k < n; k++){
        z[k] = max(0, min(z[k-x], y-k+1));

        while (k+z[k] < n && s[z[k]] == s[k+z[k]])
            x = k, y = k+z[k], z[k]++;

    }

    return z;
}


int main()
{
    int n, m, i, j, ans = 0;

    cin >> n >> m;
    vi a(n), b(m), s;

    for (auto &it : a) cin >> it;
    for (auto &it: b) cin >> it;

    for (i = 1; i < m; i++)
        s.push_back(b[i] - b[i-1]);
    s.push_back(1e9+5);
    for (i = 1; i < n; i++)
        s.push_back(a[i] - a[i-1]);

    vi z = Z (s);

    for (auto it : z){
//        cout << it << " ";
        if (it == m-1)
            ans++;
    }


    cout << ans << endl;

}
