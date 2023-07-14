#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{

    int t,i;
    long long int n,sq,row,te,col;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        sq=sqrt(n);
        int dif=n-sq*sq;
        if(sq*sq==n)
        {
            row=1;
            col=sq;
        }
        else if(dif>sq)
        {
            row=sq+1;  col=2*sq+2-dif;
        }
        else
        {
            row=n-sq*sq;
            col=sq+1 ;
        }
        if(sq&1)
        {
            te=row;row=col;col=te;
        }
        printf("Case %d: %lld %lld\n",i+1,col,row);

    }
    return 0;
}
