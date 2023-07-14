#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long a1;
        cin >> n;
        vector <int> v;
        cin >> a1;

        for (int i = 1; i < n; i++) {
            int aj;
            cin >> aj;
            if (aj > a1) v.push_back(aj);
        }

        sort(v.begin(), v.end());

        for (auto it: v) {
            if (it > a1) {
                a1 += (it-a1+1)/2;
            }
        }

        cout << a1 << endl;
    }
}

