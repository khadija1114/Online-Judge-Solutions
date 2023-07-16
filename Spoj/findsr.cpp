#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef vector<int> vi;

vi Z(string s)
{
    int n = s.size(), k , x = 0, y = 0;
    vi z(n);

    for (k = 1; k < n; k++){
        z[k] = max(0, min(z[k-x], y-k+1));

        while (k+z[k] < n && s[z[k]] == s[k+z[k]])
            x = k, y = k+z[k], z[k]++;

    }

  //  for (auto it: z) cout << it << " ";
    return z;
}


int main()
{
    int t, n, i, ans;
    string s;

    while (cin >> s && s != "*"){

        n = s.size();
        vi z = Z(s);
        ans = 0;
        for (i = 0; i < n; i++){
            if (z[i]+i == n){
                ans = n-z[i];
                break;
            }
        }

        if (ans && n%ans == 0) cout << n/ans << endl;
        else cout << 1 << endl;
    }
}
