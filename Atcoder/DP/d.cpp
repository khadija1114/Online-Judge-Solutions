#include<bits/stdc++.h>
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,cs=0;

void max_self(ll& a, ll b){
    a = max(a, b);
   // cout << a << " " << b << endl;
}

void solve()
{
    int n, w;
    cin >> n >> w;


    vector <ll> dp(w+1);

    while (n--) {
        int value, weight;
        cin >> weight >> value;

        for (int wa = w-weight; wa >= 0; wa--) {
            max_self(dp[wa+weight], dp[wa]+value);
        }

        //cout << dp[w] << endl;
    }

    ll ans = 0;
    for (auto it: dp)
        max_self(ans, it);

    cout << ans << endl;

}



int main()
{
   // w(t)
    {
        solve();
    }
}




