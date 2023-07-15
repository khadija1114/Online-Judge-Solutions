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
    int n, x, y, ans = 0;

    cin >> n >> x >> y;

    if (x<y) swap(x, y);

    ans += 2*(n-1);


        ans += min (n-x, n-y);
        ans += min (x-1, y-1);
        ans += min (n-x, y-1);
        ans += min (n-y, x-1);

    cout << ans << endl;
}



int main()
{
    w(t)
    solve();
}



