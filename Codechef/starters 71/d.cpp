#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    vector<int> v(n*m); for (auto &it: v) cin >> it; sort(v.begin(), v.end());

    int pre_range = n/2, post_range = (n-1)/2, l1, l2, r1, r2, range = n+m-1, min_diff_from_side_n = INT_MAX, min_diff_from_side_m = INT_MAX;

    ///calculating min difference from both sides

    //from side n
    for (int i = pre_range, j = i+range-1; j+post_range < n*m; i++, j++) {
        if (v[j]-v[i] < min_diff_from_side_n) {
            min_diff_from_side_n = v[j]-v[i];
            l1 = i, r1 = j;
        }
    }

    //from side m
    pre_range = m/2, post_range = (m-1)/2;
    for (int i = pre_range, j = i+range-1; j+post_range < n*m; i++, j++) {
        if (v[j]-v[i] < min_diff_from_side_m) {
            min_diff_from_side_m = v[j]-v[i];
            l2 = i, r2 = j;
        }
    }

    int ar[n][m] = {}, ll, rr;
    if (min_diff_from_side_n < min_diff_from_side_m) {

        ll = l1, rr = r1;

        // fill up the path to be taken
        for (int i = 0; i < n; i += 2, ll++) ar[i][0] = v[ll];
        for (int i = 1; i < n; i += 2, rr--) ar[i][0] = v[rr];
        for (int i = 1; i < m; i++, ll++) ar[n-1][i] = v[ll];

        //fill up 2nd col to block the path
        for (int i = 0; i < n-1; i += 2) ar[i][1] = v[--l1];
        for (int i = 1; i < n-1; i += 2) ar[i][1] = v[++r1];

        //fill remaining cell
        for (int i = 0, x = 0; i < n-1; i++) {
            for (int j = 2; j < m; j++) {
                if (x == l1) x = r1+1;
                ar[i][j] = v[x++];
            }
        }
    } else {

        ll = l2, rr = r2;

        // fill up the path to be taken
        for (int i = 0; i < m; i += 2, ll++) ar[0][i] = v[ll];
        for (int i = 1; i < m; i += 2, rr--) ar[0][i] = v[rr];
        for (int i = 1; i < n; i++, ll++) ar[i][m-1] = v[ll];

        //fill up 2nd col to block the path
        for (int i = 0; i < m-1; i += 2) ar[1][i] = v[--l2];
        for (int i = 1; i < m-1; i += 2) ar[1][i] = v[++r2];

        //fill remaining cell
        for (int i = 2, x = 0; i < n; i++) {
            for (int j = 0; j < m-1; j++) {
                if (x == l2) x = r2+1;
                ar[i][j] = v[x++];
            }
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) cout << ar[i][j] << " " ; puts("");
    }
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
}
