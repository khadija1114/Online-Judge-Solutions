#include<bits/stdc++.h>
#define mod 1e9+9
#define  mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) cin>>x;while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef map<int,int> mii;
typedef vector<int> vi;
const int N=100001;
int t,i,j,cs=0,n,spf[N+1];
void small_factor()
{
    spf[1]=1;
    for(i=2;i<N;i+=2) spf[i]=2;
    for(i=3;i<N;i+=2){
        if(!spf[i]){
            for(j=i;j<N;j+=2*i)
                if(!spf[j])
                    spf[j]=i;
        }
    }
}

mii prime_factor(int a){
    mii prime;
    int x;
    if(a==1){
        prime[a]=1;
        return prime;
    }
    while(a!=1){
       x=1;
       while(spf[a]==spf[a/spf[a]]){
            a/=spf[a];
            x++;
       }
       prime[spf[a]]=x;
    //   cout<<spf[a]<<" "<<x<<endl;
       a/=spf[a];
    }
   // cout<<endl;
    return prime;
}

int main()
{
    ios
    small_factor();
    ll ans=0;
    int present,need,a,k,power;
    mii mp;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a;
        mii factors=prime_factor(a);
       present=1,need=1;
       bool flag=true;
       for(auto it=factors.begin();it!=factors.end();it++){
            power=(it->ss)%k;
            for(j=0;j<power;j++)
                present*=(it->ff);
            for(j=0;j<k-power && flag && power;j++){
                need*=(it->ff);
                if(need>N){
                    flag=false;
                    break;
                }
            }
       } //cout<<it->ff<<" "<<it->ss<<endl;
       // cout<<factors.size();
       if(flag && mp[need]!=0)
        ans+=mp[need];
       mp[present]++;
    }
    cout<<ans<<endl;

}

