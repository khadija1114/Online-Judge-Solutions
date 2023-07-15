#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    scanf("%d", &n);
    vector <int> v(n);
    int dis = 0;
    vector <bool> found(n+2);

    for (auto &it: v) {
        cin >> it;
        if (!found[it]) {
            found[it] = true;
            dis++;
        }
    }

   if (n % 2 == 0)
    return true;


   if (dis < n)
    return true;

    return false;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        if (solve())
            puts("YES");
        else
            puts("NO");
    }
}
