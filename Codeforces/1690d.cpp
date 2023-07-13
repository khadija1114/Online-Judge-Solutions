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
    int n, k;
    cin >> n>> k;

    vector <int> v(n+1);
    string s;

    cin >> s;

    for (int i = 1; i <= n ;i++) {
        int temp = 0;
        if (s[i-1] == 'W') temp = 1;

        v[i] = v[i-1] + temp;
    }

    int mn = 1e9;

   // for (int i = 0; i <=n; i++) cout << v[i] << " ";

    for (int i = 1; i+k-1 <= n; i++) {
        mn = min(mn, v[i+k-1]-v[i-1]);
     //   cout << i << " " << i+k-1 << endl;
    }

    cout << mn << endl;
}



int main()
{
    w(t) {
        solve();
    }
}




