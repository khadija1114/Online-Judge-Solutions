#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
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
long long  mod=1e9+9,a,b;
int t,j,cs=0,n,k,i;
string s;

int main()
{
    w(t){
        cin>>n>>k;
        ll cnt[31]={};
        ll  ar[n],ans=0;

        for( i=0;i<n;i++){
            cin>>ar[i];
        }

        for(i=0;i<n;i++){
            a=ar[i];
            for(ll j=0;j<31;j++){
               // if((1<<j)>a) break;
                if((1LL<<j)&a)
                    cnt[j]++;
            }
        }
        for(i=0;i<31;i++){
            //if(cnt[i]==0) continue;

            a=(1LL<<i);
           cnt[i]*=a;

        }
      //  for(auto it:cnt) cout<<it<<" ";
        for(i=0;i<k;i++){
               ll a=0;
            for(ll j=0;j<31;j++){
                if(a<cnt[j]){
                    b=j;
                    a=cnt[j];
                }
            }
            if(a==0) break;
            ans+=(1LL<<b);
            cnt[b]=0;
        }
        cout<<ans<<endl;
    }
}


