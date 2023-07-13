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

void solve()
{
    int n, r, b;
    cin >> n >> r >> b;
    int temp = b+1;
    int t =  (r / temp);
    temp = r - temp*t;

    string s1;
    for (int i = 0; i < t; i++) {
        s1 += 'R';
    }
    string s;

    for (int i = 0; i < temp; i++) {
        s += s1 + 'R' + 'B';
    }
    for (int i = 0; i < b-temp; i++) {
        s += s1 + 'B';
    }

    if (s.size() < n) {
        n -= s.size();
        for (int i = 0; i < n; i++)
            s += 'R';
    }

    cout << s << endl;


}



int main()
{
    w(t)
    solve();
}



