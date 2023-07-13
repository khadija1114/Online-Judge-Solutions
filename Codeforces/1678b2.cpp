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
    int n;
    string s;
    cin >> n >> s;

    int ans = 0, temp = 1, prev = -1, ans2 = 0;

    for (int i = 0; i < n; i += 2) {
        if (s[i] != s[i+1]) {
            ans++;
        }
        else if (s[i] != prev) {
            ans2++;
            prev = s[i];
        }

    }

    cout << ans << " " << max(ans2,1) << endl;


}



int main()
{
    w(t) {
        solve();
    }
}



