#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, ans = 0, w = 0, i;
    cin >> n;
    int ar[n];
    for (i = 0; i < n; i++){
        cin>>ar[i];
        w += ar[i];
    }
    sort (ar, ar + n);

    for (i = 0; i < n-1; i++){
        ans += w * ar[i];
        w -= ar[i];
        ans += w * ar[i];
    }
    ans += ar[n-1] * ar[n-1];

    cout  << ans << "\n";
}
