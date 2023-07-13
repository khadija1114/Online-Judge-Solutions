#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n, i, one = 0;
    cin >> n;

    vector <int> a(n);

    for (auto &it: a) {
        cin >> it;
        if (it == 1) one++;
    }
    sort (a.begin(), a.end());


    for (i = one; i > 0; i--) {
        int ind = (i-1)*2, temp = i;
        if (ind >= n) continue;

        if (a[ind] < i) return i;

        for (int j = ind; j >= i-1 && temp; j--, temp--) {
            while (j >= i-1 && a[j] > temp)
                j--;
        }

        if (!temp)
            return i;
    }

     return 0;


}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}


