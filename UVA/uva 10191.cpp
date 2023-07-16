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

void solve(int n)
{
    int a, m1, m2, mx = 0, ans1, prev = 10*60;
    string s;

    vector <pair<int, int>> v;

    while (n--) {
        scanf("%d:%d", &a, &m1);
        m1 += 60*a;

        scanf("%d:%d", &a, &m2);
        m2 += 60*a;

        v.pb({m1, m2});

        getline(cin, s);

    }
    v.pb({18*60, 18*60});
    v.pb({prev, prev});

    sort (v.bg, v.en);

    for (auto it: v) {
        if (mx < it.ff - prev) {
            mx = it.ff-prev;
            ans1 = prev;
        }
        prev = it.ss;
    }


    cout << "Day #" << ++t << ": the longest nap starts at " << ans1/60 << (ans1%60<10 ? ":0" : ":") << ans1%60 << " and will last for ";
    if (mx >= 60)
        cout << mx/60 << " hours and ";
    cout << mx%60 << " minutes." << endl;

}



int main()
{
    int n;
    while(cin >> n)
    solve(n);
}



