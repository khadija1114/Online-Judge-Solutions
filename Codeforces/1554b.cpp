#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    long long k;
    cin >> t;
    while (t--){

        cin >> n >> k;
        long long i, j, ar[n], mx = -1e12;
        for (auto &it: ar) cin >> it;

        for (i = max (0LL, n - 2*k); i < n; i++){
            for (j = i+1; j < n; j++){
                mx = max (mx, (i+1)*(j+1) - k*(ar[i]|ar[j]));
            }
        }

        cout << mx << endl;

    }


}

