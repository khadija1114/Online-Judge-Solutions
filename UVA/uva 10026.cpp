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

class shoe {
public:
    int t, pos, s;
};

bool comp(shoe a, shoe b) {
    double m = 1.0*a.s/a.t;
    double n = 1.0*b.s/b.t;

    if (m != n) return m > n;

    return a.pos < b.pos;
}

void solve()
{
    int n, i=0;
    cin >> n;

    vector <shoe> v(n);

    for (auto &it: v) {
        cin >> it.t >> it.s;
        it.pos = ++i;
    }

    sort (v.bg, v.en, comp);

    for (int i=0; i < n; i++) {
        cout << v[i].pos;
        if (i != n-1)
            cout << " ";
    }

    cout << endl;

    if (t)
    cout << endl;
}



int main()
{
    w(t)
    solve();
}



