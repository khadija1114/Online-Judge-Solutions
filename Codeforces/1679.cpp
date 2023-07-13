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
vector <int> v;

void dp(int st, int en, int cnt1, int cnt0){

    if (st > en )
        return ;

    ans = min (ans, max(cnt1, cnt0));
   //1 cout << st << " " << en << " " << cnt1 << " " << cnt0 << endl;

    if (v[st] < v[en])
    dp(st+1, en, cnt1+v[st], cnt0-1);
    else if (v[st] > v[en])
    dp(st, en-1, cnt1+v[en], cnt0-1);
    else{
        dp(st+1, en, cnt1+v[st], cnt0-1);
        dp(st, en-1, cnt1+v[en], cnt0-1);
    }

}


void solve()
{
   string s;
   cin >> s;
   int n = s.size();
   int i = 0, j = 0, vsum = 0;

   v.clear();

    int cnt = 0;
    for (i = 0; i < n; i++) {
        if (s[i] == '1'){
            cnt ++;
        }
        else{
            v.push_back(cnt);
            cnt = 0;
        }

    }
    v.pb(cnt);

    int cnt1 = 0, cnt0 = v.size()-1;
    ans = cnt0;

    dp(0,cnt0,  cnt1, cnt0);


    cout << ans << endl;
}



int main()
{
    ws(t) {
        solve();
    }
}
