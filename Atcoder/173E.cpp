#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+7,ans=1,mul1,mul2;
int t,j,cs=0,n,a,b,i,k,x,y;
string s;

int main()
{
    cin>>n>>k;
    int zero=0;
    vector<int> pos,neg;
    for(i=0;i<n;i++){
        cin>>a;
        if(a>0) pos.pb(a);
        else if(a<0) neg.pb(-1*a);
        else zero++;
    }
    sort(neg.begin(),neg.end());
    sort(pos.begin(),pos.end());

   // for(auto it:pos) cout<<it<<" ";
    if(n-zero<k || (n==k && zero)){
        cout<<0<<endl;
        return 0;
    }
    if(pos.size()==0 && k&1){
        if(zero)
        {
            cout<<0<<endl;
            return 0;
        }
        for(i=0;i<k;i++){
            ans=(ans*neg[i])%mod;
        }
        ans=mod-ans;
        cout<<ans<<endl;
        return 0;
    }
    x=pos.size()-1,y=neg.size()-1;
    if(k==n){
         for(auto it:neg)
            ans=(ans*it)%mod;
        if(neg.size()&1) ans=mod-ans;
        for(auto it:pos)
            ans=(ans*it)%mod;

        cout<<ans<<endl;
        return 0;
    }

    if(k==n-zero && neg.size()&1){
        cout<<0<<endl;
        return 0;
    }
    if(k&1){
        ans=(ans*pos[x])%mod;
        x--;
        k--;
    }
   // cout<<x<<" "<<y<<endl;
    for(i=0;i<k;i+=2){
        mul1=0,mul2=0;
      //  cout<<pos[x]<<" "<<pos[x-1]<<endl;
        if(x>0){
            mul1=pos[x];
            mul1=mul1*pos[x-1];
        }
        if(y>0){
            mul2=neg[y];
            mul2=mul2*neg[y-1];
        }
        if(mul1>mul2){
            mul1=mul1%mod;
             ans=(ans*mul1)%mod;
             x-=2;
        }
        else{
            mul2=mul2%mod;
            ans=(ans*mul2)%mod;
            y-=2;
        }
        //cout<<mul1<<" "<<mul2<<endl;
    }

    cout<<ans<<endl;

}

