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
    cin >> n;
    if (n&1) {
        if (n == 1)
            cout << 3;
        else
            cout << 1;
        cout << endl;
        return ;
    }

    if ((n & (n-1)) == 0){
        cout << n+1 << endl;
      //  cout << n << endl;
        return ;
    }

    int ans = 1;
    while (n % 2 == 0){
        n /= 2;
        ans *= 2;
    }
    cout << ans << endl;

}



int main()
{
    w(t) {
        solve();
    }
}



