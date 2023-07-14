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

const int N=31;
int t,cs=0;
ll ncr[N][N], fact[N];

ll nCr (int n, int r)
{
    if (n == r || r == 0) return 1;
    if (r == 1) return n;
    if (ncr[n][r] != -1) return ncr[n][r];

    return ncr[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
}

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);

    ll ans = 0;
    if (n >= k)
        ans = nCr(n, k);

    ans *= ans;
    ans *= fact[k];

    printf("Case %d: %lld\n",++cs, ans);

   // cout << ncr [n][k] << endl;
}



int main()
{
    fact[0] = 1;
    for (int i = 1; fact[i-1] < 1e17; i++) {
        fact[i] = fact[i-1] * i;
//        cout << i << " " << fact[i] << endl;
    }

    for (auto &it: ncr) {
        for (auto &itt: it)
            itt = -1;
    }


    w(t)
    {
        solve();
    }
}



