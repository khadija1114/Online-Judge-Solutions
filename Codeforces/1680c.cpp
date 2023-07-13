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
    string s;
    cin >> s;
    int n = s.size(), one = 0, zero = 0;

    for (auto it: s)
        if (it == '0') zero++;
    else one++;

    int tzero = 0, tone = one, ans ;
    ans = zero;

    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && tzero < tone){
            if (s[j] == '0')
                tzero++;
            else
                tone--;
            j++;
        }
        ans = min(ans, max(tzero, tone));

        if (s[i] == '0')
            tzero--;
        else
            tone++;
    }

    cout << ans << endl;
}



int main()
{
    ws(t) {
        solve();
    }
}



