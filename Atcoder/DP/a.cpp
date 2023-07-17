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
int inf = 1e9+9;
int t,cs=0;


void solve()
{
    int n;
    cin >> n;
    vector <int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector <int> dp(n, inf);

    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <= i+2; j++)
            if (j < n)
                dp[j] = min(dp[j], dp[i]+(abs(v[i]-v[j])));

        //cout << i << " " << dp[i] << endl;
    }

    cout << dp[n-1] << endl;

}



int main()
{
  //  w(t)
    {
        solve();
    }
}



