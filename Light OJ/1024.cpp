#include<bits/stdc++.h>
using namespace std;
int mark[10000],prime[10000], k=0;
void sieve()
{
    int i,j;
    prime[k++]=2;
    for(i=3;i<=10000;i+=2)
    {
        if(!mark[i]){
            prime[k++]=i;
            for(j=i*i;j<10000;j+=2*i) mark[j]=1;
        }
    }
}
int main()
{
    sieve();
    long long t,i,j,n,lcm,a,b;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&n,&a);
        for( j=0;j<=k;j++) cout<<prime[j]<<endl;
        for(j=1;j<n;j++){
            scanf("%lld",&b);
            a=a*(b/__gcd(a,b));
        }

        printf("Case %lld: %lld\n",i,a);
    }
}

