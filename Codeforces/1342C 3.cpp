#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

long long int mod=1e9+9;
const int N=100000;
long long l,r, t,i,j,cs=0,n,a,b;
//string s;
long long lcm(ll a,ll b)
{
    ll g=__gcd(a,b);
    if(b>a) swap(a,b);
    return (a/g)*b;
}
int main()
{
    ios
    w(t){
        cin>>a>>b>>n;
        ll m=max(a,b);
        //ll s=min(a,b);
        ll lc=lcm(a,b);
        while(n--){
            cin>>l>>r;
            if(m> l && m>r){
                cout<<0<<" ";
                continue;
            }
            if(l<m) l=m;
            long long ans=r-l+1;

            ll f=(l/lc);
            ll sec=(r/lc);// cout<<lc<<" "<<f<<" "<<s<<" ";
            sec--;
            f++;

            if(sec>f)
            ans-=(sec-f)*m;
          //  cout<<ans<<endl;
            for(i=0;i<=m;i++){
                if((f-1)*lc +i  >=l) ans--;
            }
            if(f-1 != sec+1){
            for(i=0;i<=m;i++)
                 if((sec+1)*lc +i <=r) ans--;
            }

            cout<<ans<<" ";

        }
        cout<<endl;
    }
}


