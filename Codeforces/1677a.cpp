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

    vector <int> v(n) , ar(101);

    for (auto &it: v) {
        cin >> it;
        ar[it]++;
    }

    if (ar[0]) {
        cout << n-ar[0] << endl;
        return;
    }
    for (auto it: ar) {
        if (it >= 2) {
            cout << n << endl;
            return;
        }
    }

    cout << n+1 << endl;



}



int main()
{
    w(t) {
        solve();
    }
}



