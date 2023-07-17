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
long long  mod=1e9+7;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,cnt[N],prime[N];
bool mark[N];

void seive(){
    prime[k++]=2;
    for(i=3;i<N;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=3*i;j<N;j+=2*i){
                mark[j]=1;
            }
        }
    }
}
int main()
{
    cin>>n;
    int ar[n];
    rep(i,n-1) cin>>ar[i];

    seive();
    //for(i=0;i<100;i++) cout<<prime[i]<<endl;
    for(i=0;i<n;i++){
        int a=ar[i];
        if(a==1) cnt[1]=1;
        for(j=0;prime[j]*prime[j]<=a && j<k;j++){
            if(a%prime[j]==0){
                while(a%prime[j]==0)
                    a/=prime[j];
                cnt[prime[j]]++;
               // cout<<prime[j]<<endl;
            }
        }
        if(a>1) cnt[a]++;
    }
   // for(i=0;i<N;i++) if(cnt[i]) cout<<i<<" "<<cnt[i]<<endl;
    int mx=*max_element(cnt,cnt+N);
    if(mx==1) cout<<"pairwise coprime"<<endl;
    else if(mx<n) cout<<"setwise coprime"<<endl;
    else cout<<"not coprime"<<endl;

}

