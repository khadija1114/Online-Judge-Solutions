#include<bits/stdc++.h>
using namespace std;


bool solve()
{
    int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it: v) {
            cin >> it;

        }

        string s;
        cin >> s;
        vector<int> mark[55];
        for (int i = 0; i < n; i++) {
            mark[v[i]].push_back(i);
        }

        for (int i = 0; i < 55; i++) {
            for (int j = 1; j < mark[i].size(); j++) {
                if (s[mark[i][j]] != s[mark[i][j-1]])
                    return false;
            }
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
