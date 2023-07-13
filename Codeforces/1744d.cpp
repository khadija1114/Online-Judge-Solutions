#include<bits/stdc++.h>
using namespace std;


int solve()
{
    int n;
    cin >> n;
    long long cnt = 0, pwr = 1;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        while (a%2 == 0) {
            a/=2;
            cnt++;
        }

    }
    if (cnt >= n)
        return 0;

    int cnt2 = 0;

    while (pwr*2 <= n) {
        pwr*=2;
        cnt2++;
    }

    int op = 0;
    bool mark[n+10] = {};

    //cout << pwr << endl;
    while (pwr > 1) {
        for (int i = pwr; i <= n; i+=pwr) {
            if (!mark[i]) {
                mark[i] = 1;
                cnt+=cnt2;
                op++;

                if (cnt >= n) return op;
            }

        }

         pwr /= 2;
        cnt2--;
    }

   // cout << cnt << endl;

    return -1;


}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;

    }
}


