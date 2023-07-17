#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
vector <int> prime;

void sieve()
{
    prime.push_back(2);
    bool vis[N] = {};

    for (long long i = 3; i < N; i += 2) {
        if (!vis[i]) {
            prime.push_back(i);
            for (long long j = i * i; j < N; j += i + i)
                vis[j] = true;
        }
    }
}

int main()
{
    sieve();

    long long n;
    cin >> n;

    if (n == 1){
        cout << 0 << endl;
        return 0;
    }

    int cnt = 0;
    for (int i = 0; i < prime.size(); i++) {
        long long p = prime[i];
        if (p*p > n) break;
        long long temp = p;

        while (n%p == 0) {
           // cout << p << " ";
            n /= p;
            p *= temp;
            cnt++;
        }
        while (n % temp == 0)
            n /= temp;
    }

    if (n != 1)
        cnt++;

    cout << cnt << endl;
}
