#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t;
    cin >> t;
    while (t--){
        cin >> n;
        long long mx = 0, ar[n];
        for (auto &it : ar) cin >> it;

        for (i = 1; i < n; i++){
            mx = max (mx, ar[i] * ar[i-1]);
        }

        cout << mx << endl;
    }


}
