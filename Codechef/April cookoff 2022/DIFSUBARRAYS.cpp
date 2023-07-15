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
int t,cs=0, dxx[]={1,0,0,-1},dyy[]={0,-1,1,0};

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int a;

    for (int i = 0; i < n; i++){
        cin >> a;
        mp[a]++;
    }

    vector <pii> v;
    for (auto it: mp) {
        v.pb({it.ss, it.ff});
    }
    if (v.size() == 2) {
        cout << "NO" << endl;
        return ;
    }
    sort (v.bg, v.en);

    vector<int> ans, ans2;
    for (auto it: v) {
        for (int i = 0; i < it.ff; i++)
            ans.pb(it.ss);
    }
    int sz = v.size();
    for(int i = 0; i < v[sz-1].ff; i++) {
            ans2.pb(v[sz-1].ss);
    }

    for (int i = 0; i < sz-1; i++){
        for (int j = 0; j < v[i].ff; j++)
            ans2.pb(v[i].ss);
    }
  //  reverse(ans2.bg, ans2.en);


    for (int i = 0; i < n; i++)
    if (ans[i] == ans2[i]) {
        cout << "NO" << endl;
        return ;
    }

    cout << "YES" << endl;

    for (auto it: ans)
        cout << it << " ";
    cout << endl;
    for (auto it: ans2)
        cout << it << " ";
    cout << endl;

}


int main()
{
    w(t)
    solve();
}



