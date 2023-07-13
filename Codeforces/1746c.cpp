#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (auto &it: v) cin >> it;

        vector<int> ans;
        int cnt = 1;

        for (int i = n-1; i > 0 && cnt <= n; i--) {
          //  cout << i << endl;
            while (cnt <= n && v[i] < v[i-1]) {
                v[i] += cnt;
                cnt++;
                ans.push_back(i+1);
            }
        }

        while (ans.size() < n)
            ans.push_back(1);

        for (auto it: ans)
            cout << it << " ";
        puts("");
    }
}

