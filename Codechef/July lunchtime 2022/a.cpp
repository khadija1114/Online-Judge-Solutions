#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
        string s;

        cin >> n >> s;
        int temp = 0;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u')
                temp = 0;
            else
                temp++;

            if (temp >= 4) {
                cout << "NO" << endl;
                return ;
            }
        }

        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
