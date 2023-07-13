#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int i = 0;

    if (s[i] != 'm' && s[i] != 'M') return 0;
    while (i < n && (s[i] == 'm' || s[i] == 'M')) i++;

    if (i >= n || s[i] != 'e' && s[i] != 'E') return 0;
    while (i < n && (s[i] == 'e' || s[i] == 'E')) i++;

    if (i >= n || s[i] != 'o' && s[i] != 'O') return 0;
    while (i < n && (s[i] == 'o' || s[i] == 'O')) i++;

    if (i >= n || s[i] != 'w' && s[i] != 'W') return 0;
    while (i < n && (s[i] == 'w' || s[i] == 'W')) i++;

    if (i != n) return 0;

    return 1;
}

int main()
{
    int t; cin >> t;
    while (t--)
        if (solve()) puts("YES");
        else puts("NO");
}
