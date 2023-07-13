#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), freq(1005);
        int dif = 0;

        for (auto &it: v) {
            cin >> it;
            freq[it]++;
            if (freq[it] == 1)
                dif++;
        }

        if (n == 1 || dif > 2) {
            cout << n << endl;
        }else
            cout << n/2 + 1 << endl;

    }
}
