#include<bits/stdc++.h>
#define ff first
#define ss second
#define bg begin()
//#define en end()
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
int t,cs=0, dxx[]={1,0,0,-1, -1, 1, 1, -1},dyy[]={0,-1,1,0, -1, 1, -1, 1}, ans;



void solve()
{
   string s;
   cin >> s;
   int n = s.size();
   int i = 0, j = 0, vsum = 0;
    vector <int> v;

    int cnt = 0, mx = 0, ind = 0;
    for (i = 0; i < n; i++) {
        if (s[i] == '1'){
            cnt ++;
            vsum++;
        }

        else{
            v.push_back(cnt);
            cnt = 0;
        }

    }
    v.pb(cnt);




    int cnt1 = 0, cnt0 = v.size()-1,ans, temp;
     ans = n;

    for (i = 0, j = cnt0; i < j; ){
        if (v[i] > v[j]) {
            cnt1 += v[j];
            cnt0--;
            j--;
            ans = min (ans, max(cnt1, cnt0));
        }
        else {
            cnt1 += v[i];
            cnt0--;
            i++;
            ans = min (ans, max(cnt1, cnt0));
        }

      //  cout << ans << endl;
    }


    cout << ans << endl;
}



int main()
{
    ws(t) {
        solve();
    }
}



