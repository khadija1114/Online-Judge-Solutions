#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    int n;
    cin >> n;
    long long sum = 0, mx = 0;

    vector <long long> a(n), b(n);

    for (auto &it: a) {
        cin >> it;

        sum += it;
    }
    for (auto &it: b) {
        cin >> it;
        sum += it;
        mx = max(mx, it);
    }


    sum -= mx;

    return sum;

}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}

