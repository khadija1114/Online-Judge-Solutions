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
int t,cs=0, dxx[]={1,0,0,-1, -1, 1, 1, -1},dyy[]={0,-1,1,0, -1, 1, -1, 1};

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector <ll> v(n);

    for (auto &it: v) cin >> it;

    ll ans = 0;
    sort (v.begin(), v.end());

    for (int i = 1, j = n-1; i < n; i++) {

            int mod;
            if (v[i] != v[j]) {
                ans = max(ans, v[i]+v[j]+m+(v[i]-v[j])% m);
                ans = max(ans, v[i]+v[j]+(v[j]-v[i])% m);
            }

            else {
                ans = max(ans, v[i]+v[j]);
            }

    }

    cout << ans << endl;

}



int main()
{
    w(t) {
        solve();
    }
}



