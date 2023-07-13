#include<bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//using orderedMultiset = tree<T ,null_type,std::less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

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
   string s, t;

   cin >> n >> s >> t;

   int ar[3] = {}, br[3] = {};

   for (int i = 0; i < n; i++) {
    ar[s[i]-'a']++;
    br[t[i]-'a']++;
   }

   for (int i = 0; i < 3; i++) {
       if (ar[i] != br[i]) {
        cout << "NO" << endl;
        return ;
       }
       else {
        ar[i] = 0;
        br[i] = 0;
       }
   }
   int ab = 0, ba = 0, bc = 0, cs = 0, ct = 0, ac = 0;

   for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) continue;

        if (s[i] == 'c') cs++;
        if (t[i] == 'c') ct++;

       if (s[i] == 'b' && t[i] == 'a'){
            ba++;
       }
       else if  (s[i] == 'a' && t[i] == 'b'){
            ba--;
       }

       else if (s[i] == 'c' && t[i] == 'b') {
            cb++;
       }
       else if (s[i] == 'b' && t[i] == 'c') {
            cb--;
       }

       if (ab < ba || bc < cb) {
        cout << "NO" << endl;
        return;
       }

   }

   cout << "YES" << endl;


}



int main()
{
    w(t)
    {
        solve();
    }
}



