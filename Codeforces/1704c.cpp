#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n, x, ans = 0;
    cin >> n >> x;
    vector <int> v(x);
    for (auto &it: v) cin >> it;
    sort (v.begin(), v.end());

    vector <long long> dis;
    for (int i = 0; i < x-1; i++) {
        dis.push_back(v[i+1] - v[i] - 1);
    }
    dis.push_back(v[0]-1+n-v[x-1]);

    sort(dis.begin(), dis.end());
    reverse(dis.begin(), dis.end());
    int timer = 0;


//    for (auto it: dis) cout << it << " " ;
//    cout << endl;

    for (int i = 0; i < dis.size(); i++) {
        if (dis[i] <= timer)
            break;
        int a = dis[i];
        ans += a-1-timer;
        if (a-1 == timer)
            ans++;
        timer += 4;
       // cout << i << " " << dis[i] << " " << timer << " " << ans << endl;
    }


    return n-ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}


