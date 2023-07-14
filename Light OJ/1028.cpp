#include<bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//using orderedMultiset = tree<T ,null_type,std::less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6;
bool isntPrime[N];
vector<int> prime;
int t,cs=0;


void sieve()
{
    int i, m = sqrt(N);
    prime.pb(2);
    for (i = 2; i < N; i += 2) isntPrime[i] = true;

    for (i = 3; i < m; i+=2) {
        if (!isntPrime[i]) {
            prime.pb(i);
            for (int j = i*i; j < N; j+= 2*i)
                isntPrime[j] = true;
        }
    }

    for ( ; i < N; i += 2){
        if (!isntPrime[i])
            prime.pb(i);
    }

    return;
}


void solve()
{
    ll n;
    scanf("%lld", &n);

    if (n == 1){
        printf("Case %d: 0\n", ++cs);
        return ;
    }
    int ans = 1;

    for (int i = 0; i < prime.size();  i++) {
        ll p = prime[i];

        if (p*p > n) break;
        int pow = 0;

        while (n % p == 0) {
            n /= p;
            pow++;
        }

        ans *= (pow + 1);

    }

    if (n > 1) {
        ans *= 2;
    }

    printf("Case %d: %d\n", ++cs, ans-1);
    return ;

}



int main()
{
    sieve();
    w(t)
    {
        solve();
    }
}



