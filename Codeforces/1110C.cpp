#include<bits/stdc++.h>
#define mod 1e9+9
#define make_pair mp
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
typedef vector<int> vi;
const int N=1000000;
int mark[N+2],k=0,prime[100000];

void seive()
{
    int i,j;
    prime[k++]=2;
   // for(i=4;i<N;i+=2) mark[i]=1;
    for(i=3;i<N;i+=2){
        if(mark[i]==0){
            prime[k++]=i;
            for(j=i;j<N;j+=2*i)
                mark[j]=1;
            mark[i]=0;
        }

    }
}
int main()
{
    seive();
    int t,i,j,cs=0,bit;
     int a,b;
     scanf("%d",&t);

    while(t--){
        int ans=1;
        scanf("%d",&a);
        bit=(int)log2(a)+1;
    // cout<<bit<< " "<<log2(a)+1<<endl;
        ans=(1<<bit)-1;
    //cout<<ans<<endl;
        if(ans==a){
            if( a<N && mark[a]==0)
                ans=1;
            else{
                for(i=0;prime[i]*prime[i]<=a;i++){
                    if(a%prime[i]==0){
                        ans=a/prime[i]; break;
                    }
                }
            }
        }
    printf("%d\n",ans);
    }
}


