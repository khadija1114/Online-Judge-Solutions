#include<bits/stdc++.h>
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=100002;
int t,i,j,cs=0,n,a,b,prime[N],k=0,smf[N];
bool mark[N];
void sieve(){
    n=sqrt(N);
    for(i=3;i<n;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=i*i;j<n;j+=2*i)
                mark[j]=1;
        }
    }
}
void small_factor( ){
    sieve();
    for(i=2;i<N;i+=2) smf[i]=2;
    for(i=1;i<N;i+=2) smf[i]=i;
    for(i=0;i<k;i++){
            for(j=prime[i];j<N;j+=2*prime[i]){
                if(smf[j]==j)
                    smf[j]=prime[i];
        }
    }
}
int main()
{
    small_factor();
    scanf("%d%d",&n,&a);
    int ar[n];
    long long ans=0;
    map<int,int> mp;
    rep(i,0,n-1){
        cin>>ar[i];
    }
    rep(j,0,n-1){
        int x,need=1;
        x=ar[j];
        ar[j]=1;
       // cout<<x<<" ";
        while(x!=1){
            int p=0;
            int s=smf[x];
            while(x%s==0){
                p++;
                x/=s;
            }
            if(p%a){
            for(i=0;i<p%a;i++){
                ar[j]*=s;
                //cout<<ar[j]<<" ";
            }
            for(i=0;i<a-p%a;i++){
                 need*=s;
                 if(need>N)
                    break;
            }
            // cout<<ar[j]<<" "<<p;
            }
        }
      // cout<<endl;

        if(need<N && mp[need])
            ans+=mp[need];
        mp[ar[j]]++;
    }
   printf("%lld\n",ans);
}


