#include<stdio.h>
int main()
{
    int i=0,j,t;
    long long a,b,n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld",&a,&b);
        if(a==0||b==0) n=0;
        else
        n=(b*1.0/(2.0*a))+0.499999;
        printf("Case %d: %lld\n",++i,n);
    }
    return 0;
}
