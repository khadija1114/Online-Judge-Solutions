#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
using namespace std;
const int N=1000001;
int t,i,j,cs=0,a,b,prime[N+2],k=0;
bool mark[N+2];

void sieve(){
    prime[k++]=2;
    int m=sqrt(N);
    for(i=3;i<=m;i+=2){
        if(mark[i]==0){
            for(j=i*i;j<N;j+=(2*i))
                mark[j]=1;
        }
    }
    for(i=3;i<N;i+=2){
        if(mark[i]==0)
            prime[k++]=i;
    }
}

int main()
{
   // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    long long int ans,n;

    w(t){
        scanf("%lld",&n);
        a=sqrt(n);
        ans=1;
        for(i=0;i<k && prime[i]<=a && n>=prime[i];i++){
            if(n%prime[i]==0){
                b=0;
                while(n%prime[i]==0){
                    n/=prime[i];
                    b++;
                }
                ans*=(b+1);
            }
        }
        if(n>1) ans*=2;
       printf("Case %d: %lld\n",++cs,ans-1);

    }
}


