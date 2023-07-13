#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, i;
    cin >> t;
    while (t--){
        cin >> n >> k;

        int ar[n], mex = 0, mx = 0;
        bool bl[n+1] = {};
        for (i = 0; i < n; i++){
            cin >> ar[i];
            if(ar[i] <= n) bl[ar[i]] = true;
            mx = max(mx, ar[i]);
        }

        while (bl[mex]) mex++;
        if (mex > mx || !k){
            cout << n+k << "\n";
        }
        else {
            int a = (1 + mx + mex) / 2;
            bool flag = false;
            for (i = 0; i < n; i++){
                if (ar[i] == a){
                    flag = true;
                }
            }

            if (flag) cout << n << "\n";
            else cout << n+1 << "\n";
        }
    }
}
