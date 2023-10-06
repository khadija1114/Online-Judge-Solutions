#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c; cin >> a >> b >> c;

    if ( a == 1 || c == 1) puts("What an excellent example!");
    else if (b == 2 && c == 2) puts("What an excellent example!");
    else puts("Oh look, a squirrel!");
}

int main()
{
    int t=1; //cin >> t;
    while (t--) solve();
}
