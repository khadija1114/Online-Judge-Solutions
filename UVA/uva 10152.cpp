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
    int n, mx1 = -1, mx2 = -1;
    cin >> n;
    cin.ignore();

    vector <string> given(n), order(n);
    string s;
    map <string, int> mp;


    for (int i = 0; i < n; i++)
        getline(cin, given[i]);

  //  cout << endl;

    for (int i = 0; i < n; i++) {
        getline(cin, s);
        mp[s] = i;
        order[i] = s;
    }
  //  cout << endl;

    for (int i = 0; i < n; i++) {
  //    cout << mp[given[i]] << " ";
        if (mp[given[i]] > mx1 )
            mx1 = mp[given[i]];
        else if (mp[given[i]] > mx2)
            mx2 = mp[given[i]];
    }

  //  cout << endl << mx2 << endl;

    for (int i = mx2; i >= 0; i--)
        cout << order[i] << endl;

    cout << endl;
}



int main()
{
  //  ios
    w(t)
    solve();
}



