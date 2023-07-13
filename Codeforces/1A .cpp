#include<stdio.h>
int main()
{
    long long int a,b,c,x,y;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a%c==0)
        {
            x=(a/c);
        }
    else if(a%c!=0)
        {
            x=(a/c)+1;
        }
    if(b%c==0)
    {
        y=(b/c);
    }
    else if(b%c!=0)
    {
        y=(b/c)+1;
    }
    printf("%lld\n",x*y);
    return 0;
}
