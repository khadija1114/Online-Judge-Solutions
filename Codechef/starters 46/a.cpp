#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
      //  n = s.size();

        int ans = 0;

        int i = 0;
        while (i < n && s[i] == '0')
            i++;

        for ( ; i < n; i++) {
            if (s[i] == '0')
                ans++;
                while (i < n && s[i] == '0')
                    i++;
        }

        cout << ans << endl;
    }

}
