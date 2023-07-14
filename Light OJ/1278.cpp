#include<bits/stdc++.h>
using namespace std;
const int N=1e7+2;
int prime[N/10],k;
bool mark[N];
void sieve()
{
    int i,j;
   // prime[k++]=2;
    int m=sqrt(N);
    for(i=3;i<=m;i+=2){
        if(!mark[i]){
            prime[k++]=i;
            for(j=i*i;j<N;j+=2*i) mark[j]=1;
        }
    }
    for( ;i<N;i+=2){
        if(!mark[i]) prime[k++]=i;
    }

}
int main()
{
    sieve();
    int t,i,j,pow,cs=0;
    long long n,ans,m;
    scanf("%d",&t);
    while(t--){
            j=0,ans=1;
        scanf("%lld",&n);
        m=sqrt(n);
        while(n%2==0) n/=2;
        for(j=0;j<k&&prime[j]<=m&&n!=1;j++)
        {
                pow=0;
            while(n%prime[j]==0){
                n=n/prime[j];
                pow++;
            }
        //    cout<<prime[j]<<" "<<pow<<" "<<n<<endl;
        ans*=(pow+1);
        }
        if(n>1) ans*=2;
       printf("Case %d: %lld\n",++cs,ans-1);
    }
}
