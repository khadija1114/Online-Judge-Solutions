#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;

    cin >> n >> s;

    int ar[26] = {}, br[26] = {};

    for (int i = 0; i < n; i+= 2) {
        ar[s[i]-'a']++;
        br[s[i+1]-'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (ar[i] != br[i]){
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

