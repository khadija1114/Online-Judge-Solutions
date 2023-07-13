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
    vector <int> v(n), ans(n);
    map<int, int> cnt;

    for (auto &it: v){
        cin >> it;
        cnt[it]++;
    }
//
//    vector<pair<int, int>> vp;
//
//    for (auto it: cnt){
//        vp.pb({it.ss, it.ff});
//    }
//
//    sort(vp.bg, vp.en);
//    reverse(vp.bg, vp.en);
//

    sort (v.bg, v.en);

    int i = 0, j;
    for (i = 0, j = 0; i < n; i+=2) {
        ans[i] = v[j++];
        //cout << i << " " <<
    }

    if (n&1)
        i = n-2;
    else
        i = n-1;

    for (i = 1; i < n; i+=2){
        ans[i] = v[j++];
    }

//     for (auto it: v)
//        cout << it << " ";
//    cout << endl;
//
//    for (auto it: ans)
//        cout << it << " ";
//    cout << endl;

    for (i = 1; i < n-1; i++) {
        if (ans[i] == ans[i-1]){
            cout << "NO" << endl;
            return ;
        }
        if (ans[i] > ans[i-1] == ans[i] > ans[i+1])
            continue;
        else {
            cout << "NO" << endl;
            return ;
        }
    }

    if (ans[0] > ans[1] == ans[0] > ans[n-1]);
    else {
            cout << "NO" << endl;
            return ;
        }
    if (ans[n-1] > ans[n-2] == ans[n-1] > ans[0]);
    else {
            cout << "NO" << endl;
            return ;
        }
    if (ans[0] == ans[n-1]){
            cout << "NO" << endl;
            return ;
        }

    cout << "YES" << endl;
    for (auto it: ans)
        cout << it << " ";
    cout << endl;
}



int main()
{
    w(t) {
        solve();
    }
}




