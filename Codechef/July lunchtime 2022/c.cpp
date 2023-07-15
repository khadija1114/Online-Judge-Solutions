#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector <long long> v1, ar(n), br(n), v2;
    long long mn = 1e11;

    for (auto &it: ar)
        cin >> it;
    sort(ar.begin(), ar.end());

    for (int i = n/2; i < n; i++) {
        v1.push_back(ar[i]);
    }

    for (auto &it: br)
        cin >> it;
    sort(br.begin(), br.end());

    for (int i = n/2; i < n; i++) {
        v2.push_back(br[i]);
    }

    for (int i = 0, j = v1.size()-1; j >= 0; i++, j--) {
        v1[i] += v2[j];
      //  cout << v1[i] << endl;
        mn = min(mn, v1[i]);
    }

    cout << mn << endl;


}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


