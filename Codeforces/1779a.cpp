#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n; string s; cin >> n >> s;

    bool r = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R')
            r = true;
        if (r && s[i] == 'L')
            return 0;
    }

    for (int i = 0; i < n-1; i++){
        if (s[i] == 'L' && s[i+1] == 'R')
            return i+1;
    }

    return -1;
}

int main()
{
   int t; cin >> t;
   while (t--) cout << solve() << endl;
}

