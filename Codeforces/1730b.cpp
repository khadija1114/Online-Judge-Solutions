#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
       int n, pos;
       long long time = 0, x = 0, mn = 100000000000000000000, firstsum = 0;
       cin >> n;
       vector <pair<int, int> > v(n);
       for (auto &it: v) {
            cin >> it.first;
            x += it.first;
       }
       for (auto &it: v) {
            cin >> it.second;
            time += it.second;
       }

       sort(v.begin(), v.end());

       for (int i = 0; i < n; i++) {
            int cnt = 1;
            while (i < n-1 && v[i].first == v[i+1].first) {
                v[i+1].second += v[i].second;
                cnt++;
                i++;
            }
            int x0 = v[i].first;
            firstsum += cnt*v[i].first;
            int lastsum = x-firstsum;
            long long here = x0*(i+1) - firstsum + lastsum - x0*(n-i-1) - v[i].second;
            if (here < mn) {
                mn = here;
                pos = i+1;
            }
            cout << i << "  " << firstsum << " " << lastsum << " " << here << endl;

       }

       cout << mn << endl;


    }
}
