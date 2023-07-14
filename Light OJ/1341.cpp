#include<bits/stdc++.h>
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef vector<int> vi;

const int N=1e6+2;
int t,cs=0;
vi prime;
bool notPrime[N];



void sieve()
{
    int i;
    prime.pb(2);
    int n = sqrt(N);

    for (i = 2; i < N; i += 2) notPrime[i] = true;

    for (i = 3; i < n; i += 2) {
        if (!notPrime[i]) {
            prime.pb(i);
            for (ll j = i*i; j < N; j += i+i)
                notPrime[j] = true;
        }
    }

    for ( ; i < N; i += 2) {
        if (!notPrime[i])
            prime.pb(i);
    }
}


int numberOfDivisors(ll n)
{
    ll div = 1;

    for (int i = 0; i < prime.size(); i++) {
        ll p = prime[i];
        if (p*p > n)
            break;
        int temp = 0;

        while (n % p == 0) {
            n/=p;
            temp++;
        }

        div *= (temp+1);
    }

    if (n != 1) div = div<<1;

    return div;
}


ll solve()
{
    ll n, b;
    scanf ("%lld %lld", &n, &b);

    if (b*b >= n) {
        return 0;
    }
    ll div = numberOfDivisors(n);
    div = div>>1;

    for (ll i = 1; i < b; i++) {
        if (n % i == 0){
            div--;
        }
        if (div == 0)
            break;
    }

    return div;
}



int main()
{
    sieve();
    w(t){
        printf("Case %d: %lld\n", ++cs, solve());
    }
}



