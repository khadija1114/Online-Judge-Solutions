#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    string s , mx, mn;
    cin >> s;
    mx = mn = s;
    n = s.size();

    for (i = 1; i < n; i++){
        string temp = s.substr(i, n-i) + s.substr(0, i);
        mx = max (mx, temp);
        mn = min (mn, temp);
    }

    cout << mn << "\n" << mx << "\n";
}
