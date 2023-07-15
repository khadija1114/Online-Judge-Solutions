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

const int N=4*1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m=1e5,prime[N];
bool mark[N];

void sieve()
{
    prime[k++]=1;
    prime[k++]=2;
    for(ll i=3;i<N;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(ll j=i*i;j<=N;j+=2*i)
                mark[j]=1;
        }
    }
}

int main()
{
    sieve();
   // cout<<prime[m]<<endl;
   w(t){
        cin>>n;
        int ar[n];
        rep(i,n-1) cin>>ar[i];
        for(i=n-1,j=0;i>=0;i--){
            if(ar[i]-1==i){
                ar[i]=prime[j++];
            }
            else{
                ar[i]=ar[ar[i]-1];
            }
        }
        rep(i,n-1)
        cout<<ar[i]<<" ";
        cout<<endl;
   }
}



