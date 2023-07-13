#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for (auto &it: v) cin >> it;

    if (v[0] == 1) return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        if (solve())
            puts("Yes");
        else
            puts("No");
}



