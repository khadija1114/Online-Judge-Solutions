#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i;
        bool ans = true;
        string s;
        map <char, int> mp;

        cin >> n >> s;
        mp[s[0]]++;
        for (i = 1; i < n; i++){
            if (s[i] == s[i-1]) continue;
            if (mp[s[i]]){
                ans = false;
                break;
            }
            mp[s[i]]++;
        }

        if (ans) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}
