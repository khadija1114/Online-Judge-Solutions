#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, j, mn = 1e9+5, pos;
    cin >> n;
    int ar[n];

    for (auto &it : ar){
        cin >> it;
    }

    for (i = 0; i < n; i++){
        if (mn > ar[i]){
            pos = i;
            mn = ar[i];
        }
    }

    cout << n-1 << "\n";

    for ( i = 0; i < n; i++){
        if (i == pos) continue;

        cout << pos+1 << " " << i+1 << " " << mn << " " << mn + abs (pos - i) << "\n";
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
