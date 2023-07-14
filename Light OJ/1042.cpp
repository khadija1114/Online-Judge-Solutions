#include<stdio.h>

int onecount( int n)
{
     int j;
    int count=0;
    for(j=1;j<=n;j*=2)
    {
        if(n&(j)!=0) count++;
    }

    return count;

}

int getrslt(int num)
{
    int rslt,j;
     for(j=1;j<=num;j*=2)
    {
        if(num&(j)!=0)
        {
            rslt=num+j;
            break;
        }
    }

    int diff=onecount(num)-onecount(rslt);

    for(j=0;j<diff;j++)
    {
        rslt+=(1<<j);
    }

    return rslt;

}

int main ()
{
    int N,t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d",&N);

        printf("Case %d: %d\n",i+1,getrslt(N));

    }

    return 0;
}











