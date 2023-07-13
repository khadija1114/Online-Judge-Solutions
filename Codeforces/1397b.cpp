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
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    cin>>n;
    int ar[n];
    ll cnt=0;
    rep(i,n-1){
    cin>>ar[i];
    cnt+=ar[i];
    }
    ll a=round(cnt*1.0/n);
    sort(ar,ar+n);
    ll ans=abs(ar[0]-1);
    for(i=1;i<n;i++){
       // if(ar[i]<a) ans+=a-ar[i];

        //a=(a*a)%mod;
    }
    cout<<ans<<endl;
}

