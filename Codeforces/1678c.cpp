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
    cin >> n;

    vector <int> v(n);

    for (auto &it: v) cin >> it;

    int a=0, b, c, d=n-1, ans = 0;

    while (a+3 < n) {
        int tempb = 0;

        for (int c = a+2; c < n-1; c++) {
            if (v[a] < v[c]) {
                for (int b = a+1; b < c; b++) {
                    for (int d = c+1; d < n; d++) {
                        if (v[b]>v[d])
                            ans++;
                    }
                }
            }
        }
        a++;
    }

    cout << ans << endl;
}



int main()
{
    w(t) {
        solve();
    }
}




