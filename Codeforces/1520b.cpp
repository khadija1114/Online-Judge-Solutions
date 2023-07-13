#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int mn = 100, i = 0, n, ans = 0;
        string s;
        bool flag = true;
        cin >> s;
        n = s.size();

        ans = (n-1) * 9;

        ans += s[0] - '1';

        for (i = 1; i < n && flag; i++){
            if (s[i] > s[i-1]) break;
            else if (s[i] < s[0]) flag = false;
        }

        ans += flag;
        cout << ans << "\n";
    }
}

