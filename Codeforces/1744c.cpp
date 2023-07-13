#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    vector<int> pre(n);

    int i = 0;
    while (i < n && s[i] != 'g')
        i++;
    int j = i;

    int mx = 0, cnt = 0;

    while (i >= 0) {
        if (s[i] == c) {
            mx = max(mx, cnt);
        }

        cnt++;
        i--;
    }

    for (i = n-1; i >= j; i--) {
        if (s[i] == 'g')
            cnt = 0;
        if (s[i] == c)
            mx = max(mx, cnt);
        cnt++;

      //  cout << i << " " << cnt-1 << endl;
    }

    cout << mx << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();

    }
}

