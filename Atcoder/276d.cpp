#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    vector <int> v(n), two(n), three(n);
    int mn2 = INT_MAX, mn3 = INT_MAX, i = 0, ans = 0;

    for (auto &it: v) {
        cin >> it;

        while (it % 2 == 0) {
            it /= 2;
            two[i]++;
        }
        while (it % 3 == 0) {
            it /= 3;
            three[i]++;
        }

        mn2 = min(mn2, two[i]);
        mn3 = min(mn3, three[i]);

        ans += two[i] + three[i];
        i++;

    }

    for (int i = 1; i < n; i++)
        if (v[i] != v[0])
        return -1;

    ans -= n*mn2;
    ans -= n*mn3;


    return ans;
}

int main()
{
    cout << solve() << endl;
   // main();
}

