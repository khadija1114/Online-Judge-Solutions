#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        if (n == 1 || n == 3) {
            puts("-1");
            continue;
        }
        int j, i;
        for (i = 0, j = n; i < n/2; i++) {
            v[i] = j--;
        }

        for ( j = 1; i < n; i++)
            v[i] = j++;



        for (auto it: v)
            cout << it << " ";
        puts("");

    }
}
