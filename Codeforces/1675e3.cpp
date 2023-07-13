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
int t,cs=0, dxx[]={1,0,0,-1},dyy[]={0,-1,1,0};

void solve()
{
   int n, k, temp = 0, mx = 0;
   string s, ans;
   cin >> n >> k >> s;

    int ar[26] = {};
    int mx1 = 0, mx2 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i]-'a' <= k) {
            mx1 = max(mx1, s[i]-'a');
        }
        else {
            break;
        }
    }
    k -= mx1;

    for (auto &it: s) {
        if (it - 'a' <= mx1)
            it = 'a';
    }
  //  cout << s << endl;

    for (auto it: s){
        if (it != 'a') {
            mx1 = it-'a';
            mx2 = mx1-k;
            break;
        }
    }

    for (auto &it : s) {
        if (it-'a' <= mx1 && it-'a' > mx2)
            it = 'a'+mx2;
    }

    cout << s << endl;
}


int main()
{
    w(t)
    solve();
}
/*
9 18
kyjaatshp*/


