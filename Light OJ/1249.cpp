#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    ios
    int t, cs = 0;
    cin >> t;
    while (t--){
        string s;
        int a, b, c, n;
        map <int, string> mp;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> s >> a >> b >> c;
            mp[a*b*c] = s;
        }

        if (mp.size() == 1)
            cout << "Case " << ++cs << ": no thief" << "\n";
        else
            cout << "Case " << ++cs << ": " << mp.rbegin()->second << " took chocolate from " << mp.begin()->second << "\n";

    }

}
