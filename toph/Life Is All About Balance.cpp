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
    vi v(n);

    multiset<int> st;
    for (auto &it: v) {
        cin >> it;
        st.insert(it);
    }

    int mx1 = 0, mx2 = 0, mn1 = 1e9+10;

    for (int i = 0; i < n-1; i++) {
        auto it = st.find(v[i]);
        st.erase(it);

        int b = v[i]-v[0];
        mx1 = max(b, mx1);
        mn1 = min(b, mn1);

        int a = *st.rbegin()-*st.begin();

        if (a == mx1-mn1)
        {
           // cout << i << endl;
            cout << 0 << endl;
            return ;
        }

    }

    cout << 1 << endl;
    return ;
}



int main()
{
    w(t)
    {
        solve();
    }
}



