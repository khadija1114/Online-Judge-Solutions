#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int i, j, a, b, n, m;
    cin >> n >> m;
    int ar[n], cnt[m] = {}, ans = 0;

    for (i = 0; i < n; i++){
        cin >> ar[i];
        a = ar[i] % m;
        cnt[a]++;
    }

    if(cnt[0]) ans++;

    for (i = 1; i <= m / 2; i++){
        a = i, b = m - i;

        if (cnt[a] + cnt[b] == 0)
            continue;

        if (cnt[a] == cnt[b])
            ans++;
        else if (cnt[a] < cnt[b]){
            ans += cnt[b] - cnt[a];
        }
        else{
            ans += cnt[a] - cnt[b];
        }

 //       cout << a << " " << cnt[a] << " " << cnt[b] << " " << ans << "\n";
        cnt[a] = cnt[b] = 0;

    }

    for ( ; i < m; i++){
        ans += cnt[i];
 //       cout << i << " " << cnt[i] << " " << ans << "\n";
    }

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
