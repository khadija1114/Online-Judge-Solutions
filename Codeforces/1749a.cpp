#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n, m;
    cin >> n >> m;

    vector <int> x(m), y(m);

    for (int i = 0; i < m; i++)
        cin >> x[i] >> y[i];

    if (n <= m) {
        return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        if (solve())
            puts("YES");
        else
            puts("NO");
    }
}
