#include<bits/stdc++.h>
#define pb push_back
#define endl "\n"
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int inf=1e9+9;

void min_self(ll& a, ll b){
    a = min(a, b);
}

void solve()
{
    int n, w;
    cin >> n >> w;


    vector <ll> weight(n), value(n);
    int totval = 0;

    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
        totval += value[i];
    }

    vector <ll> dp(totval+1, inf);
    dp[0] = 0;

    for (int item = 0; item < n; item++) {
         for (int va = totval-value[item]; va >= 0; va--) {
            min_self(dp[va+value[item]], dp[va]+weight[item]);
        }
    }

    ll ans = 0;
    for (int i = 0; i <= totval; i++)
        if (dp[i] <= w)
        ans = i;

    cout << ans << endl;

}



int main()
{
   // w(t)
    {
        solve();
    }
}




