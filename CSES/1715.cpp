#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7, N = 1e6+1;

ll bigmod(ll a, ll b)
{
    if (b==0) return 1;

    ll x = bigmod (a, b/2);
    x = (x*x) % mod;

    if (b&1) x = (x*a) % mod;

    return x;
}

ll inverse(ll a)
{
    return bigmod(a, mod-2);
}

int main()
{
    int n, i, j, cnt[26] = {};
    string s;
    cin >> s;

    n = s.size();
    ll pre[N+2], ans = 0;
    pre[0] = 1;

    for (i = 1; i < N; i++){
        pre[i] = (pre[i-1] * i) % mod;
    }

    for (auto it: s)
        cnt[it-'a']++;

    ans = pre[n];

    for (auto it : cnt){
        if (it > 1){
            ans  = (ans * inverse(pre[it])) % mod;
        }
    }

    cout << ans << endl;
}

