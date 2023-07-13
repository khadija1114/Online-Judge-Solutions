#include<bits/stdc++.h>
using namespace std;

long long solve (map<int, int> mp, int mid, int n)
{
    long long temp = 0, a;
    for (int i = 1; i <= n; i++) {
        a = mp[i];

        if (a > mid) {
            temp -= (a-mid);
        } else {
            temp += (mid-a)/2;
        }
    }

    return temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        map<int, int> mp;

        for (int i = 0; i < m; i++) {
            int a;
            cin >> a;
            mp[a]++;
        }

        int l = 1, r = 2*1e5+2, mid;

        while (l < r) {
            mid = (l+r)/2;
            long long temp = solve(mp, mid, n);

            if (temp >= 0) {
                r = mid;
            } else {
                l = mid+1;
            }
            //cout << l << " " << r << " " << mid  << " " << temp << endl;

        }

        cout << r << endl;

    }
}
