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

const int N=1e6;
long long  mod=1e9+9,ar[N],pre[N],sum[N];
int t,j,cs=0,n,a,b,i;
ll ans=0,x,en,cur,lft,ext;

int main()
{
    cin>>n>>x;
    for(i=1;i<=2*n;i++){
        if(i<=n)
            cin>>ar[i];
        else
            ar[i]=ar[i-n];

        pre[i]=pre[i-1]+ar[i];
        sum[i]=sum[i-1]+ar[i]*(ar[i]+1)/2;
    }

    for(i=1;i<=n;i++){
        en=lower_bound(pre+1,pre+2*n+1,x+pre[i-1])-pre;

        if(en==i){
            cur=ar[i]*(ar[i]+1)/2;
            lft=ar[i]-x;
            cur-=lft*(lft+1)/2;
            ans=max(ans,cur);
        }
        else{
            cur=sum[en-1]-sum[i-1];

            lft=pre[en-1]-pre[i-1];
            lft=x-lft;
            cur+=lft*(lft+1)/2;

            ext=min(ar[i]-1,ar[en]-lft);

            cur+=lft*ext;
            ans=max(ans,cur);
        }
    }

    cout<<ans<<endl;
}

