#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
vector <int> prime(N); // smallest factor

void sieve()
{
    for (int i = 2; i < N; i += 2) prime[i] = 2;

    for (long long i = 3; i < N; i += 2) {
        if (!prime[i]) {
            for (long long j = i; j < N; j += i+i)
                if (!prime[j])
                    prime[j] = i;
        }
    }
}


int main()
{
    sieve();

    int n, k;
    map<long long, int> mp;
    long long ans = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        long long temp1 = 1, temp2 = 1;

        while (a > 1) {
            int p = prime[a];

            int tmp = 1;
            a/=p;

            while (prime[a] == p) {
                a /= p;
                tmp++;
            }

           // cout << a << " " << p << " " << tmp << endl;

            tmp = tmp % k;
            if (!tmp)
                continue;

            for (int i = 0; i < tmp; i++)
                temp1 *= p;
            for (int i = 0; i < k-tmp; i++)
                temp2 *= p;

           // cout << p << " " << tmp << " " << temp1 << " " << temp2 << endl;
        }

        ans += mp[temp2];
        mp[temp1]++;

        //cout << temp1 << " " << temp2 << endl;
    }

    cout << ans << endl;
}
