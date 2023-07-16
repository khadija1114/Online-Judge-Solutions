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

const int N=55;
int t,j,cs=0,n,a,b,i,prime[N],k,cnt[51],cnt1[51];;
bool mark[N];
ll mul=1,ans,div=1;

void sieve(){
    prime[k++]=2;
    for(i=3;i<N;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=i;j<N;j+=2*i)
                mark[j]=true;
        }
    }
}
int main()
{
    sieve();
    cin>>k>>n;
    for(i=0;prime[i]<=n;i++){
        if(n/prime[i]<k)
            break;
        for(j=1;j<=n/prime[i];j++)
            cnt[j]++;
        for(j=1;j<=(n/prime[i] - k);j++)
            cnt1[j]++;
    }
     for(j=1;j<=k;j++)
            cnt1[j]++;

    for(i=2;i<n;i++){
        if(cnt[i]){
            for(j=0;j<cnt[i];j++){
                mul*=i;
            }
        }
        if(cnt1[i]){
            for(j=0;j<cnt[i];j++){
                div*=i;
            }
        }
    }
    cout<<mul<<" "<<div<<endl;
    ans=mul/div;

    if(ans<10000)
        cout<<ans<<endl;
    else cout<<10000<<endl;
}


