#include<stdio.h>
int main()
{
    long long i=0,t,j,ar[100005],sum,ans,x,n,v,q,bl;
    scanf("%lld",&t);
    while(t--){
            sum=0;
        scanf("%lld %lld",&n,&q);
        for(j=1;j<=n;j++) {
            scanf("%lld",&ar[j]);
            sum+=(n-j)*ar[j];
            sum-=(j-1)*ar[j];
        }
        printf("Case %lld:\n",++i);
        while(q--){
            scanf("%lld",&bl);
            if(bl){
                printf("%lld\n",sum);
            }
            else{
                scanf("%lld%lld",&x,&v);
                sum += (x-n+x+1)*ar[x+1]+v*(n-x-1-x);
                ar[x+1]=v;
            }
        }
    }
}
