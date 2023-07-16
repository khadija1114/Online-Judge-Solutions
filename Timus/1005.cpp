#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, tmp = 0, sum = 0, n, ans = (1 << 22);
    cin >> n;
    int ar[n];
    for (i = 0; i < n; i++){
        cin >> ar[i];
        sum += ar[i];
    }

    for (int mask = 0; mask < (1 << n); mask++){
        tmp = 0;
        for (i = 0; i < n; i++){
            if(mask & (1 << i)) tmp += ar[i];
        }

        ans = min(ans, abs(2 * tmp - sum));
    }

    cout << ans << "\n";
}
