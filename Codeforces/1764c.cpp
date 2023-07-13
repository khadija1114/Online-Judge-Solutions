#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        map<int, int> mp;
        for (auto &it: v) {
            cin >> it;
            mp[it]++;
        }

        vector <int> srt;

        int sum = 0;
        for (auto it: mp) {
            srt.push_back(it.second);
        }

        if (srt.size() == 1) {
            cout << srt[0]/2 << endl;
            continue;
        }

        long long ans = 0, temp = srt[0];
        for (int i = 1; i < srt.size(); i++) {
            ans = max(ans, temp * (n-temp));
            temp += srt[i];

          //  cout << i << " " << temp << " " << n-temp << endl;
        }

        cout << ans << endl;

    }
}


