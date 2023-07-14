#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e5+2;
long long  mod=1e9+7;
int t,j,cs=0,a,b,i,k;
vector<pii> factor;
bool mark[N+2];
vector<ll> prime;

ll bigmod(ll n,ll p)
{
    if(p==1) return n;

    ll a=bigmod(n,p/2);
    a=a%mod;
    if(p&1)
        return (((a*a)%mod)*n)%mod;
    else
        return (a*a)%mod;
}

void sieve()
{
    prime.pb(2);
    ll i,j;
    for(i=3;i<N-1;i+=2){
        if(!mark[i]){
          //  cout<<i<<endl;
            prime.pb(i);
            for(j=(i*i);j<N-1;j+=(2*i))
                mark[j]=1;
        }
    }
  //  cout<<prime.size()<<endl;
}

ll invmod(ll n)
{
    return bigmod(n,mod-2);
}

void factorization(ll n)
{
    for(i=0;prime[i]*prime[i]<=n;i++){
        int cnt=0;
        while(n%prime[i]==0){
            cnt++;
            n/=prime[i];
        }
        if(cnt) factor.pb({prime[i],cnt});
    }
    if(n>1) factor.pb({n,1});
}

int main()
{
    sieve();
   cout<<prime[9590]*prime[9590]<<endl;
    ll n,m;
    w(t){
        scanf("%lld%lld",&n,&m);
        factor.clear();
        ll ans=1;
        if(n!=mod)
            factorization(n);
        for(auto it:factor){
            ll a=it.ff,b=it.ss;
           // cout<<a<<" "<<b<<endl;
            ll x=((bigmod(a,b*m+1)-1)+mod)%mod;
            ll y=(invmod(a-1)+mod)%mod;
         //   cout<<bigmod(a,b*m+1)<<" "<<invmod(a-1)<<endl;
            ans=(ans*x)%mod;
            ans=(ans*y)%mod;
        }
        printf("Case %d: %lld\n",++cs,ans);
    }
}
