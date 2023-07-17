#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, type, k, val;
    cin >> n;
    vector <int> v(n);
    for (auto &it: v) cin >> it;

    cin >> q;
    while (q--) {
        cin >> type;
        if (type == 1) {
            cin >> k >> val;
            v[k-1] = val;
        }
        else {
            cin >> k;
            cout << v[k-1] << "\n";
        }
    }
}


