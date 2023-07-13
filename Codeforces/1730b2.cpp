#include<bits/stdc++.h>
using namespace std;

bool leftLessHere(double x0, vector<pair<int, int>> &x)
{
    double leftmax = 0, rightmax = 0;
    int n = x.size();
    for (int i = 0; i < n; i++) {
        if (x[i].first < x0)
            leftmax = max(leftmax, x[i].second + (x0 - x[i].first));
        else
            rightmax = max(rightmax, x[i].second + (x[i].first - x0));
    }

    return leftmax < rightmax;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> x(n);

        for (auto &it: x) cin >> it.first;
        for (auto &it: x) cin >> it.second;


       double l = 1000000000, r = 0, mid;
       for (auto it: x) {
            l = min(l, 1.0*it.first);
            r = max(r, 1.0*it.first);
       }


        while (r-l > 0.0000001) {
            mid = (l+r)/2;

            if (leftLessHere(mid, x))
                l = mid;
            else
                r = mid;
        }

        cout << fixed << setprecision(7) << l << endl;
    }
}
