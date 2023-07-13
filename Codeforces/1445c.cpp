#include<bits/stdc++.h>
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

const int N=1e5;
long long  mod=1e9+9,n;
int t,j,cs=0,a,b,i,prime[N],k,m;
vi factor;

void factoring(int a){
    int b=sqrt(a);
    for(i=2;i<=b;i++){
        if(a%i==0){
            factor.pb(i);
            factor.pb(a/i);
        }
    }
}
int main()
{
   // sieve();
    w(t){
        cin>>n>>m;
        if(n%m){
            cout<<n<<endl;
            continue;
        }
        factor.clear();
        factoring(m);
        ll ans=0;
        for(auto it:factor){
            ll a=n;
            while(a%m==0){
                a/=it;
            }
            ans=max(ans,a);
        }
        cout<<ans<<endl;
    }
}



