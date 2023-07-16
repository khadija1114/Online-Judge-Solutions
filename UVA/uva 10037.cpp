#include<bits/stdc++.h>
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,cs=0, dxx[]={1,0,0,-1},dyy[]={0,-1,1,0};

void solve()
{
    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> va[10*n];

    for (auto &it: v)
        cin >> it;

    sort (v.bg, v.en);

    n--;
    int ans = 0, i = 0;


    while (n >= 3) {
        /// AY A AZ A
        int mx1 = v[n]+v[n-1]+v[0]+v[0];
        /// AB A ZY B
        int mx2 = v[1]+v[0]+v[n]+v[1];

        if (mx1 > mx2){
            ans += mx2;
            va[i].pb(v[0]); va[i++].pb(v[1]);
            va[i++].pb(v[0]);
            va[i].pb(v[n-1]); va[i++].pb(v[n]);
            va[i++].pb(v[1]);
        }
        else {
            ans += mx1;
            va[i].pb(v[0]); va[i++].pb(v[n-1]);
            va[i++].pb(v[0]);
            va[i].pb(v[0]); va[i++].pb(v[n]);
            va[i++].pb(v[0]);
        }
        n -= 2;
    }

    if (n == 2) {
        /// AB A AZ
        ans += v[1] + v[0] + v[n];
        va[i].pb(v[0]); va[i++].pb(v[1]);
        va[i++].pb(v[0]);
        va[i].pb(v[0]); va[i++].pb(v[n]);
    }
    else if (n == 1) {
        /// AB
        ans += v[1];
        va[i].pb(v[0]); va[i++].pb(v[1]);
    }
    else{
        ///A
        ans += v[0];
        va[i++].pb(v[0]);
    }

    cout << ans << endl;

    for (int j = 0; j < i; j++) {
        for (int k = 0; k < va[j].size(); k++){
            cout << va[j][k];
            if (k != va[j].size()-1) cout << " ";
        }
        cout << endl;
    }

    if (t)
    cout << endl;
}



int main()
{
    w(t)
    solve();
}




