#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    string s;
    cin >> n;
    cin.ignore();
    map<string, bool> mp;

    while (n--){
        getline (cin, s);
        if (mp[s]) cnt++;
        mp[s] = true;
    }

    cout << cnt << "\n";
}
