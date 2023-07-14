#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    int k;
    cin >> n >> k;
    vector<long long> primes(k);
    for (auto &it: primes) cin >> it;

    long long ans = 0;

    for (int i = 1; i < (1<<k); i++) {
        int setElements = 0;
        long long divisible = n;
        for (int j = 0; (1<<j) <= i; j++) {
            if (i & (1<<j)) {
                setElements++;
                divisible /= primes[j];
            }
        }

        if (setElements&1)
            ans += divisible;
        else
            ans -= divisible;

      //  cout << i << " " << setElements << " " << divisible << endl;
    }

    cout << ans << endl;

}

