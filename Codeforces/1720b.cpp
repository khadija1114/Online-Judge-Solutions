#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for (auto &it: v) cin >> it;
        sort (v.begin(), v.end()) ;

        cout << v[n-1] + v[n-2] - v[0] - v[1] << endl;

    }
}

