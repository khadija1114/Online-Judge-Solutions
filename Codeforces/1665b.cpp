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
    int n; map<int, int> mp;
    cin >> n;

    vector <int> v(n);
    for (auto &it : v) {
        cin >> it;
        mp[it]++;
    }

    int op = 0, mx = 1;

    for (auto it: mp) {
        mx = max(it.ss, mx);
    }

   // cout << op << " " << mx << endl;

    while (mx != n) {
        op ++;
        if (mx+mx <= n) {
            op += mx;
            mx += mx;
        }

        else {
            op += (n - mx);
            mx += (n - mx);
        }

     //   cout << op << " " << mx << endl;

    }

    cout << op << endl;


}



int main()
{
    w(t)
    solve();
}



