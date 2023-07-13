#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    vector<long long> v(n); for (auto &it: v) cin >> it;
    long long ans = 0, ps = 0;
    priority_queue<int> pq;


        for (int i = m; i < n; i++) {
            ps += v[i];
            if (v[i] < 0) {
                pq.push(-v[i]);
            }

            while (ps < 0 && !pq.empty()) {
                long long grt = pq.top();
               // cout << i << " " << ps << " " << grt <<  endl;
                ps+=grt+grt;
                ans++;
                pq.pop();
            }
        }

       // cout << ans << endl;


    ps = 0; while (!pq.empty()) pq.pop();
    for (int i = m-1; i > 0 && m > 1; i--) {
            ps += v[i];
            if (v[i] > 0) {
                pq.push(v[i]);
            }

            while (ps > 0 && !pq.empty()) {
                long long grt = pq.top();
               // cout << i << " " << ps << " " << grt <<  endl;
                ps -= (2*grt);
                ans++;
                pq.pop();
            }
        }

    cout << ans << endl;


}

int main()
{
   int t; cin >> t;
   while (t--) solve();
}


