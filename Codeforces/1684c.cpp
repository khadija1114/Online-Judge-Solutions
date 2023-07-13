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
   int n, m, a;
   cin >> n >> m;

   vector <vector<int>> v(n);

   for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++) {
        cin >> a;
        v[i].pb(a);
    }
   }

   vector <int> swp;

   for (int i = 0; i < n && swp.empty(); i++) {
    vector <int> temp;
    temp = v[i];

    sort(temp.bg, temp.en);
    for (int j = 0; j < m; j++){
        if (v[i][j] != temp[j]){
            swp.pb(j);
        }
    }
   }

   if (swp.size() > 2){
    cout << -1 << endl;
    return ;
   }

   if (swp.empty()) {
    cout << 1 << " " << 1 << endl;
    return;
   }

   for (int i = 0; i < n; i++) {
    swap(v[i][swp[0]], v[i][swp[1]]);
   }

   for (int i = 0; i < n; i++) {
    for (int j = 1; j < m; j++) {
        if (v[i][j] < v[i][j-1]){
            cout << -1 << endl;
            return;
        }
    }
   }

   cout << swp[0]+1 << " " << swp[1]+1 << endl;
}


int main()
{
    w(t)
    solve();
}




