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
   int n, k, temp = 0;
   string s, ans;
   cin >> n >> k >> s;

   k = min (25, k);
   if (s[0] <= 'a' + k) {
   for (int i = 0; i < n; i++)
    {
        if (s[i]-'a' <= k) {
            temp = max(s[i]-'a', temp);
            s[i] = 'a';
        }

    }
    k-= temp;
   // cout << s << endl;
   }

    for (int i = 0; i < n; i++) {
        if (s[i] != 'a'){
            temp = i;
            break;
        }
    }

    char tt = s[temp];
    for (int i = 0; i < n; i++) {
        if (s[i] != 'a' && s[i] <= tt && s[i] >= tt-k) {
            s[i] = tt-k;
        }
    }

    cout << s << endl;

}


int main()
{
    w(t)
    solve();
}



