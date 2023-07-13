#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        vector<int> v(n);
        for (auto &it: v) cin >> it;

        int ans = 0;

        for (int i = 0,j = n-1; i < j;i++, j--) {
            while (i < j && v[i] == 0) {
                i++;
            }
            while (i < j && v[j] == 1) {
                j--;
            }
            if (i < j)
            ans++;
        }

        cout << ans << endl;
    }
}
