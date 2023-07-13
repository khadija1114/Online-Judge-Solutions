#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it: v) cin >> it;

    long long ans = 1;
    int prev = 0;

    int  i = 1, no = 1;
    while (i < n) {
        no = min(no+1, v[i]);
        ans += min(no, v[i]);
        i++;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;

    }
}


