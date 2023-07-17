#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    double t = 0, ans = 0,ar[n], br[n];;
    for (i = 0; i < n; i++){
         cin >> ar[i] >> br[i];
         t += ar[i] / br[i];
    }
    t /= 2;

    for (i = 0; i < n && t ; i++){
        ans += min (t * br[i], ar[i]);
        t -= min (t, ar[i] / br[i]);
    }

    cout << fixed << setprecision(10) << ans << endl;

}
