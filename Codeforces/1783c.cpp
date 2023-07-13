#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; long long m; cin >> n >> m;
    vector<int> v(n), p; for (auto &it: v) cin >> it;

    int ans = 0, win = 0, pre = 0;
    vector<long long> temp(n); for (int i = 0; i < n; i++) temp[i] = v[i]; sort(temp.begin(), temp.end());
    for (int i = 0; i < n; i++) {
        if (i) temp[i] += temp[i-1];
        if (temp[i] <= m) {
            win = i+1;
            ans = n-i;
           // if (i) pre = temp[i-1];
        }
    }

   // cout << win << " " << pre << endl;

    if (ans == 1) {
        cout << 1 << endl;
        return ;
    }

    if (ans) {
        for (int i = n-1; i >= 0; i--) {
            if (v[i] <= m) {
                int rem = m-v[i];
                int l = upper_bound(temp.begin(), temp.end(), rem) - temp.begin();
             //   cout << i << " " << l << endl;
                if (l == win-1) {
                    p.push_back(i);
                    sort(p.rbegin(), p.rend());
                   for (int j = 0; j < p.size(); j++){
                      if (p[j] == i) {
                            ans = min(ans, j+1);
                            cout << ans << endl;
                            return ;
                        }
                    }

//                    int ind = lower_bound(p.rbegin(), p.rend(), i) - p.rbegin();
//                    ans = min(ans, ind+1);
//
//                    cout << "  " << ans << " " << i << " " << p.size()-ind+1 << " " << p.size()<< endl;

                } else {
                    p.push_back(i+1);
                }

            }
            else {
                p.push_back(i+1);
            }
        }

        cout << ans << endl;
    }
    else
    cout << n+1 << endl;
    return ;
}

int main()
{
    int t;cin >> t;
    while (t--) {
       solve();
    }
}


