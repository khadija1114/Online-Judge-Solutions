#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> v(n); for (auto &it: v) cin >> it;

    int prefix_xor[2*n+2] = {}; prefix_xor[0] = 1;
    long long oddDiv = 0; int pre_xor = 0;

    for (auto it: v) {
        pre_xor ^= it;

        for (int i = 0; i*i < 2*n && int(pre_xor^(i*i)) < 2*n; i++) {
          //  cout <<"  " <<  i << " " << int(pre_xor^(i*i)) << " " << prefix_xor[pre_xor^(i*i)] << endl;
            oddDiv += prefix_xor[pre_xor^(i*i)];
        }

        prefix_xor[pre_xor]++;
      //  cout << pre_xor << " " << oddDiv << endl;
    }

    long long ans = 1LL*n*(n+1)/2 - oddDiv;
    cout << ans << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
