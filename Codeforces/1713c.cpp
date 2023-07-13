#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> ans(n);
    vector<bool> mark(n, 0);

    long long temp  = n;

    for (int i = n-1; i >= 0; i--) {
        if (temp >= n || mark[temp] ) {
                temp = sqrt(i);
            if (temp*temp != i)
                temp++;
            temp *= temp;
            temp -= (i);
          //  cout << i << temp << endl;
        }
        if (mark[temp]) {
            cout << -1 << endl;
            return ;
        }
            ans[i] = temp;
            mark[temp++] = true;
           // cout << i << " " << temp-1 << endl;

    }

    for (auto it: ans)
        cout << it << " " ;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();

    }
}

