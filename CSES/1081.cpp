#include<bits/stdc++.h>
using namespace std;
int cnt[1000002];

int main()
{
    int n, i, j, x, ans = 0;
    cin >> n;

    for (i = 0; i < n; i++){
        cin >> x;
        cnt[x]++;
    }


    for ( i = 1e6; i; i--){
        int div = 0;

        for (j = i; j <= 1e6; j += i)
            div += cnt[j];

        if (div > 1) {
            ans = i;
            break;
        }

    }

    cout << ans << "\n";

}
