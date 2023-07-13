#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> ar(101); for (int i = 0; i < n; i++) {int a; cin >> a; ar[a]++;}

        int mx = 0; for (auto it: ar) mx = max(mx, it);
        if (n == mx) {
            puts("NO");
            continue;
        }

        puts("YES");
        for (int i = 100; i > 0; i--)
        if (ar[i]) {
            cout << i << " ";
            ar[i]--;
        }

        for (int i = 100; i > 0; i--) {
            while (ar[i]) {
                cout << i << " ";
                ar[i]--;
            }
        }

        cout <<endl;
    }
}
