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
int t,cs=0, dxx[]={1,0,0,-1},dyy[]={0,-1,1,0}, n, ar[N];



bool tsolve(int ind, string s) {
    if (ind == n) return 1;

    char a = s[1], b = s[2];

    if (ar[ind] == 0) {
        if (a > b) return false;
        return tsolve(ind+1, "012");
    }
    else if (ar[ind] == 1) {
        if (a < b) return tsolve(ind+1, "021");
        else return tsolve(ind+1, "102");
    }
     else if (ar[ind] == 2) {
        if (a < b) return tsolve(ind+1, "120");
        else return tsolve(ind+1, "201");
    }
    else {
        if (a < b) return false;
        return tsolve(ind+1, "210");
    }

    return true;
}



void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    bool ans;

    if (ar[0] == 0) ans = tsolve(1, "012");
    else if (ar[0] == 1) ans = tsolve(1, "102") | tsolve(1, "021");
    else if (ar[0] == 2) ans = tsolve(1, "120") | tsolve(1, "201");
    else ans = tsolve(1, "210");

    if (ans)
        cout  << "YES";
    else
        cout << "NO";

    cout << endl;
}



int main()
{
    w(t)
    solve();
}



