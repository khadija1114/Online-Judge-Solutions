#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
template<typename T>
using orderedMultiset = tree<T ,null_type,std::less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define w(x) scanf("%d",&x);while(x--)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
int t;

void solve()
{
   int n, m, a;
   cin >> n;

   orderedMultiset<int> ms;

   ll ans = 0;
   for (int i = 0; i < n; i++) {
        cin >> a;
        ms.insert(a);
        ans += (ms.size() - ms.order_of_key(a) - 1);
   }

   cout << ans << endl;
}


int main()
{
    //ios
    w(t)
    solve();
}





