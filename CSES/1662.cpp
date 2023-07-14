#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sumtill = 0, i;

    cin >> n;

    int ar[n];
    long long ans = 0;
    map<long long, int> mp;
    mp[0] = 1;

    for (auto &it: ar)  cin >> it;

    for (i = 0; i < n; i++){

        sumtill = (sumtill + ar[i]) % n;
        sumtill = (sumtill + n) % n;

        ans += mp[sumtill];

        mp[sumtill]++;
    }

    cout << ans << "\n";
}
