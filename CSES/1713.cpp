#include<bits/stdc++.h>
#define pb push_back
using namespace std;

const int N = 1e6+2;
vector<long long> prime;
bool mark[N];

void sieve()
{
    long long i , j ;

    prime.pb(2);

    for ( i = 3; i < N; i += 2){
        if (!mark[i]){
            prime.pb(i);
            for (j = i*i; j < N; j += 2*i)
                mark[j] = 1;
        }
    }
}

int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--){
        long long ans = 1;
        int n, i, j;

        cin >> n;

        for (i = 0; i < prime.size() && prime[i]*prime[i] <= n; i++){
            int temp = 1;
            while ( n % prime[i] == 0){
                n /= prime[i];
                temp++;
            }

            ans  *= temp;
        }

        if ( n > 1 ) ans *= 2;

        cout << ans << "\n";
    }
}

