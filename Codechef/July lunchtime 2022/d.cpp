#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;

    vector <int> v(n);
    for (auto &it: v) cin >> it;

    long long sum = 0;
    int cnt = 0;

    sort (v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (sum + v[i] > n-1)
            break;
        sum += v[i];
        cnt++;
    }

    return cnt;


}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}



