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
vector <int> v;

void solve()
{
    int n, a;
    cin >> n;

    vector <int> temp;
    int ar[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> a;
        ar[a]++;
    }
    temp[0]++;
    for (int i = 0; i < n; i++)
        if (ar[i])
            temp.push_back(ar[i]);

    long long ans = temp.size();
    sort(temp.bg, temp.en);

    for (int i = 0; i < temp.size(); i++) {
        temp[i] = max (0, temp[i] - i - 1);
        if (temp[i])
            v.push_back(temp[i]);
    }

    if (v.size() == 0) {
        cout << ans << endl;
        return ;
    }

    int l = 0; h = 1e6, mid;

    while (l < h) {
        mid = (l+h)/2;

        if (check(mid))
    }

}



int main()
{
    w(t)
    solve();
}



